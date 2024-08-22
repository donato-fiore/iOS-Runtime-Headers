// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSHAREDLISTENINGQUEUEFEEDER_H
#define MPCSHAREDLISTENINGQUEUEFEEDER_H

@class NSError, NSString, ICLiveLinkIdentity, NSMutableSet, ICLiveLink, NSMutableArray, AVPlayerPlaybackCoordinator, MPPropertySet;
@protocol ICLiveLinkDelegate, AVPlayerPlaybackCoordinatorDelegate, MPCQueueControllerCommandInterposing, MPCQueueControllerCommandInterposingHost;


#import "MPCModelQueueFeeder.h"
#import "MPCPlaybackRequestEnvironment.h"

@interface MPCSharedListeningQueueFeeder : MPCModelQueueFeeder <ICLiveLinkDelegate, AVPlayerPlaybackCoordinatorDelegate, MPCQueueControllerCommandInterposing>



@property (retain, nonatomic) NSError *completionError; // ivar: _completionError
@property (copy, nonatomic) NSString *completionStartItemIdentifier; // ivar: _completionStartItemIdentifier
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsTransportableContent;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deferredDirectCurrentItemIdentifier; // ivar: _deferredDirectCurrentItemIdentifier
@property (retain, nonatomic) ICLiveLinkIdentity *deferredDirectCurrentItemParticipant; // ivar: _deferredDirectCurrentItemParticipant
@property (copy, nonatomic) NSString *deferredPlayNowCurrentItemIdentifier; // ivar: _deferredPlayNowCurrentItemIdentifier
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPendingPlayNowInFlight; // ivar: _hasPendingPlayNowInFlight
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *initialQueueCompletion; // ivar: _initialQueueCompletion
@property (weak, nonatomic) NSObject<MPCQueueControllerCommandInterposingHost> *interposingHost; // ivar: _interposingHost
@property (nonatomic) BOOL joiningAsInitiator; // ivar: _joiningAsInitiator
@property (retain, nonatomic) NSMutableSet *knownContainerIDs; // ivar: _knownContainerIDs
@property (nonatomic) BOOL lastKnownAutoPlayAvailable; // ivar: _lastKnownAutoPlayAvailable
@property (nonatomic) BOOL lastKnownAutoPlayEnabled; // ivar: _lastKnownAutoPlayEnabled
@property (nonatomic) NSInteger lastKnownExplicitContentState; // ivar: _lastKnownExplicitContentState
@property (retain, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (retain, nonatomic) NSMutableArray *pendingActions; // ivar: _pendingActions
@property (weak, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // ivar: _playbackCoordinator
@property (retain, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (copy, nonatomic) NSString *preferredStartItemForCallingSuper; // ivar: _preferredStartItemForCallingSuper
@property (readonly, nonatomic) NSInteger queueExplicitContentState;
@property (copy, nonatomic) MPPropertySet *requestedPropertySet; // ivar: _requestedPropertySet
@property (readonly, nonatomic) NSString *sharedSessionIdentifier;
@property (nonatomic) BOOL shouldRefreshBeforeActive; // ivar: _shouldRefreshBeforeActive
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)hasActiveRadioStation;
-(BOOL)isAutoPlayAvailable;
-(BOOL)isAutoPlayEnabled;
-(BOOL)isAutoPlayItem:(id)arg0 ;
-(BOOL)isValidContainerIdentifier:(id)arg0 ;
-(id)_ICSharedListeningForMPSILItemIdentifier:(id)arg0 ;
-(id)_ICSharedListeningForMPSILItemIdentifiers:(id)arg0 ;
-(id)_MPSILItemIdentifierForICSharedListeningItemIdentifier:(id)arg0 ;
-(id)_mpcSharedListeningEventForICLiveLinkEvent:(id)arg0 ;
-(id)_playbackItemsRequestForQueue:(id)arg0 ;
-(id)_requiredItemIdentifierForEvent:(id)arg0 ;
-(id)_responseQueue;
-(id)_sectionedCollectionForQueue:(id)arg0 ;
-(id)containerInfoForItem:(id)arg0 ;
-(id)init;
-(id)playbackCoordinator:(id)arg0 identifierForPlayerItem:(id)arg1 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg0 ;
-(void)_dequeuePendingActions;
-(void)_didUpdateToResponse:(id)arg0 ;
-(void)_emitNewContainerIfNeededForResponse:(id)arg0 ;
-(void)_enqueuePendingActionWithLabel:(id)arg0 itemIdentifier:(id)arg1 block:(id)arg2 ;
-(void)_handleDirectCurrentItemChangedToItemIdentifier:(id)arg0 participant:(id)arg1 ;
-(void)_handleUpdatedSharedListeningQueue:(id)arg0 ;
-(void)_purgePendingActionsWithLabel:(id)arg0 ;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)_updatePlayerLiveLinkConnection;
-(void)addPlaybackContext:(id)arg0 atPosition:(NSInteger)arg1 afterItem:(id)arg2 actions:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)didJumpToItem:(id)arg0 ;
-(void)didStartLiveLink:(id)arg0 ;
-(void)didStopLiveLink:(id)arg0 ;
-(void)endSynchronizedPlayback;
-(void)liveLink:(id)arg0 didEncounterError:(id)arg1 willRetry:(BOOL)arg2 ;
-(void)liveLink:(id)arg0 didReceiveDirectCurrentItemChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(void)liveLink:(id)arg0 didReceiveEvent:(id)arg1 ;
-(void)liveLink:(id)arg0 didUpdateParticipants:(id)arg1 ;
-(void)liveLink:(id)arg0 didUpdateQueue:(id)arg1 ;
-(void)liveLinkDidReconnect:(id)arg0 ;
-(void)loadPlaybackContext:(id)arg0 completion:(id)arg1 ;
-(void)moveItem:(id)arg0 afterItem:(id)arg1 ;
-(void)moveItem:(id)arg0 beforeItem:(id)arg1 ;
-(void)removeAllItemsAfterItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)removeItems:(id)arg0 ;
-(void)setAutoPlayEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)updatePlaybackCoordinator:(id)arg0 ;


@end


#endif