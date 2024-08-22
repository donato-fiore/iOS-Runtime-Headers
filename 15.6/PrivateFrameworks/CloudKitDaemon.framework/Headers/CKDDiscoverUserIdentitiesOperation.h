// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDDISCOVERUSERIDENTITIESOPERATION_H
#define CKDDISCOVERUSERIDENTITIESOPERATION_H

@class NSArray;


#import "CKDOperation.h"

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation

@property (copy, nonatomic) id *discoverUserIdentitiesProgressBlock; // ivar: _discoverUserIdentitiesProgressBlock
@property (retain, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_discoverIdentitiesWithLookupInfos:(id)arg0 completionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleDiscoveredIdentity:(id)arg0 lookupInfo:(id)arg1 responseCode:(id)arg2 ;
-(void)main;


@end


#endif