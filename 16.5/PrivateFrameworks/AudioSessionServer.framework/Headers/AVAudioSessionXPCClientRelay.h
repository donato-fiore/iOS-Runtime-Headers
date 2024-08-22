// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONXPCCLIENTRELAY_H
#define AVAUDIOSESSIONXPCCLIENTRELAY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface AVAudioSessionXPCClientRelay : NSObject {
    synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> guarded_impl;
    NSXPCConnection *connection;
    ProcessToken token;
}




-(id)initWithConnection:(id)arg0 token:(struct ProcessToken )arg1 ;
-(void)sendControlValueChanged:(*void)arg0 ;
-(void)sendDeferredMessages;
-(void)sendInterruptionMessageForSession:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)sendServerConfigurationChange:(*void)arg0 ;
-(void)sendServerDefaultRouteChange:(*void)arg0 ;
-(void)sendSession:(unsigned int)arg0 hasProxies:(BOOL)arg1 ;
-(void)sendSessionNeedsStateSync:(unsigned int)arg0 ;
-(void)sendSessionStoppedForAppStateChange:(unsigned int)arg0 ;
-(void)setBarrierBlock;


@end


#endif