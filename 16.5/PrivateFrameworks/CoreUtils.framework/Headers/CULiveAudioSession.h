// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CULIVEAUDIOSESSION_H
#define CULIVEAUDIOSESSION_H

@class RPCompanionLinkClient, NSArray, NSMutableSet, AVVoiceController, NSString;
@protocol AVVoiceControllerRecordDelegate, CUActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CULiveAudioSession.h"

@interface CULiveAudioSession : NSObject <AVVoiceControllerRecordDelegate, CUActivatable>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    NSUInteger _activateTicks;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    NSArray *_destinationDevices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersActivated;
    NSMutableSet *_peerSessionSet;
    CULiveAudioSession *_selfRef;
    int _sessionState;
    BOOL _sentTimingInfo;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *destinationIDs; // ivar: _destinationIDs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;


-(BOOL)_voiceControllerSetup;
-(BOOL)_voiceControllerStart;
-(id)init;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportError:(id)arg0 where:(char *)arg1 ;
-(void)_run;
-(void)_runCLinkActivateCompleted;
-(void)_runCLinkActivateStart;
-(void)_runCLinkPeersActivateStart;
-(void)_voiceControllerTearDown;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)voiceControllerDidDetectEndpoint:(id)arg0 ofType:(int)arg1 atTime:(CGFloat)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg0 ;
-(void)voiceControllerDidStartRecording:(id)arg0 successfully:(BOOL)arg1 error:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg0 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;


@end


#endif