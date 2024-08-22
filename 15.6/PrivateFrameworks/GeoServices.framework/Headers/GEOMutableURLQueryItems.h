// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMUTABLEURLQUERYITEMS_H
#define GEOMUTABLEURLQUERYITEMS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GEOMutableURLQueryItems : NSObject

@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items


-(id)init;
-(id)initWithItems:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)addItemWithName:(id)arg0 intValue:(int)arg1 ;
-(void)addItemWithName:(id)arg0 uint64Value:(NSUInteger)arg1 ;
-(void)addItemWithName:(id)arg0 uintValue:(unsigned int)arg1 ;
-(void)addItemWithName:(id)arg0 value:(id)arg1 ;
-(void)addItemsFromArray:(id)arg0 ;


@end


#endif