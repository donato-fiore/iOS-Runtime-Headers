// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISCOVERUSERIDENTITIESOPERATION_H
#define CKDISCOVERUSERIDENTITIESOPERATION_H

@class NSMutableSet, NSArray;
@protocol CKDiscoverUserIdentitiesOperationCallbacks;


#import "CKOperation.h"
#import "CKDiscoverUserIdentitiesOperationInfo.h"

@interface CKDiscoverUserIdentitiesOperation : CKOperation <CKDiscoverUserIdentitiesOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKDiscoverUserIdentitiesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *discoverUserIdentitiesCompletionBlock; // ivar: _discoverUserIdentitiesCompletionBlock
@property (retain, nonatomic) NSMutableSet *discoveredLookupInfos; // ivar: _discoveredLookupInfos
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id *userIdentityDiscoveredBlock; // ivar: _userIdentityDiscoveredBlock
@property (copy, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(id)init;
-(id)initWithUserIdentityLookupInfos:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleUserIdentityDiscoveryForLookupInfo:(id)arg0 userIdentity:(id)arg1 ;
-(void)performCKOperation;


@end


#endif