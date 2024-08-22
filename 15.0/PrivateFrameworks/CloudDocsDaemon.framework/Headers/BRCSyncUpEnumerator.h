// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSYNCUPENUMERATOR_H
#define BRCSYNCUPENUMERATOR_H

@class NSEnumerator, NSMutableSet, NSMutableDictionary, NSMutableIndexSet, PQLResultSet<PQLEnumeration>, NSMutableArray;


#import "BRCClientZone.h"
#import "BRCLocalItem.h"

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    BRCClientZone *_clientZone;
    NSMutableSet *_whitelist;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    int _stage;
}


@property (readonly, nonatomic) unsigned int batchSize; // ivar: _batchSize
@property (readonly, nonatomic) NSMutableSet *chainedParentIDWhitelist; // ivar: _chainedParentIDWhitelist
@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // ivar: _itemNeedingPCSChaining
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare; // ivar: _itemsNeedingUnshare
@property (readonly, nonatomic) NSUInteger retryAfter; // ivar: _retryAfter


-(BOOL)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg0 now:(NSUInteger)arg1 ;
-(BOOL)_checkForSharesWithinSharesWithItem:(id)arg0 ;
-(BOOL)_checkIfParentNeedsRevivalWithParentItem:(id)arg0 ;
-(BOOL)_checkIfShouldBlacklistForPathMatch:(id)arg0 ;
-(BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)arg0 ;
-(BOOL)_handlePendingShareItemWithPendingDeleteChildren:(id)arg0 ;
-(BOOL)_handleSharedItemWhichMovedToNewShare:(id)arg0 rootItem:(id)arg1 ;
-(BOOL)handleItemForOSUpgrade:(id)arg0 parentItemID:(id)arg1 ;
-(BOOL)isBlackListed:(id)arg0 ;
-(id)_documentsOrAliasesNeedingSyncUpEnumerator;
-(id)_liveDirectoriesNeedingSyncUpEnumerator;
-(id)_nextLiveItem;
-(id)_nextTombstone;
-(id)_tombstoneLeavesNeedingSyncUpEnumerator;
-(id)initWithClientZone:(id)arg0 ;
-(id)nextObject;
-(void)_blackListDescendantStack:(id)arg0 parentItem:(id)arg1 andAddToSet:(id)arg2 ;
-(void)_blackListDescendantStack:(id)arg0 parentItem:(id)arg1 andAddToSet:(id)arg2 descendantBlock:(id)arg3 ;
-(void)invalidate;


@end


#endif