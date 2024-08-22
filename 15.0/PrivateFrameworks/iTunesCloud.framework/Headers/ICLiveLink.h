// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLIVELINK_H
#define ICLIVELINK_H

@class NSString, NSURL, NSArray, NSMutableArray, NSMutableDictionary;
@protocol ICSharedListeningConnectionControllerDelegate, ICLiveLinkDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICLiveLinkIdentity.h"
#import "ICSharedListeningConnectionController.h"
#import "ICLiveLinkPlaybackCoordinatorMedium.h"
#import "ICSharedListeningQueue.h"

@interface ICLiveLink : NSObject <ICSharedListeningConnectionControllerDelegate>



@property (readonly, copy, nonatomic) ICLiveLinkIdentity *clientSpecifiedIdentity; // ivar: _clientSpecifiedIdentity
@property (retain, nonatomic) ICSharedListeningConnectionController *connectionController; // ivar: _connectionController
@property (nonatomic) NSInteger currentRetryCount; // ivar: _currentRetryCount
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deferredReconnectReason; // ivar: _deferredReconnectReason
@property (weak, nonatomic) NSObject<ICLiveLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *forcedReconnectReason; // ivar: _forcedReconnectReason
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) ICLiveLinkIdentity *identity;
@property (readonly, nonatomic) NSURL *invitationURL;
@property (readonly, nonatomic) NSInteger localParticipantServerID; // ivar: _localParticipantServerID
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) NSInteger maxRetries; // ivar: _maxRetries
@property (nonatomic) NSInteger maxRetryWaitPeriod; // ivar: _maxRetryWaitPeriod
@property (readonly, nonatomic) NSArray *participants; // ivar: _participants
@property (retain, nonatomic) NSMutableArray *pendingActions; // ivar: _pendingActions
@property (retain, nonatomic) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests
@property (retain, nonatomic) ICLiveLinkPlaybackCoordinatorMedium *playbackCoordinatorMedium; // ivar: _playbackCoordinatorMedium
@property (nonatomic) BOOL processingAction; // ivar: _processingAction
@property (readonly, copy, nonatomic) ICSharedListeningQueue *queue; // ivar: _queue
@property (nonatomic) BOOL receivedDisconnectionNotice; // ivar: _receivedDisconnectionNotice
@property (readonly, nonatomic) NSString *sessionKey; // ivar: _sessionKey
@property (nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;


+(id)linkWithIdentity:(id)arg0 ;
+(id)linkWithSessionIdentifier:(id)arg0 identity:(id)arg1 ;
-(id)_participantForAction:(id)arg0 ;
-(id)_participantForParticipantID:(NSInteger)arg0 ;
-(id)initWithSharedListeningSessionIdentifier:(id)arg0 identity:(id)arg1 ;
-(id)participantForParticipantUUID:(id)arg0 ;
-(void)_didReceiveAddItemsAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveCurrentItemChangeAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveMoveItemAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveParticipantChangeAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceivePlayNowQueueItemsAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceivePlaybackControlSettingsAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceivePlaybackSyncAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceivePluginErrorMessage:(id)arg0 ;
-(void)_didReceiveReactionAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveRemoveItemAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveReplaceQueueItemsAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveServerNoticeAction:(id)arg0 completion:(id)arg1 ;
-(void)_didReceiveSetExplicitModeAction:(id)arg0 completion:(id)arg1 ;
-(void)_emitSessionEventIfNeededForAction:(id)arg0 disconnectedParticipant:(id)arg1 ;
-(void)_handlePotentiallyRecoverableError:(id)arg0 ;
-(void)_handleReceivedMessage:(id)arg0 ;
-(void)_handleUpdatedParticipantQuery:(id)arg0 ;
-(void)_performClientInfoExchangeAndInitializeQueue;
-(void)_processPendingActions;
-(void)_storeTraceID:(id)arg0 completion:(id)arg1 ;
-(void)_updateParticipantsWithReason:(id)arg0 completion:(id)arg1 ;
-(void)_updateQueueWithReason:(id)arg0 completion:(id)arg1 ;
-(void)beginSynchronizedPlaybackWithAVCFPlaybackCoordinator:(*void)arg0 ;
-(void)beginSynchronizedPlaybackWithAVPlaybackCoordinator:(id)arg0 ;
-(void)broadcastDirectCurrentItemChangedToItemIdentifier:(id)arg0 ;
-(void)connectionController:(id)arg0 connectionDidEndWithError:(id)arg1 ;
-(void)connectionController:(id)arg0 connectionDidReceiveMessage:(id)arg1 ;
-(void)connectionController:(id)arg0 didEncounterFatalError:(id)arg1 ;
-(void)connectionControllerConnectionDidStart:(id)arg0 ;
-(void)dealloc;
-(void)endSynchronizedPlayback;
-(void)fetchPlaybackSyncStateWithCompletion:(id)arg0 ;
-(void)receivedCurrentItemIdentifier:(id)arg0 fromParticipant:(id)arg1 ;
-(void)receivedEvent:(id)arg0 ;
-(void)reconnectWithReason:(id)arg0 options:(id)arg1 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;
-(void)sendPlaybackSyncPayload:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateWithIdentity:(id)arg0 ;


@end


#endif