// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHAREDTRIPBLOCKLIST_H
#define MSPSHAREDTRIPBLOCKLIST_H

@class NSMutableSet, _TtC8MapsSync23MapsSyncStoreController, _TtC8MapsSync13MapsSyncStore;
@protocol _TtP8MapsSync31MapsSyncStoreControllerDelegate_, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCDTimer.h"

@interface MSPSharedTripBlocklist : NSObject <_TtP8MapsSync31MapsSyncStoreControllerDelegate_>

 {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_storeQueue;
    _TtC8MapsSync23MapsSyncStoreController *_storeController;
    _TtC8MapsSync13MapsSyncStore *_store;
    BOOL _waitingForStoreToLoad;
    GCDTimer *_storeLoadTimeoutTimer;
}




+(id)sharedInstance;
+(void)migrateFromiCloudKVSIfNeeded;
-(BOOL)containsAnyIdentifiersInArray:(id)arg0 ;
-(BOOL)containsIdentifier:(id)arg0 ;
-(id)_fetchSyncedIdentifiers;
-(id)description;
-(id)init;
-(void)_cancelTimeoutTimer;
-(void)_purgeExpiredIdentifiersIn:(id)arg0 ;
-(void)_reloadBlockedIdentifiersFromSync;
-(void)_resumeIsolationQueueIfNeeded;
-(void)blockIdentifier:(id)arg0 ;
-(void)blockIdentifiers:(id)arg0 ;
-(void)clearBlockedIdentifiers;
-(void)purgeExpiredIdentifiers;
-(void)storeControllerWithDataChanged:(id)arg0 ;
-(void)storeControllerWithDidLoad:(id)arg0 ;
-(void)storeControllerWithFailedToLoad:(id)arg0 ;
-(void)unblockIdentifiers:(id)arg0 ;


@end


#endif