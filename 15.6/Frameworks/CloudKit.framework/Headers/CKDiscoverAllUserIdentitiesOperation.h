// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISCOVERALLUSERIDENTITIESOPERATION_H
#define CKDISCOVERALLUSERIDENTITIESOPERATION_H

@class NSMutableDictionary;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;


#import "CKOperation.h"
#import "CKDiscoverUserIdentitiesOperationInfo.h"

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKDiscoverAllUserIdentitiesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *discoverAllUserIdentitiesCompletionBlock; // ivar: _discoverAllUserIdentitiesCompletionBlock
@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers; // ivar: _identityToContactIdentifiers
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id *userIdentityDiscoveredBlock; // ivar: _userIdentityDiscoveredBlock


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(id)activityCreate;
-(id)init;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)handleUserIdentityDiscovery:(id)arg0 ;
-(void)performCKOperation;


@end


#endif