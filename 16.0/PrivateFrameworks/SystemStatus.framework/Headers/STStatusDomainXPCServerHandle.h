// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINXPCSERVERHANDLE_H
#define STSTATUSDOMAINXPCSERVERHANDLE_H

@class BSMutableIntegerMap, NSXPCConnection, NSString;
@protocol STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle>

 {
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_clientsByDomain;
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
-(id)dataForDomain:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCConnectionProvider:(id)arg0 ;
-(id)serverDataForDomains:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 ;
-(void)observeDiff:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 ;
-(void)registerClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)removeClient:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)reportUserInteraction:(id)arg0 forClient:(id)arg1 domain:(NSUInteger)arg2 ;


@end


#endif