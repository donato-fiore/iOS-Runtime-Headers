// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDYNAMICATTRIBUTIONXPCSERVERHANDLE_H
#define STDYNAMICATTRIBUTIONXPCSERVERHANDLE_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol STDynamicAttributionXPCClientProtocol, STDynamicActivityAttributionServerHandle;

#import <Foundation/Foundation.h>


@interface STDynamicAttributionXPCServerHandle : NSObject <STDynamicAttributionXPCClientProtocol, STDynamicActivityAttributionServerHandle>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_lock_connection;
    id *_lock_connectionProvider;
    NSMutableSet *_lock_clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMachServiceServerHandle;
-(id)_lock_remoteProxy;
-(id)init;
-(id)initWithXPCConnectionProvider:(id)arg0 ;
-(void)currentAttributionsDidChange:(id)arg0 ;
-(void)setAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)setLocalizableAttributionKey:(id)arg0 andApplication:(id)arg1 forClient:(id)arg2 ;
-(void)subscribeToUpdates:(id)arg0 ;
-(void)unsubscribeFromUpdates:(id)arg0 ;


@end


#endif