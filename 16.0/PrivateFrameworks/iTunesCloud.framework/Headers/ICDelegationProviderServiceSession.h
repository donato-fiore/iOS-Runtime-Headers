// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDELEGATIONPROVIDERSERVICESESSION_H
#define ICDELEGATIONPROVIDERSERVICESESSION_H

@class NSMutableDictionary, NSString, NSArray;
@protocol ICDelegationServiceConnectionDelegate, OS_dispatch_queue, ICDelegationProviderServiceSessionDelegate;

#import <Foundation/Foundation.h>

#import "ICDelegationServiceConnection.h"
#import "ICDelegationProviderServiceProtocolHandler.h"
#import "ICDelegationProviderNetService.h"
#import "ICRequestContext.h"
#import "ICUserIdentityStore.h"

@interface ICDelegationProviderServiceSession : NSObject <ICDelegationServiceConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationServiceConnection *_connection;
    id<ICDelegationProviderServiceSessionDelegate> *_delegate;
    ICDelegationProviderServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToStreamContext;
    NSInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICDelegationProviderServiceSessionDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *delegationAccountUUIDs; // ivar: _delegationAccountUUIDs
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICDelegationProviderNetService *netService; // ivar: _netService
@property (readonly, copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *userIdentities; // ivar: _userIdentities
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // ivar: _userIdentityStore


-(id)initWithUserIdentities:(id)arg0 userIdentityStore:(id)arg1 requestContext:(id)arg2 netService:(id)arg3 delegationAccountUUIDs:(id)arg4 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_handleStartDelegationResponse:(id)arg0 ;
-(void)_startDelegation;
-(void)delegationServiceConnection:(id)arg0 didEncouterError:(id)arg1 ;
-(void)delegationServiceConnectionDidClose:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif