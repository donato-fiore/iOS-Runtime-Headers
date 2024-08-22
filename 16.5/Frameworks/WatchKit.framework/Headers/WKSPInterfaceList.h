// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSPINTERFACELIST_H
#define WKSPINTERFACELIST_H

@class NSArray, NSDictionary;


#import "WKSPInterfaceObject.h"
#import "WKInterfaceController.h"

@interface WKSPInterfaceList : WKSPInterfaceObject

@property (weak, nonatomic) WKInterfaceController *controller; // ivar: _controller
@property (readonly, nonatomic) NSInteger numberOfRows;
@property (retain, nonatomic) NSArray *rowControllerProperties; // ivar: _rowControllerProperties
@property (copy, nonatomic) NSArray *rowControllers; // ivar: _rowControllers
@property (copy, nonatomic) NSDictionary *rowDescriptions; // ivar: _rowDescriptions


-(id)rowControllerAtIndex:(NSInteger)arg0 ;
-(void)_setupWithDescription:(id)arg0 forController:(id)arg1 ;
-(void)setRowTypes:(id)arg0 ;


@end


#endif