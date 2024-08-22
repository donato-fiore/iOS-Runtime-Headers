// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONCONSUMERSERVICESESSION_H
#define ICDELEGATIONCONSUMERSERVICESESSION_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ICDelegationConsumerNetService.h"
#import "ICDelegationConsumerServiceProtocolHandler.h"
#import "ICDelegationConsumerServiceRequest.h"

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_acceptedConnections;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationConsumerNetService *_netService;
    NSMutableArray *_pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ICDelegationConsumerServiceRequest *request; // ivar: _request
@property (readonly, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (readonly) Class superclass;


-(BOOL)delegationServiceConnection:(id)arg0 didReceiveRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleTimeout;
-(void)_stop;
-(void)dealloc;
-(void)delegationConsumerNetService:(id)arg0 didAcceptConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)delegationServiceConnection:(id)arg0 didEncouterError:(id)arg1 ;
-(void)delegationServiceConnectionDidClose:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif