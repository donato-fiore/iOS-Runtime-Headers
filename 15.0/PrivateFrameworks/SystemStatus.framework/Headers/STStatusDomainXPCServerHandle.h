// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTATUSDOMAINXPCSERVERHANDLE_H
#define STSTATUSDOMAINXPCSERVERHANDLE_H

@class BSMutableIntegerMap, NSString, NSXPCConnection;
@protocol STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy, nonatomic) BSMutableIntegerMap *clientsByDomain; // ivar: _clientsByDomain
@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataByDomain; // ivar: _dataByDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection; // ivar: _serverXPCConnection
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *xpcConnectionProvider; // ivar: _xpcConnectionProvider


+(id)sharedMachServiceServerHandle;
-(id)_internalQueue_dataForDomain:(NSUInteger)arg0 ;
-(id)dataForDomain:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCConnectionProvider:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_reregisterForDomains;
-(void)_tearDownXPCConnection;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)observeDiff:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)registerClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removeClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)reportUserInteraction:(id)arg0 forClient:(id)arg1 domain:(NSUInteger)arg2 ;


@end


#endif