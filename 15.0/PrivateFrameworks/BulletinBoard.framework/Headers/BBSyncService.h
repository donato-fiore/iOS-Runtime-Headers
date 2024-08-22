// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSYNCSERVICE_H
#define BBSYNCSERVICE_H

@class IDSService, NSMutableArray, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue, BBSyncServiceDelegate;

#import <Foundation/Foundation.h>


@interface BBSyncService : NSObject <IDSServiceDelegate>

 {
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BBSyncServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pairedDeviceCount;
@property (readonly) Class superclass;


-(BOOL)_hasDestination;
-(BOOL)_syncHasDefaultPairedDevice;
-(id)_dismissalDictionaryForBulletin:(id)arg0 ;
-(id)_syncAccount;
-(id)_syncLocalDevices;
-(id)dismissalSectionIdentifiersForIncomingMessage:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_reallyEnqueueBulletin:(id)arg0 feeds:(NSUInteger)arg1 ;
-(void)_sendSyncMessage:(id)arg0 ;
-(void)enqueueSyncedRemovalForBulletin:(id)arg0 feeds:(NSUInteger)arg1 ;
-(void)sendPendingSyncedRemovals;
-(void)sendSyncedRemovalForBulletin:(id)arg0 feeds:(NSUInteger)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;


@end


#endif