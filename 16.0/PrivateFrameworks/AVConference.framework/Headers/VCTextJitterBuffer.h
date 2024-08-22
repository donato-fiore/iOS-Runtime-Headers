// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCTEXTJITTERBUFFER_H
#define VCTEXTJITTERBUFFER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VCTextJitterBuffer : NSObject {
    tagVCTextJitterBufferConfiguration _configuration;
    BOOL _resetRequested;
    id *_delegate;
    *JitterPreloadQueue_t _preloadQueue;
    *JitterQueue_t _jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    BOOL _firstFrameReceived;
}




-(?)allocTextFrame;
-(?)allocTextPacket;
-(?)enqueuePacket;
-(?)jitterQueuePushPacket;
-(?)releaseTextPacket;
-(BOOL)start;
-(BOOL)startHeartbeat;
-(id)delegate;
-(id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg0 ;
-(void)dealloc;
-(void)heartbeat;
-(void)releaseTextFrame:(struct tagAudioFrame *)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)stop;
-(void)stopHeartbeat;


@end


#endif