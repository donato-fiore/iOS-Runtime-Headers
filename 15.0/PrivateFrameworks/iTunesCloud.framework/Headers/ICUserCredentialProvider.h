// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICUSERCREDENTIALPROVIDER_H
#define ICUSERCREDENTIALPROVIDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICDelegationConsumerService.h"

@interface ICUserCredentialProvider : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSInteger _delegationDiscoveryCount;
    ICDelegationConsumerService *_delegationConsumerService;
}




+(id)sharedProvider;
-(id)init;
-(void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg0 ;
-(void)_handleDelegationAccountUUIDsForSession:(id)arg0 ;
-(void)_handleIdentityProperties:(id)arg0 forIdentity:(id)arg1 loadingError:(id)arg2 credentialRequest:(id)arg3 session:(id)arg4 ;
-(void)_handlePendingDelegationRequestsForSession:(id)arg0 ;
-(void)_handleRequestIndependentPropertiesForSession:(id)arg0 ;
-(void)performCredentialRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)performCredentialRequests:(id)arg0 withResponseHandler:(id)arg1 ;


@end


#endif