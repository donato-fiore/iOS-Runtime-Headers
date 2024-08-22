// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRTELEVISIONDEVICE_H
#define MRTELEVISIONDEVICE_H

@class NSString, RTIInputSystemSourceSession;
@protocol RTIInputSystemPayloadDelegate, OS_dispatch_queue;


#import "MRExternalDevice.h"

@interface MRTelevisionDevice : MRExternalDevice <RTIInputSystemPayloadDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int gameControllerInputMode; // ivar: _gameControllerInputMode
@property (copy, nonatomic) id *gameControllerInputModeCallback; // ivar: _gameControllerInputModeCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue; // ivar: _gameControllerInputModeCallbackQueue
@property (copy, nonatomic) id *gameControllerPropertiesCallback; // ivar: _gameControllerPropertiesCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue; // ivar: _gameControllerPropertiesCallbackQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hiliteMode; // ivar: _hiliteMode
@property (copy, nonatomic) id *hiliteModeCallback; // ivar: _hiliteModeCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue; // ivar: _hiliteModeCallbackQueue
@property (copy, nonatomic) id *recordingStateCallback; // ivar: _recordingStateCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue; // ivar: _recordingStateCallbackQueue
@property (copy, nonatomic) id *rtiCallback; // ivar: _rtiCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rtiCallbackQueue; // ivar: _rtiCallbackQueue
@property (retain, nonatomic) RTIInputSystemSourceSession *rtiSourceSession; // ivar: _rtiSourceSession
@property (readonly) Class superclass;
@property (copy, nonatomic) id *textInputCallback; // ivar: _textInputCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue; // ivar: _textInputCallbackQueue


-(id)currentClientUpdatesConfigMessage;
-(void)clearActiveTextEditingSessionData;
-(void)deleteBackwardInActiveTextEditingSession;
-(void)exitHiliteMode;
-(void)getRTISessionWithReplyQueue:(id)arg0 completion:(id)arg1 ;
-(void)getTextEditingSessionWithReplyQueue:(id)arg0 completion:(id)arg1 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)insertTextIntoActiveTextEditingSessionWithText:(id)arg0 ;
-(void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg0 withBuffer:(id)arg1 time:(struct ? )arg2 gain:(float)arg3 ;
-(void)registerGameControllerWithProperties:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)registerTouchDeviceWithDescriptor:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;
-(void)registerVoiceInputDeviceWithDescriptor:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;
-(void)sendGameControllerEvent:(id)arg0 controllerID:(NSUInteger)arg1 ;
-(void)sendTouchEvent:(struct _MRHIDTouchEvent )arg0 toVirtualDeviceWithID:(NSUInteger)arg1 ;
// -(void)setRTICallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setTextEditingCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)setTextOnActiveTextEditingSessionWithText:(id)arg0 ;
// -(void)setVoiceRecordingStateCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)unregisterGameController:(NSUInteger)arg0 ;
-(void)wake;


@end


#endif