// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSICSHAREPLAY_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSICSHAREPLAY_H

@class AVPlayerPlaybackCoordinator, NSString, NSMutableSet, ICLiveLink, NSMutableArray, ICSharedListeningQueue, MPRequestResponseController, MPPropertySet;
@protocol MPRequestResponseControllerDelegate, ICLiveLinkDelegate, AVPlayerPlaybackCoordinatorDelegate, MPCQueueControllerBehaviorMusicSharePlay, MPCQueueControllerBehaviorExternalSyncImplementation, MPCQueueControllerBehaviorUpNextImplementation, MPCQueueControllerExternalSyncBehaviorHost, MPCQueueControllerBehaviorHost, MPCQueueControllerBehaviorMusicDelegate, MPCQueueControllerBehaviorMusicSharePlayDelegate;

#import <Foundation/Foundation.h>

#import "MPCPlaybackRequestEnvironment.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"

@interface _MPCQueueControllerBehaviorMusicSharePlay : NSObject <MPRequestResponseControllerDelegate, ICLiveLinkDelegate, AVPlayerPlaybackCoordinatorDelegate, MPCQueueControllerBehaviorMusicSharePlay, MPCQueueControllerBehaviorExternalSyncImplementation, MPCQueueControllerBehaviorUpNextImplementation>

 {
    AVPlayerPlaybackCoordinator *_playbackCoordinator;
    id *_loadingCompletionHandler;
    unsigned short _activeItemFlags;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    BOOL _liveLinkStopped;
    BOOL _queueRanDry;
}


@property (nonatomic) BOOL allowsQueueModifications;
@property (readonly, nonatomic) BOOL autoPlayEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerExternalSyncBehaviorHost> *externalSyncHost; // ivar: _externalSyncHost
@property (readonly, nonatomic) BOOL hasUserMutations; // ivar: _hasUserMutations
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerBehaviorHost> *host; // ivar: _host
@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet; // ivar: _identityPropertySet
@property (retain, nonatomic) NSMutableSet *knownContainerIDs; // ivar: _knownContainerIDs
@property (retain, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (weak, nonatomic) NSObject<MPCQueueControllerBehaviorMusicDelegate> *musicBehaviorDelegate; // ivar: _musicBehaviorDelegate
@property (weak, nonatomic) NSObject<MPCQueueControllerBehaviorMusicSharePlayDelegate> *musicSharePlayBehaviorDelegate; // ivar: _musicSharePlayBehaviorDelegate
@property (retain, nonatomic) NSMutableArray *pendingActions; // ivar: _pendingActions
@property (retain, nonatomic, setter=_setQueue:) ICSharedListeningQueue *queue; // ivar: _queue
@property (readonly, nonatomic) NSInteger queueExplicitContentState;
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (retain, nonatomic) MPRequestResponseController *requestController; // ivar: _requestController
@property (copy, nonatomic) MPPropertySet *requestedPropertySetForEvents; // ivar: _requestedPropertySetForEvents
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly) Class superclass;


+(BOOL)canLoadQueue:(id)arg0 reason:(*id)arg1 ;
-(BOOL)_useItemPlaceholderForContentItemID:(id)arg0 ;
-(BOOL)_useItemPlaceholderForItemID:(id)arg0 ;
-(BOOL)canJumpToContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canNextItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canPreviousItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canRemoveContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canUserChangeRepeatTypeWithReason:(*id)arg0 ;
-(BOOL)canUserChangeShuffleModeWithReason:(*id)arg0 ;
-(BOOL)canUserEnableAutoPlayWithReason:(*id)arg0 ;
-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(BOOL)isAutoPlayContentItemID:(id)arg0 ;
-(BOOL)isSupportedInsertionPosition:(NSInteger)arg0 fromContentItemID:(id)arg1 reason:(*id)arg2 ;
-(BOOL)itemExistsForContentItemID:(id)arg0 ;
-(NSInteger)displayItemCount;
-(id)_componentsForContentItemID:(id)arg0 ;
-(id)_componentsForSharedListeningItemID:(id)arg0 ;
-(id)_itemForContentItemID:(id)arg0 ;
-(id)_itemObjectForSharedListeningItemID:(id)arg0 ;
-(id)_mpcSharedListeningEventForICLiveLinkEvent:(id)arg0 ;
-(id)_sectionObjectForSharedListeningContainerID:(id)arg0 ;
-(id)_sectionedCollectionForQueue:(id)arg0 ;
-(id)_stateDictionaryIncludingQueue:(BOOL)arg0 ;
-(id)componentsForContentItemID:(id)arg0 ;
-(id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)contentItemIDWithoutRepeatIteration:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;
-(id)performLoadCommand:(id)arg0 completion:(id)arg1 ;
-(id)playbackCoordinator:(id)arg0 identifierForPlayerItem:(id)arg1 ;
-(void)_emitEventsForAddedSharedListeningContainer:(id)arg0 ;
-(void)_emitEventsForParticipants:(id)arg0 localUserIdentifier:(id)arg1 ;
-(void)_emitEventsForPlaybackBehaviorChange;
-(void)_enqueuePendingActionWithLabel:(id)arg0 itemIdentifier:(id)arg1 block:(id)arg2 ;
-(void)_initializeWithQueue:(id)arg0 ;
-(void)_purgePendingActionsWithLabel:(id)arg0 ;
-(void)activeItemFlagsDidChange:(unsigned short)arg0 ;
-(void)canReuseQueue:(id)arg0 completion:(id)arg1 ;
-(void)clearAllItemsAfterContentItemID:(id)arg0 ;
-(void)connectToExternalSyncHost:(id)arg0 ;
-(void)connectToHost:(id)arg0 ;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)currentItemDidChangeFromContentItemID:(id)arg0 toContentItemID:(id)arg1 ;
-(void)didJumpToTargetContentItemID:(id)arg0 ;
-(void)didReachEndOfQueueWithReason:(id)arg0 ;
-(void)didStopLiveLink:(id)arg0 ;
-(void)disconnectFromExternalSyncHost:(id)arg0 ;
-(void)disconnectFromHost:(id)arg0 ;
-(void)endSynchronizedPlayback;
-(void)findFirstContentItemIDForItemIntersectingIdentifierSet:(id)arg0 completion:(id)arg1 ;
-(void)getExpectedCurrentItemModelObjectWithCompletion:(id)arg0 ;
-(void)getSharedQueueTracklistWithStartingContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)liveLink:(id)arg0 didEncounterError:(id)arg1 willRetry:(BOOL)arg2 ;
-(void)liveLink:(id)arg0 didReceiveDirectCurrentItemChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(void)liveLink:(id)arg0 didReceiveEvent:(id)arg1 ;
-(void)liveLink:(id)arg0 didUpdateParticipants:(id)arg1 ;
-(void)liveLink:(id)arg0 didUpdateQueue:(id)arg1 ;
-(void)moveContentItemID:(id)arg0 afterContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)moveContentItemID:(id)arg0 beforeContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)performInsertCommand:(id)arg0 targetContentItemID:(id)arg1 completion:(id)arg2 ;
-(void)removeContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)reshuffleWithTargetContentItemID:(id)arg0 completion:(id)arg1 ;
-(void)updatePlaybackCoordinator:(id)arg0 ;


@end


#endif