// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXMACHTRANSPORT_H
#define DTXMACHTRANSPORT_H

@protocol OS_dispatch_queue, OS_dispatch_source;


#import "DTXTransport.h"

@interface DTXMachTransport : DTXTransport {
    unsigned int _receivePort;
    unsigned int _sendPort;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSObject<OS_dispatch_source> *_listenSource;
    NSObject<OS_dispatch_source> *_deadPortSource;
    id *_disconnectBlock;
    *DTXMachMessage _sendBuffer;
    unsigned int _bufferedLength;
}




+(id)_legacyFileDescriptorHandshakeWithReceivePort:(unsigned int)arg0 ;
+(id)_legacyFileDescriptorHandshakeWithSendPort:(unsigned int)arg0 ;
+(id)fileDescriptorHandshakeWithReceivePort:(unsigned int)arg0 ;
+(id)fileDescriptorHandshakeWithSendPort:(unsigned int)arg0 ;
+(id)schemes;
-(BOOL)_setupWithSendPort:(unsigned int)arg0 receivePort:(unsigned int)arg1 disconnectBlock:(id)arg2 ;
-(NSUInteger)transmit:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithReceiveRight:(unsigned int)arg0 sendRight:(unsigned int)arg1 disconnectBlock:(id)arg2 ;
-(id)initWithRemoteAddress:(id)arg0 ;
-(id)initWithXPCRepresentation:(id)arg0 ;
-(id)localAddresses;
-(id)serializedXPCRepresentation;
-(void)dealloc;
-(void)disconnect;


@end


#endif