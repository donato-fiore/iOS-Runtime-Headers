// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTATUSSERVER_H
#define STSTATUSSERVER_H

@class NSMapTable, BSMutableIntegerMap, NSString, BSIntegerSet;
@protocol BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle, OS_dispatch_queue, STStatusServerDelegate;

#import <Foundation/Foundation.h>

#import "STStatusDomainDataChangeLog.h"
#import "STStatusDomainPublisherXPCClientListener.h"
#import "STStatusDomainXPCClientListener.h"

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle>



@property (readonly, nonatomic) NSMapTable *changeLogKeysByPublisherClient; // ivar: _changeLogKeysByPublisherClient
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) BSMutableIntegerMap *clientsByDomain; // ivar: _clientsByDomain
@property (readonly, nonatomic) STStatusDomainDataChangeLog *dataChangeLog; // ivar: _dataChangeLog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STStatusServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly, nonatomic) BSMutableIntegerMap *publisherClientsByDomain; // ivar: _publisherClientsByDomain
@property (readonly, nonatomic) STStatusDomainPublisherXPCClientListener *publisherXPCClientListener; // ivar: _publisherXPCClientListener
@property (readonly) Class superclass;
@property (readonly, nonatomic) STStatusDomainXPCClientListener *xpcClientListener; // ivar: _xpcClientListener


-(id)_internalQueue_dataForDomain:(NSUInteger)arg0 ;
-(id)_internalQueue_fallbackDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 ;
-(id)_internalQueue_presentationDataForDomain:(NSUInteger)arg0 ;
-(id)_internalQueue_volatileDataForDomain:(NSUInteger)arg0 ;
-(id)dataForDomain:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)publishedDataForDomain:(NSUInteger)arg0 ;
-(id)publishedVolatileDataForDomain:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_internalQueue_enumerateClientsForDomain:(NSUInteger)arg0 withClientQueueBlock:(id)arg1 ;
-(void)_internalQueue_enumeratePublisherClientsForDomain:(NSUInteger)arg0 withClientQueueBlock:(id)arg1 ;
-(void)_internalQueue_mutateDataForDomain:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)_internalQueue_notifyClient:(id)arg0 ofData:(id)arg1 forDomain:(NSUInteger)arg2 ;
-(void)_internalQueue_publishData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 inDataChangeRecord:(id)arg3 completion:(id)arg4 ;
-(void)_internalQueue_publishDiff:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 inDataChangeRecord:(id)arg3 completion:(id)arg4 ;
-(void)publishData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)publishVolatileData:(id)arg0 forPublisherClient:(id)arg1 domain:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)registerClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)registerPublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 fallbackData:(id)arg2 ;
-(void)removeClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removePublisherClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)reportUserInteraction:(id)arg0 forClient:(id)arg1 domain:(NSUInteger)arg2 ;
// -(void)updateDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;
// -(void)updateVolatileDataForPublisherClient:(id)arg0 domain:(NSUInteger)arg1 usingDiffProvider:(id)arg2 completion:(unk)arg3  ;


@end


#endif