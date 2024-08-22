// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOQUEUEFEEDER_H
#define MPCMODELRADIOQUEUEFEEDER_H

@class MPQueueFeeder, MPAVItem, NSString, ICUserIdentityStore, ICStoreRequestContext, NSDictionary;
@protocol MPRTCReportingItemSessionContaining, ICEnvironmentMonitorObserver, MPCQueueControllerBehaviorMusicDataSource, MPMutableIdentifierListSection;


#import "MPCModelRadioPlaybackQueue.h"
#import "MPCModelRadioPlaybackContext.h"
#import "MPCModelRadioPersonalizationResponse.h"
#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, ICEnvironmentMonitorObserver, MPCQueueControllerBehaviorMusicDataSource>

 {
    id<MPMutableIdentifierListSection> *_section;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCModelRadioPlaybackContext *_playbackContext;
    BOOL _needsSectionUpdate;
    NSUInteger _backgroundTaskIdentifier;
    NSUInteger _backgroundTasks;
    MPAVItem *_currentItem;
    BOOL _hasReachedTracklistEnd;
    BOOL _supportsLoadingAdditionalItems;
    NSString *_lastCleanPlayedIdentifier;
    NSString *_lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    BOOL _mayHaveRestrictedContent;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    NSInteger _queueGeneration;
    NSString *_siriAssetInfo;
    ICUserIdentityStore *_observedIdentityStore;
    ICStoreRequestContext *_storeRequestContext;
    BOOL _hasSignedOut;
}


@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;


+(id)sharedQueue;
-(BOOL)_isTransientLoadingError:(id)arg0 ;
-(BOOL)canJumpToItem:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canSkipItem:(id)arg0 reason:(*id)arg1 ;
-(BOOL)containsTransportableContentWithReason:(*id)arg0 ;
-(BOOL)section:(id)arg0 supportsShuffleType:(NSInteger)arg1 ;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg0 ;
-(BOOL)supportsAutoPlayForItem:(id)arg0 inSection:(id)arg1 ;
-(NSInteger)itemCount;
-(NSInteger)prefetchThresholdForSection:(id)arg0 ;
-(NSInteger)supplementalPlaybackContextBehavior;
-(id)_defaultGetTracksRequestWithContext:(id)arg0 radioStation:(id)arg1 ;
-(id)_errorForRequest:(id)arg0 withError:(id)arg1 ;
-(id)firstModelPlayEvent;
-(id)identifiersForItem:(id)arg0 inSection:(id)arg1 ;
-(id)init;
-(id)itemForItem:(id)arg0 inSection:(id)arg1 ;
-(id)modelPlayEventForItem:(id)arg0 inSection:(id)arg1 ;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg0 ;
-(id)supplementalPlaybackContextWithReason:(NSInteger)arg0 ;
-(id)updatedPlaybackContext;
-(void)_allowCellularStreamingDidChangeNotification:(id)arg0 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_beginObservingIdentityStoreForSignOut;
-(void)_detectSignOutForIdentityStore:(id)arg0 ;
-(void)_detectSignOutForIdentityStoreChangeNotification:(id)arg0 ;
-(void)_endBackgroundTaskAssertion;
-(void)_endObservingIdentityStoreForSignOut;
-(void)_handleGetTracksResponse:(id)arg0 getTracksError:(id)arg1 fromRequest:(id)arg2 completion:(id)arg3 ;
-(void)_handlePersonalizationResponse:(id)arg0 personalizationError:(id)arg1 fromRequest:(id)arg2 completion:(id)arg3 ;
-(void)_loadTracksWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_observePersonalizationResponse:(id)arg0 ;
-(void)_removeAllTracks;
-(void)_removeRestrictedTracks;
-(void)_repersonalizeCurrentTracks;
-(void)_responseDidInvalidate;
-(void)_responseDidInvalidateNotification:(id)arg0 ;
-(void)_updateAdditionalLoadingSupport;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;
-(void)itemDidBeginPlayback:(id)arg0 ;
-(void)loadAdditionalItemsWithCount:(NSInteger)arg0 forSection:(id)arg1 completion:(id)arg2 ;
-(void)loadPlaybackContext:(id)arg0 completion:(id)arg1 ;
-(void)reloadSection:(id)arg0 completion:(id)arg1 ;


@end


#endif