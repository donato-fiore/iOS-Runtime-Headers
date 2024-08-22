// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPSIRISESSION_H
#define RPSIRISESSION_H

@class AVAudioFormat, AVVoiceController, NSString;
@protocol AVVoiceControllerRecordDelegate, OS_dispatch_queue, RPMessageable;

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
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (readonly) Class superclass;


-(BOOL)voiceControllerSetupAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_activate2;
-(void)_activateCompletedWithError:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_startActivationWithDestinationID:(id)arg0 messenger:(id)arg1 completion:(id)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg0 ofType:(int)arg1 atTime:(CGFloat)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg0 ;
-(void)voiceControllerDidStartRecording:(id)arg0 successfully:(BOOL)arg1 error:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg0 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;
-(void)voiceControllerTearDown;


@end


#endif