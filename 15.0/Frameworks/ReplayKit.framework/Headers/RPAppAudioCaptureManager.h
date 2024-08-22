// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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




+(struct AudioStreamBasicDescription )audioStreamBasicDescriptionWithStereo:(BOOL)arg0 ;
-(BOOL)handleStartAudioQueueFailed:(int)arg0 didFailHandler:(id)arg1 ;
-(id)init;
-(void)resumeWithProcessID:(int)arg0 ;
// -(void)startWithProcessID:(int)arg0 outputHandler:(id)arg1 didStartHandler:(unk)arg2  ;
-(void)stop;


@end


#endif