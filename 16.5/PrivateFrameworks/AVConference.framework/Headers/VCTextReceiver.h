// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTEXTRECEIVER_H
#define VCTEXTRECEIVER_H

@class NSArray;
@protocol VCTextFrameReceiver, VCTextReceiverDelegate;

#import <Foundation/Foundation.h>

#import "VCTextJitterBuffer.h"

@interface VCTextReceiver : NSObject <VCTextFrameReceiver>

 {
    *tagHANDLE _rtpHandle;
    unsigned int _sampleRate;
    id<VCTextReceiverDelegate> *_delegate;
    *tagVCRealTimeThread _receiverThread;
    VCTextJitterBuffer *_jitterBuffer;
    *OpaqueVCTransportStreamRunLoop _runLoop;
}


@property (nonatomic) NSObject<VCTextReceiverDelegate> *delegate;
@property (nonatomic) CGFloat lastReceivedRTCPPacketTime; // ivar: _lastReceivedRTCPPacketTime
@property (nonatomic) CGFloat lastReceivedRTPPacketTime; // ivar: _lastReceivedRTPPacketTime
@property (retain, nonatomic) NSArray *supportedPayloads; // ivar: _supportedPayloads


-(?)didReceiveFrame;
-(?)enqueuePacket;
-(?)initializeTextPacketwithMediaPacket;
-(?)parsePacket;
-(?)retrieveRTPPacket;
-(?)splitPacketpacketArray;
-(BOOL)isSupportedPayload:(int)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(id)initWithConfiguration:(struct _VCTextReceiverConfiguration *)arg0 ;
-(struct tagAudioFrame *)allocFrameWithPacket:(struct tagAudioPacket *)arg0 data:(char *)arg1 dataLength:(int)arg2 timestamp:(unsigned int)arg3 ;
-(void)dealloc;
-(void)didDetectMissingFrame;
-(void)processRTCPPacket;
-(void)processRTPPacket;
-(void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters *)arg0 ;
-(void)validateAndEnqueuePackets:(struct tagAudioPacketArray *)arg0 ;


@end


#endif