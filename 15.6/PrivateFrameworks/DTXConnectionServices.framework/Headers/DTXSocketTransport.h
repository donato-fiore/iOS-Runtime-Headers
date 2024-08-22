// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXSOCKETTRANSPORT_H
#define DTXSOCKETTRANSPORT_H

@class NSArray;
@protocol OS_dispatch_semaphore;


#import "DTXFileDescriptorTransport.h"

@interface DTXSocketTransport : DTXFileDescriptorTransport {
    NSObject<OS_dispatch_semaphore> *_socketAcceptedSem;
    uint8_t _socketSemProtector;
    NSArray *_addresses;
}


@property (readonly) int port; // ivar: _port


+(id)addressForHost:(char *)arg0 port:(int)arg1 ;
+(id)schemes;
-(NSUInteger)transmit:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)initWithConnectedSocket:(int)arg0 disconnectAction:(id)arg1 ;
-(id)initWithLocalPort:(int)arg0 ;
-(id)initWithRemoteAddress:(id)arg0 ;
-(id)localAddresses;
-(void)_setupChannelWithConnectedSocket:(int)arg0 assumingOwnership:(BOOL)arg1 orDisconnectBlock:(id)arg2 ;
-(void)_setupWithLocalPort:(int)arg0 ;
-(void)_signalSocketAccepted;
-(void)disconnect;


@end


#endif