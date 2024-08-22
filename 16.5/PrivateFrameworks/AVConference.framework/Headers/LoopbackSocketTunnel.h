// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOOPBACKSOCKETTUNNEL_H
#define LOOPBACKSOCKETTUNNEL_H

@protocol LoopbackSocketTunnelDelegate;

#import <Foundation/Foundation.h>


@interface LoopbackSocketTunnel : NSObject {
    unsigned short _port;
    int sockFD;
    sockaddr_in sa;
    sockaddr_in vtpSA;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    BOOL foundVTPIP;
}


@property NSObject *optionalArg; // ivar: optionalArg


-(id)initWithPort:(unsigned short)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(int)sendPacketToVTP:(id)arg0 ;
-(int)serverLoopProc;
-(void)getIPPort:(struct tagIPPORT *)arg0 ;
-(void)getVTPIPPort:(struct tagIPPORT *)arg0 ;
-(void)setVTPIP:(struct tagIPPORT *)arg0 ;
-(void)shutdownSocket;


@end


#endif