// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTATUSDOMAINPUBLISHERXPCCLIENTHANDLE_H
#define STSTATUSDOMAINPUBLISHERXPCCLIENTHANDLE_H

@class NSXPCConnection, BSMutableIntegerMap, NSString, NSSet, NSMutableSet;
@protocol STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle, OS_dispatch_queue, STStatusDomainPublisherServerHandle;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle>



@property (readonly, nonatomic) NSXPCConnection *clientXPCConnection; // ivar: _clientXPCConnection
@property (readonly, nonatomic) BSMutableIntegerMap *dataByDomain; // ivar: _dataByDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *entitledDomains; // ivar: _entitledDomains
@property (readonly, nonatomic) BSMutableIntegerMap *fallbackDataByDomain; // ivar: _fallbackDataByDomain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, copy, nonatomic) NSMutableSet *publishingDomains; // ivar: _publishingDomains
@property (readonly, weak, nonatomic) NSObject<STStatusDomainPublisherServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSMutableIntegerMap *volatileDataByDomain; // ivar: _volatileDataByDomain


-(id)_internalQueue_dataForDomain:(NSUInteger)arg0 ;
-(id)_internalQueue_fallbackDataForDomain:(NSUInteger)arg0 ;
-(id)_internalQueue_volatileDataForDomain:(NSUInteger)arg0 ;
-(id)initWithXPCConnection:(id)arg0 serverHandle:(id)arg1 ;
-(void)_internalQueue_unregisterFromPublishingDomain:(NSUInteger)arg0 ;
-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)publishData:(id)arg0 forDomain:(NSUInteger)arg1 discardingOnExit:(BOOL)arg2 reply:(id)arg3 ;
-(void)publishDiff:(id)arg0 forDomain:(NSUInteger)arg1 replacingData:(BOOL)arg2 discardingOnExit:(BOOL)arg3 reply:(id)arg4 ;
-(void)registerToPublishDomain:(NSUInteger)arg0 fallbackData:(id)arg1 ;
-(void)unregisterFromPublishingDomain:(NSUInteger)arg0 ;


@end


#endif