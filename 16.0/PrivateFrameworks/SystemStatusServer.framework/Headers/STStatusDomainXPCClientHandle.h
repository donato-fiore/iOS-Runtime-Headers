// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINXPCCLIENTHANDLE_H
#define STSTATUSDOMAINXPCCLIENTHANDLE_H

@class NSXPCConnection, BSMutableIntegerMap, NSSet, NSMutableSet, NSString;
@protocol STStatusDomainXPCServer, STStatusDomainClientHandle, STStatusDomainServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainXPCClientHandle : NSObject <STStatusDomainXPCServer, STStatusDomainClientHandle>

 {
    id<STStatusDomainServerHandle> *_serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_observingDomains;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithXPCConnection:(id)arg0 serverHandle:(id)arg1 ;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 ;
-(void)observeDomains:(id)arg0 ;
-(void)reportUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)serverDataForDomains:(id)arg0 reply:(id)arg1 ;
-(void)stopObservingDomains:(id)arg0 ;


@end


#endif