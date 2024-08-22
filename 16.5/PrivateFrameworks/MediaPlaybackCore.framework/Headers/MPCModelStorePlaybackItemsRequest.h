// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUEST_H
#define MPCMODELSTOREPLAYBACKITEMSREQUEST_H

@class MPModelRequest, NSUUID, NSString, MPSectionedCollection, NSArray, MPModelResponse, NSDictionary;
@protocol MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring, MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;


#import "MPCPlaybackAccountManager.h"
#import "MPCPlaybackRequestEnvironment.h"

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>

 {
    NSUUID *_storeIDsAnonymousGroupUUID;
}


@property (retain, nonatomic) MPCPlaybackAccountManager *accountManager; // ivar: _accountManager
@property (nonatomic) BOOL allowLocalEquivalencies; // ivar: _allowLocalEquivalencies
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableImplicitSectioning;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MPSectionedCollection *identifiers; // ivar: _identifiers
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths; // ivar: _playbackPrioritizedIndexPaths
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (retain, nonatomic) MPModelResponse *previousResponse; // ivar: _previousResponse
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // ivar: _sectionedModelObjects
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects; // ivar: _shouldBatchResultsWithPlaceholderObjects
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs
@property (copy, nonatomic) NSDictionary *storeIDsToPlaybackAuthorizationTokensMap; // ivar: _storeIDsToPlaybackAuthorizationTokensMap
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *trustProvider; // ivar: _trustProvider
@property (nonatomic) BOOL useUniversalAccumulator; // ivar: _useUniversalAccumulator
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
+(void)MPC_consumeSiriAssetInfo:(id)arg0 playActivityFeatureName:(id)arg1 userIdentity:(id)arg2 completion:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif