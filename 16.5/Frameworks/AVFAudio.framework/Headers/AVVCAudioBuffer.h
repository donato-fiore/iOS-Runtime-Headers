// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVCAUDIOBUFFER_H
#define AVVCAUDIOBUFFER_H


#import <Foundation/Foundation.h>


@interface AVVCAudioBuffer : NSObject {
    *void _impl;
}


@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) int channels;
@property (readonly) *void data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) *AudioStreamPacketDescription packetDescriptions;
@property (readonly) BOOL remoteVoiceActivityAvailable;
@property (readonly) unsigned char remoteVoiceActivityRMS;
@property (readonly) unsigned char remoteVoiceActivityVAD;
@property (readonly) *AudioStreamBasicDescription streamDescription;
@property (readonly) NSUInteger timeStamp;
@property (readonly) BOOL upsamplingSourceAudio;


-(id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg0 channels:(int)arg1 timeStamp:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)finalize;


@end


#endif