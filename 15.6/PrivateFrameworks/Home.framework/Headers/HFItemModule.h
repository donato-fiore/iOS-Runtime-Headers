// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFITEMMODULE_H
#define HFITEMMODULE_H

@class NSSet;
@protocol HFItemUpdating;

#import <Foundation/Foundation.h>

#import "HFReorderableHomeKitItemList.h"

@interface HFItemModule : NSObject

@property (readonly, nonatomic) NSSet *allItems;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableHomeKitItemList; // ivar: _clientReorderableHomeKitItemList
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, weak, nonatomic) NSObject<HFItemUpdating> *itemUpdater; // ivar: _itemUpdater
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableHomeKitItemList;
@property (readonly, nonatomic) BOOL supportsReordering;


-(BOOL)containsItem:(id)arg0 ;
-(id)_itemComparator:(SEL)arg0 ;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)init;
-(id)initWithItemUpdater:(id)arg0 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;


@end


#endif