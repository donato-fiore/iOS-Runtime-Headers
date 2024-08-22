// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2LISTENER_H
#define NEIKEV2LISTENER_H

@class NSString, NSMutableArray;
@protocol NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate, OS_dispatch_queue, OS_nw_listener, NEIKEv2ListenerDelegate, NEIKEv2PacketDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESAConfiguration.h"
#import "NEIPSecSASession.h"
#import "NEIKEv2Transport.h"

@interface NEIKEv2Listener : NSObject <NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate>

 {
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NEIKEv2IKESAConfiguration *_ikeConfig;
    NEIPSecSASession *_saSession;
    NSString *_kernelSASessionName;
    NSObject<OS_nw_listener> *_listener;
    NSMutableArray *_sessionsBeforeAuth;
    NEIKEv2Transport *_transport;
    id<NEIKEv2ListenerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<NEIKEv2PacketDelegate> *_packetDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (readonly) Class superclass;


-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 listenerUDPPort:(id)arg2 listenerInterface:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 listenerUDPPort:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 packetDelegate:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithListenerIKEConfig:(id)arg0 saSession:(id)arg1 listenerUDPPort:(id)arg2 listenerInterface:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg0 saSession:(id)arg1 listenerUDPPort:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithListenerIKEConfig:(id)arg0 saSession:(id)arg1 packetDelegate:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)cancel;
-(void)dealloc;
-(void)receivePacket:(id)arg0 ;
-(void)reportError:(int)arg0 ;
// -(void)requestConfigurationForSession:(id)arg0 sessionConfig:(id)arg1 childConfig:(id)arg2 validateAuthBlock:(id)arg3 responseBlock:(unk)arg4  ;
-(void)sessionFailedBeforeRequestingConfiguration:(id)arg0 ;


@end


#endif