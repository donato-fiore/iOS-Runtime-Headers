// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PINNEDTABSMANAGER_H
#define PINNEDTABSMANAGER_H

@class NSHashTable, NSMutableArray, NSMutableDictionary, WBCollectionConfiguration, NSArray, WBTabCollection;

#import <Foundation/Foundation.h>


@interface PinnedTabsManager : NSObject {
    NSHashTable *_observers;
    NSMutableArray *_pinnedTabs;
    NSMutableArray *_privatePinnedTabs;
    NSMutableDictionary *_pinnedTabsByUUID;
    NSMutableDictionary *_privatePinnedTabsByUUID;
    NSUInteger _updateFlags;
    NSInteger _updateSuppressionCount;
}


@property (readonly, copy, nonatomic) WBCollectionConfiguration *collectionConfiguration; // ivar: _collectionConfiguration
@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;
@property (readonly, nonatomic) WBTabCollection *tabCollection; // ivar: _tabCollection


-(id)_tabWithUUID:(id)arg0 isPrivate:(BOOL)arg1 ;
-(id)initWithBrowserState:(id)arg0 collectionConfiguration:(id)arg1 ;
-(void)_notifyObserversAfterUpdatesIfNeeded;
-(void)_updateCache;
-(void)addPinnedTabsObserver:(id)arg0 ;
-(void)appendTab:(id)arg0 isPrivate:(BOOL)arg1 ;
-(void)moveTab:(id)arg0 toTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(void)notifyObserversOfUpdatedPinnedTabsIsPrivate:(BOOL)arg0 ;
-(void)performUpdatesUsingBlock:(id)arg0 ;
-(void)removePinnedTabsObserver:(id)arg0 ;
-(void)removeTabWithUUID:(id)arg0 persist:(BOOL)arg1 ;
-(void)updatePinnedTabWithUUID:(id)arg0 isPrivate:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)updatePinnedTabs:(BOOL)arg0 usingBlock:(id)arg1 ;


@end


#endif