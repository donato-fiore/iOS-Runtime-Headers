// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTATUSDOMAINPUBLISHERXPCSERVERHANDLE_H
#define STSTATUSDOMAINPUBLISHERXPCSERVERHANDLE_H

@class BSMutableIntegerMap, NSString, NSXPCConnection;
@protocol STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataByDomain; // ivar: _dataByDomain
@property (readonly, copy, nonatomic) BSMutableIntegerMap *dataMutationCompletionsByDomain; // ivar: _dataMutationCompletionsByDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *fallbackDataByDomain; // ivar: _fallbackDataByDomain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, copy, nonatomic) BSMutableIntegerMap *publisherClientsByDomain; // ivar: _publisherClientsByDomain
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection; // ivar: _serverXPCConnection
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataByDomain; // ivar: _volatileDataByDomain
@property (readonly, copy, nonatomic) BSMutableIntegerMap *volatileDataMutationCompletionsByDomain; // ivar: _volatileDataMutationCompletionsByDomain
@property (readonly, copy, nonatomic) id *xpcConnectionProvider; // ivar: _xpcConnectionProvider


+(id)sharedMachServiceServerHandle;
-(id)_internalQueue_dataForDomain:(NSUInteger)arg0 usingFallbackIfNecessary:(BOOL)arg1 ;
-(id)_internalQueue_volatileDataForDomain:(NSUInteger)arg0 usingFallbackIfNecessary:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCConnectionProvider:(id)arg0 ;
-(id)publishedDataForDomain:(NSUInteger)arg0 ;
-(id)publishedVolatileDataForDomain:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
// -(void)_internalQueue_mutateDataForDomain:(NSUInteger)arg0 discardingOnExit:(BOOL)arg1 wrappingCompletion:(id)arg2 usingBlock:(unk)arg3  ;
-(void)_internalQueue_publishData:(id)arg0 forDomain:(NSUInteger)arg1 discardingOnExit:(BOOL)arg2 completion:(id)arg3 ;
-(void)_internalQueue_publishDataToServer:(id)arg0 forDomain:(NSUInteger)arg1 discardingOnExit:(BOOL)arg2 reply:(id)arg3 ;
-(void)_internalQueue_publishDiff:(id)arg0 forDomain:(NSUInteger)arg1 discardingOnExit:(BOOL)arg2 completion:(id)arg3 ;
-(void)_internalQueue_publishDiffToServer:(id)arg0 forDomain:(NSUInteger)arg1 replacingData:(BOOL)arg2 discardingOnExit:(BOOL)arg3 reply:(id)arg4 ;
-(void)_resendData;
-(void)_tearDownXPCConnection;
-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)publishData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)publishVolatileData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)registerPublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 fallbackData:(id)arg2 ;
-(void)removePublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
// -(void)updateDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;
// -(void)updateVolatileDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;


@end


#endif