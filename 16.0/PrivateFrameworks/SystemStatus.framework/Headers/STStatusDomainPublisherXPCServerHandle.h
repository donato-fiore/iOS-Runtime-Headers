// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINPUBLISHERXPCSERVERHANDLE_H
#define STSTATUSDOMAINPUBLISHERXPCSERVERHANDLE_H

@class BSMutableIntegerMap, NSXPCConnection, NSString;
@protocol STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, BSDescriptionProviding, STStatusDomainPublisherServerHandle>

 {
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_dataMutationCompletionsByDomain;
    BSMutableIntegerMap *_volatileDataByDomain;
    BSMutableIntegerMap *_volatileDataMutationCompletionsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    BSMutableIntegerMap *_fallbackDataByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_serverXPCConnection;
    id *_xpcConnectionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMachServiceServerHandle;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCConnectionProvider:(id)arg0 ;
-(id)publishedDataForDomain:(NSUInteger)arg0 ;
-(id)publishedVolatileDataForDomain:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)publishData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 withChangeContext:(id)arg3 completion:(id)arg4 ;
-(void)publishVolatileData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 withChangeContext:(id)arg3 completion:(id)arg4 ;
-(void)registerPublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 fallbackData:(id)arg2 ;
-(void)removePublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
// -(void)updateDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;
// -(void)updateVolatileDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;


@end


#endif