// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMODELQUEUEFEEDER_H
#define MPCMODELQUEUEFEEDER_H

@class MPQueueFeeder, NSLock, NSHashTable, NSDictionary, MPRequestResponseController, MPModelRequest<MPCModelPlaybackRequest>, NSString, MPIdentifierSet, MPPropertySet, MPModelGenericObject, MPModelResponse<MPCModelPlaybackResponse>;
@protocol MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCQueueControllerDataSource, OS_dispatch_queue, MPMutableIdentifierListSection;


#import "MPCPlaybackRequestEnvironment.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"
#import "MPCModelPlaybackContext.h"

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCQueueControllerDataSource>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSLock *_diffLock;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_assetStoreFronts;
    NSDictionary *_endTimeModifications;
    id *_loadingCompletionHandler;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    BOOL _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id<MPMutableIdentifierListSection> *_section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPCModelPlaybackContext *_playbackContext;
    MPPropertySet *_representativeMetadataPropertySet;
    NSUInteger _backgroundTaskIdentifier;
    NSUInteger _backgroundTasks;
}


@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsTransportableContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation; // ivar: _fallbackSectionRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response; // ivar: _response
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;


-(BOOL)canJumpToItem:(id)arg0 reason:(*id)arg1 ;
-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(BOOL)section:(id)arg0 shouldShuffleExcludeItem:(id)arg1 ;
-(BOOL)section:(id)arg0 supportsShuffleType:(NSInteger)arg1 ;
-(BOOL)shouldUsePlaceholderForItem:(id)arg0 inSection:(id)arg1 ;
-(BOOL)supportsAutoPlayForItem:(id)arg0 inSection:(id)arg1 ;
-(NSInteger)supplementalPlaybackContextBehavior;
-(id)_equivalencySourceAdamIDForIdentifierSet:(id)arg0 ;
-(id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg0 ;
-(id)_supplementalLibraryRequest;
-(id)firstItemIntersectingIdentifierSet:(id)arg0 ;
-(id)firstModelPlayEvent;
-(id)identifiersForItem:(id)arg0 inSection:(id)arg1 ;
-(id)init;
-(id)itemForItem:(id)arg0 inSection:(id)arg1 ;
-(id)modelPlayEventForItem:(id)arg0 inSection:(id)arg1 ;
-(id)playbackInfoForItem:(id)arg0 ;
-(id)supplementalPlaybackContextWithReason:(NSInteger)arg0 ;
-(id)uniqueIdentifier;
-(id)updatedPlaybackContext;
-(void)_beginBackgroundTaskAssertion;
-(void)_didUpdateToResponse:(id)arg0 ;
-(void)_endBackgroundTaskAssertion;
-(void)_performRequestUpdate:(id)arg0 ;
-(void)applyVolumeNormalizationForItem:(id)arg0 ;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)dealloc;
-(void)didFinishLoadingRequestForController:(id)arg0 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;
-(void)loadPlaybackContext:(id)arg0 completion:(id)arg1 ;
-(void)reloadSection:(id)arg0 completion:(id)arg1 ;
-(void)willBeginLoadingRequestForController:(id)arg0 ;


@end


#endif