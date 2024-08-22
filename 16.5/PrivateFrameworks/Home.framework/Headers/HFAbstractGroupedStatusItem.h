// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFABSTRACTGROUPEDSTATUSITEM_H
#define HFABSTRACTGROUPEDSTATUSITEM_H

@class NSMutableSet, NSSet;


#import "HFStatusItem.h"

@interface HFAbstractGroupedStatusItem : HFStatusItem

@property (retain, nonatomic) NSMutableSet *allItems; // ivar: _allItems
@property (retain, nonatomic) NSSet *displayedItems; // ivar: _displayedItems
@property (readonly, nonatomic) NSSet *items;


+(id)sortKey;
+(id)statusItemClasses;
-(BOOL)_hasRequiredStatusItems;
-(BOOL)shouldEncapsulateItem:(id)arg0 ;
-(id)_statusItemOfClass:(Class)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif