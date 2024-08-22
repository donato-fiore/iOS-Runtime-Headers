// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPSIRISESSION_H
#define RPSIRISESSION_H

@class AVAudioFormat, AVVoiceController, NSString;
@protocol AVVoiceControllerRecordDelegate, OS_dispatch_queue, OS_dispatch_source, RPSiriSessionDelegate, RPMessageable;

#import <Foundation/Foundation.h>

#import "RPSiriSession.h"

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate>

 {
    id *_activateCompletion;
    int _activateState;
    AVAudioFormat *_audioFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    RPSiriSession *_selfRef;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
    NSUInteger _streamId;
    NSObject<OS_dispatch_source> *_recordingLimitTimer;
    BOOL _isSourcePTTEligible;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<RPSiriSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDestinationPTTEligible; // ivar: _isDestinationPTTEligible
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (retain, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (readonly) Class superclass;


-(BOOL)voiceControllerSetupAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_activate2;
-(void)_activateCompletedWithError:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_recordingLimitTimerFired;
-(void)_recordingLimitTimerStart:(unsigned int)arg0 ;
-(void)_sendSiriStop;
-(void)_startActivationWithDestinationID:(id)arg0 messenger:(id)arg1 completion:(id)arg2 ;
-(void)_stopRecording;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)receivedButtonUpWithCompletion:(id)arg0 ;
-(void)voiceControllerAudioCallback:(id)arg0 forStream:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg0 ofType:(int)arg1 atTime:(CGFloat)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg0 ;
-(void)voiceControllerDidStartRecording:(id)arg0 forStream:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forStream:(NSUInteger)arg1 forReason:(NSInteger)arg2 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg0 ;
-(void)voiceControllerTearDown;


@end


#endif