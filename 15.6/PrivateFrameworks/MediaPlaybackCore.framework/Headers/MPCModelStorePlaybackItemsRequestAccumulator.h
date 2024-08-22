// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATOR_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATOR_H

@class MPServerObjectDatabase, NSString, MPPropertySet, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, MPMutableSectionedCollection, NSDictionary, MPSectionedCollection;

#import <Foundation/Foundation.h>

#import "MPCModelStorePlaybackItemsRequest.h"

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    MPCModelStorePlaybackItemsRequest *_request;
    BOOL _requestUsesSectionedModelObjects;
    MPServerObjectDatabase *_sod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    BOOL _allowsExplicitContent;
    NSInteger _defaultLibraryPersonalizationStyle;
    NSInteger _unknownEndpointLibraryPersonalizationStyle;
    NSMutableOrderedSet *_pendingStoreIDs;
    NSInteger _storePersonalizationStyle;
    NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
}


@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulatorResult accumulatorResult;
@property (readonly, copy, nonatomic) NSDictionary *equivalencyMapping; // ivar: _equivalencyMapping
@property (readonly, nonatomic) CGFloat lastBatchNetworkingTime; // ivar: _lastBatchNetworkingTime
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;


-(BOOL)_isFatalError:(id)arg0 ;
-(id)_mergedObjectWithRequestedObjectIfNeeded:(id)arg0 forIndexPath:(id)arg1 ;
-(id)_newIdentifierSetFromOriginalIdentifierSet:(id)arg0 playbackAuthorizationToken:(id)arg1 ;
-(id)_playlistEntryForObject:(id)arg0 containerUniqueID:(id)arg1 ;
-(id)_serverObjectFromPlaceholderContentDescriptor:(id)arg0 propertySet:(id)arg1 ;
-(id)_updatedModelObjectFromOriginalObject:(id)arg0 sectionPlaybackAuthorizationToken:(id)arg1 itemSectionIndex:(NSInteger)arg2 ;
-(id)_userIdentityWithRequest:(id)arg0 ;
-(id)handleMediaAPIResponse:(id)arg0 trustID:(id)arg1 isFinalResponse:(BOOL)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 serverObjectDatabase:(id)arg1 ;
-(id)newMediaAPICollectionItemMetadataRequestInfo;
-(id)newStoreItemMetadataRequest;
-(struct MPCModelStorePlaybackItemsRequestAccumulatorResult )handleResponse:(id)arg0 error:(id)arg1 ;
-(struct _MPCModelStorePlaybackItemEligibility )_eligibilityForItem:(id)arg0 ;
-(void)_addEquivalencyForMetadata:(id)arg0 requestStoreIdentifier:(id)arg1 ;
-(void)_addPendingChildItem:(id)arg0 identifiers:(id)arg1 atSectionIndex:(id)arg2 collectionPlaybackAuthorizationToken:(id)arg3 requestType:(NSUInteger)arg4 ;
-(void)_resolveContentDescriptorsUsingServerObjectDatabase;


@end


#endif