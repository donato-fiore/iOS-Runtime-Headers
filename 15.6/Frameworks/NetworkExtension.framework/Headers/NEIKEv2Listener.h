// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2LISTENER_H
#define NEIKEV2LISTENER_H

@class NSString, NSMutableArray;
@protocol NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate, NEIKEv2ListenerDelegate, OS_dispatch_queue, OS_nw_listener, NEIKEv2PacketDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESAConfiguration.h"
#import "NEIPSecSASession.h"
#import "NEIKEv2Transport.h"

@interface NEIKEv2Listener : NSObject <NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NEIKEv2ListenerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NEIKEv2IKESAConfiguration *ikeConfig; // ivar: _ikeConfig
@property (retain, nonatomic) NSString *kernelSASessionName; // ivar: _kernelSASessionName
@property (retain, nonatomic) NSObject<OS_nw_listener> *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue; // ivar: _listenerQueue
@property (weak, nonatomic) NSObject<NEIKEv2PacketDelegate> *packetDelegate; // ivar: _packetDelegate
@property (retain, nonatomic) NEIPSecSASession *saSession; // ivar: _saSession
@property (retain, nonatomic) NSMutableArray *sessionsBeforeAuth; // ivar: _sessionsBeforeAuth
@property (readonly) Class superclass;
@property (retain, nonatomic) NEIKEv2Transport *transport; // ivar: _transport


-(BOOL)handleNewConnection:(id)arg0 ;
-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 listenerUDPPort:(id)arg2 listenerInterface:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 listenerUDPPort:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithListenerIKEConfig:(id)arg0 kernelSASessionName:(id)arg1 packetDelegate:(id)arg2 listenerQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithListenerIKEConfig:(id)arg0 saSession:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 ;
-(id)initWithListenerIKEConfig:(id)arg0 saSession:(id)arg1 kernelSASessionName:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
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