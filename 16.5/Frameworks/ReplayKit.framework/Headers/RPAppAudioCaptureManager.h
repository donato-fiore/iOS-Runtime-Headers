// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPAPPAUDIOCAPTUREMANAGER_H
#define RPAPPAUDIOCAPTUREMANAGER_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPAppAudioCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;
    id *_appAudioOutputHandler;
    id *_appTapDidStartHandler;
    *? _audioRecorderQueue;
    BOOL _resumed;
    NSDate *_lastAudioDate;
    AudioStreamBasicDescription _audioBasicDescription;
    ? _lastAudioPresentationTime;
}




+(struct ? )audioCaptureConfigForSystemRecording:(BOOL)arg0 processID:(int)arg1 contextID:(id)arg2 ;
+(struct AudioStreamBasicDescription )audioStreamBasicDescriptionWithStereo:(BOOL)arg0 ;
-(BOOL)handleStartAudioQueueFailed:(int)arg0 didFailHandler:(id)arg1 ;
-(id)init;
-(id)newAudioTapForAudioCaptureConfig:(struct ? )arg0 ;
-(void)resumeWithConfig:(struct ? )arg0 ;
// -(void)startWithConfig:(struct ? )arg0 outputHandler:(id)arg1 didStartHandler:(unk)arg2  ;
-(void)stop;


@end


#endif