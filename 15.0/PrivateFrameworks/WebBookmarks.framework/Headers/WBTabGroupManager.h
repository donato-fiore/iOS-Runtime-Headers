// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBTABGROUPMANAGER_H
#define WBTABGROUPMANAGER_H

@class NSMutableArray, NSPointerArray, NSArray;
@protocol OS_dispatch_queue, WBTabProvider;

#import <Foundation/Foundation.h>

#import "WBSavedStateManager.h"

@interface WBTabGroupManager : NSObject {
    NSMutableArray *_groups;
    NSPointerArray *_observers;
    WBSavedStateManager *_savedStateManager;
    NSObject<OS_dispatch_queue> *_tabProviderAccessQueue;
}


@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, nonatomic) NSObject<WBTabProvider> *tabProvider; // ivar: _tabProvider


-(id)initWithTabProvider:(id)arg0 savedStateManager:(id)arg1 ;
-(void)_compareInMemoryTabGroups:(id)arg0 withTabGroups:(id)arg1 ;
-(void)_readTabGroups;
-(void)_tabGroupsDatabaseDidUpdate:(id)arg0 ;
-(void)addTabGroupObserver:(id)arg0 ;
-(void)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)notifyDidFinishSetup;
-(void)notifyDidRemoveTabGroup:(id)arg0 ;
-(void)notifyDidUpdateTab:(id)arg0 userDriven:(BOOL)arg1 ;
-(void)notifyDidUpdateTabGroup:(id)arg0 ;
-(void)notifyDidUpdateTabGroups;
-(void)notifyDidUpdateTabsInTabGroup:(id)arg0 ;
-(void)removeTabGroup:(id)arg0 ;
-(void)removeTabGroupObserver:(id)arg0 ;
-(void)saveTab:(id)arg0 ;
-(void)saveTabGroup:(id)arg0 ;
-(void)updateTabsInTabGroup:(id)arg0 ;


@end


#endif