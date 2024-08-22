// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSPINTERFACEOBJECT_H
#define WKSPINTERFACEOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WKSPInterfaceObject : NSObject

@property (copy, nonatomic) NSString *interfaceProperty; // ivar: _interfaceProperty
@property (copy, nonatomic) NSString *propertyIndex; // ivar: _propertyIndex
@property (nonatomic) NSInteger rowIndex; // ivar: _rowIndex
@property (nonatomic) NSInteger tableIndex; // ivar: _tableIndex
@property (copy, nonatomic) NSString *viewControllerID; // ivar: _viewControllerID


-(id)_initWithInterfaceProperty:(id)arg0 viewControllerID:(id)arg1 propertyIndex:(NSInteger)arg2 tableIndex:(NSInteger)arg3 rowIndex:(NSInteger)arg4 ;
-(id)init;
-(void)_sendValueChanged:(id)arg0 ;
-(void)_sendValueChanged:(id)arg0 forProperty:(id)arg1 ;
-(void)_setupWithDescription:(id)arg0 forController:(id)arg1 ;


@end


#endif