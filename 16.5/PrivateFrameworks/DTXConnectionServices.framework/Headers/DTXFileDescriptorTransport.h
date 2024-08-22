// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXFILEDESCRIPTORTRANSPORT_H
#define DTXFILEDESCRIPTORTRANSPORT_H

@protocol OS_dispatch_queue, OS_dispatch_source;


#import "DTXTransport.h"

@interface DTXFileDescriptorTransport : DTXTransport {
    int _inFD;
    int _outFD;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    int _outputWaitKQ;
    NSObject<OS_dispatch_source> *_inputSource;
    id *_inputReaderBlock;
    id *_disconnectBlock;
}




-(NSUInteger)transmit:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithIncomingFileDescriptor:(int)arg0 outgoingFileDescriptor:(int)arg1 disconnectBlock:(id)arg2 ;
-(id)initWithIncomingFilePath:(id)arg0 outgoingFilePath:(id)arg1 error:(*id)arg2 ;
-(id)initWithXPCRepresentation:(id)arg0 ;
-(id)serializedXPCRepresentation;
-(int)_createWriteKQueue:(int)arg0 ;
-(unsigned int)supportedDirections;
-(void)_setupReadSource:(int)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)setupWithIncomingDescriptor:(int)arg0 outgoingDescriptor:(int)arg1 disconnectBlock:(id)arg2 ;


@end


#endif