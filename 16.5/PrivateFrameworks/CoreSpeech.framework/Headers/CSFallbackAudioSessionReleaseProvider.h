// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFALLBACKAUDIOSESSIONRELEASEPROVIDER_H
#define CSFALLBACKAUDIOSESSIONRELEASEPROVIDER_H

@class NSString;
@protocol CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioRecorder.h"

@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding>



@property (retain, nonatomic) CSAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)fallbackDeactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithAudioRecorder:(id)arg0 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 numberOfChannels:(int)arg6 ;
-(void)audioRecorderWillBeDestroyed:(id)arg0 ;


@end


#endif