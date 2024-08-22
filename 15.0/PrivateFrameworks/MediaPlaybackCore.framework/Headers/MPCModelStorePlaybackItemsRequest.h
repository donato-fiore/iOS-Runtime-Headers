// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUEST_H
#define MPCMODELSTOREPLAYBACKITEMSREQUEST_H

@class MPModelRequest, NSString, NSArray, MPModelResponse, MPSectionedCollection, ICSharedListeningQueue;
@protocol MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring;


#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>



@property (nonatomic) BOOL allowLocalEquivalencies; // ivar: _allowLocalEquivalencies
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths; // ivar: _playbackPrioritizedIndexPaths
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (retain, nonatomic) MPModelResponse *previousResponse; // ivar: _previousResponse
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // ivar: _sectionedModelObjects
@property (retain, nonatomic) ICSharedListeningQueue *sharedListeningQueue; // ivar: _sharedListeningQueue
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects; // ivar: _shouldBatchResultsWithPlaceholderObjects
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // ivar: _wantsDetailedKeepLocalRequestableResponse


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
+(void)MPC_consumeSiriAssetInfo:(id)arg0 withCompletion:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif