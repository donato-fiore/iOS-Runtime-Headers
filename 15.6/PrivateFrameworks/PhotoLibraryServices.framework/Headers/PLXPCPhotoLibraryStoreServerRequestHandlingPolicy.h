// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLXPCPHOTOLIBRARYSTORESERVERREQUESTHANDLINGPOLICY_H
#define PLXPCPHOTOLIBRARYSTORESERVERREQUESTHANDLINGPOLICY_H

@class NSXPCStoreServerRequestHandlingPolicy, NSString, NSDictionary, NSNumber;


#import "PLLimitedLibraryFetchFilter.h"
#import "PLAssetsdConnectionAuthorization.h"

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {
    PLLimitedLibraryFetchFilter *_fetchFilter;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSString *_fetchFilterClientIdentifier;
    NSDictionary *_fetchFilterEntityNameToPredicateMap;
    NSNumber *_fetchFilterEnabledStatus;
    os_unfair_lock_s _fetchFilterLock;
}




-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg0 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg0 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg0 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg0 ;
-(id)init;
-(id)initWithConnectionAuthorization:(id)arg0 ;
-(id)processFaultForObjectWithID:(id)arg0 fromClientWithContext:(id)arg1 error:(*id)arg2 ;
-(id)processFaultForRelationshipWithName:(id)arg0 onObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(*id)arg3 ;
-(id)processRequest:(id)arg0 fromClientWithContext:(id)arg1 error:(*id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;
-(id)restrictingReadPredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;
-(void)dealloc;
-(void)limitedLibraryFetchFiltersUpdated:(id)arg0 ;


@end


#endif