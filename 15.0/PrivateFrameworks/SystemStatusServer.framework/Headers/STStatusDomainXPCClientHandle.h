// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTATUSDOMAINXPCCLIENTHANDLE_H
#define STSTATUSDOMAINXPCCLIENTHANDLE_H

@class NSXPCConnection, BSMutableIntegerMap, NSString, NSSet, NSMutableSet;
@protocol STStatusDomainXPCServer, STStatusDomainClientHandle, OS_dispatch_queue, STStatusDomainServerHandle;

#import <Foundation/Foundation.h>


@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle>



@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection; // ivar: _clientXPCConnection
@property (readonly, nonatomic) BSMutableIntegerMap *dataByDomain; // ivar: _dataByDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *entitledDomains; // ivar: _entitledDomains
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, copy, nonatomic) NSMutableSet *observingDomains; // ivar: _observingDomains
@property (readonly, weak, nonatomic) NSObject<STStatusDomainServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;


-(id)initWithXPCConnection:(id)arg0 serverHandle:(id)arg1 ;
// -(void)_internalQueue_observeData:(id)arg0 forDomain:(NSUInteger)arg1 dataSendBlock:(id)arg2 diffSendBlock:(unk)arg3  ;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)observeDomains:(id)arg0 ;
-(void)reportUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)stopObservingDomains:(id)arg0 ;


@end


#endif