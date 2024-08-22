// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTEXTTRANSMITTER_H
#define VCTEXTTRANSMITTER_H

@class NSLock, NSMutableArray, NSString;
@protocol VCTextSender, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VCAudioRedBuilder.h"

@interface VCTextTransmitter : NSObject <VCTextSender>

 {
    ? _config;
    CGFloat _txIntervalMin;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CGFloat _startTime;
    VCAudioRedBuilder *_redBuilder;
    int _redPayloadType;
    int _currentPayloadType;
    BOOL _isIdle;
    NSLock *_textFramesSendQueueLock;
    NSMutableArray *_textFramesSendQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    CGFloat _idleDuration;
    unsigned int _emptyFramesToBeSent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)start;
-(BOOL)startHeartbeat;
-(id)initWithConfiguration:(struct _VCTextTransmitterConfiguration *)arg0 ;
-(unsigned int)getCharTimestampForSystemTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)heartbeat;
-(void)sendCharacter:(unsigned short)arg0 ;
-(void)sendText:(id)arg0 ;
-(void)sendTextFrameWithRedundancy:(id)arg0 marker:(int)arg1 ;
-(void)stop;
-(void)stopHeartbeat;
-(void)updatePayloadHistory:(id)arg0 timestamp:(unsigned int)arg1 payloadType:(*int)arg2 payload:(*char *)arg3 payloadLength:(*int)arg4 ;


@end


#endif