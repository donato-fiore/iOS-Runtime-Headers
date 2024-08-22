// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATOR2_H
#define MPCMODELSTOREPLAYBACKITEMSREQUESTACCUMULATOR2_H

@class MPServerObjectDatabase, MPLibraryObjectDatabase, NSString, MPPropertySet, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, MPMutableSectionedCollection, NSHashTable, ICURLAggregatedPerformanceMetrics, NSError, NSDictionary;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

#import <Foundation/Foundation.h>

#import "MPCModelStorePlaybackItemsRequest.h"
#import "MPCModelStorePlaybackItemsRequestAccumulation.h"

@interface MPCModelStorePlaybackItemsRequestAccumulator2 : NSObject {
    MPCModelStorePlaybackItemsRequest *_request;
    MPServerObjectDatabase *_sod;
    MPLibraryObjectDatabase *_lod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    BOOL _allowsExplicitContent;
    NSInteger _defaultLibraryPersonalizationStyle;
    NSInteger _unknownEndpointLibraryPersonalizationStyle;
    NSMutableOrderedSet *_pendingStoreIDs;
    NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary *_sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    NSMutableArray *_pendingCollectionItemAuthorizationTokenRequests;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *_trustProvider;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSHashTable *_failedIdentifiers;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
}


@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulation *accumulatedResults;
@property (readonly, nonatomic) NSError *accumulationError; // ivar: _accumulationError
@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulatorResult accumulatorResult;
@property (readonly, copy, nonatomic) NSDictionary *equivalencyMapping; // ivar: _equivalencyMapping
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;


-(BOOL)_isFatalError:(id)arg0 ;
-(id)_identifiersForTokens:(id)arg0 ;
-(id)_tokenFromLookupIdentifiers:(id)arg0 propertySet:(id)arg1 indexPath:(id)arg2 error:(*id)arg3 ;
-(id)_userIdentityWithRequest:(id)arg0 ;
-(id)handleMediaAPIResponse:(id)arg0 trustID:(id)arg1 isFinalResponse:(BOOL)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 serverObjectDatabase:(id)arg1 ;
-(id)newMediaAPICollectionItemMetadataRequestInfo;
-(id)newStoreItemMetadataRequest;
-(struct MPCModelStorePlaybackItemsRequestAccumulatorResult )handleResponse:(id)arg0 error:(id)arg1 ;
-(void)_addEquivalencyForMetadata:(id)arg0 requestStoreIdentifier:(id)arg1 ;
-(void)_addPendingChildItem:(id)arg0 identifiers:(id)arg1 atSectionIndex:(id)arg2 collectionPlaybackAuthorizationToken:(id)arg3 requestType:(NSInteger)arg4 ;
-(void)_resolveContentDescriptorsUsingObjectDatabases;


@end


#endif