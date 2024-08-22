// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPERFORMCHANGESREQUEST_H
#define PHPERFORMCHANGESREQUEST_H

@class PLXPCObject, NSMutableOrderedSet, NSMutableDictionary, NSString, NSOrderedSet, NSArray;
@protocol PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest;


#import "PHPerformChangesInstrumentation.h"

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest>

 {
    BOOL _inService;
    id<PLPerformChangesRequestService> *_service;
    NSMutableOrderedSet *_failedOnDemandRequests;
    NSMutableDictionary *_changeRequestsByUUID;
}


@property (readonly, nonatomic) NSInteger accessLevel;
@property (readonly, nonatomic) NSInteger accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSOrderedSet *deletes; // ivar: _deletes
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChangeRequests;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *inserts; // ivar: _inserts
@property (retain, nonatomic) PHPerformChangesInstrumentation *instrumentation; // ivar: _instrumentation
@property (readonly, nonatomic) NSArray *requestSets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOrderedSet *updates; // ivar: _updates


+(struct _xpc_type_s *)type;
-(BOOL)_isSupportedLimitedLibraryChangeRequest:(id)arg0 ;
-(NSInteger)determineAuthorizationStatusForChanges;
-(id)_validatePerformChangesRequestServiceResultWithSuccess:(BOOL)arg0 returningError:(id)arg1 ;
-(id)changeRequestForUUID:(id)arg0 ;
-(id)clientBundleID;
-(id)clientDescription;
-(id)clientDisplayName;
-(id)errorWithLocalizedDescription:(id)arg0 ;
-(id)libraryServicesManager;
-(id)persistentStoreCoordinator;
-(void)decodeWithService:(id)arg0 clientAuthorization:(id)arg1 ;
-(void)discardUnsupportedLimitedLibraryChangeRequests;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithService:(id)arg0 reply:(id)arg1 ;
-(void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)arg0 error:(id)arg1 ;
-(void)recordDeleteRequest:(id)arg0 ;
-(void)recordFailedOnDemandRequest:(id)arg0 ;
-(void)recordInsertRequest:(id)arg0 ;
-(void)recordUpdateRequest:(id)arg0 ;
-(void)setChangeRequest:(id)arg0 forUUID:(id)arg1 ;


@end


#endif