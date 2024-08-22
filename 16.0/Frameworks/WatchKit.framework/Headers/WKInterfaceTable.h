// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKINTERFACETABLE_H
#define WKINTERFACETABLE_H

@class NSMutableArray, NSDictionary;


#import "WKInterfaceObject.h"
#import "WKInterfaceController.h"

@interface WKInterfaceTable : WKInterfaceObject

@property (weak, nonatomic) WKInterfaceController *controller; // ivar: _controller
@property (readonly, nonatomic) NSInteger numberOfRows;
@property (retain, nonatomic) NSMutableArray *rowControllerProperties; // ivar: _rowControllerProperties
@property (retain, nonatomic) NSMutableArray *rowControllers; // ivar: _rowControllers
@property (copy, nonatomic) NSDictionary *rowDescriptions; // ivar: _rowDescriptions


-(id)rowControllerAtIndex:(NSInteger)arg0 ;
-(void)_getRowControllers:(id)arg0 rowControllerProperties:(id)arg1 forRowTypes:(id)arg2 ;
-(void)_setupWithDescription:(id)arg0 forController:(id)arg1 ;
-(void)insertRowsAtIndexes:(id)arg0 withRowType:(id)arg1 ;
-(void)performSegueForRow:(NSInteger)arg0 ;
-(void)removeRowsAtIndexes:(id)arg0 ;
-(void)resequenceRowControllerPropertyIndexes;
-(void)scrollToRowAtIndex:(NSInteger)arg0 ;
-(void)setRowTypes:(id)arg0 ;


@end


#endif