// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCDEVICE_H
#define TVRCDEVICE_H

@class NSString, NSSet;
@protocol TVRCDeviceDelegate;

#import <Foundation/Foundation.h>

#import "TVRCDeviceState.h"
#import "TVRCDeviceInfo.h"
#import "TVRCKeyboardController.h"
#import "TVRCVoiceRecorder.h"

@interface TVRCDevice : NSObject

@property (readonly, nonatomic) NSInteger connectionState;
@property (readonly, nonatomic) NSInteger connectionType;
@property (weak, nonatomic) NSObject<TVRCDeviceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TVRCDeviceState *deviceState; // ivar: _deviceState
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) TVRCDeviceInfo *info; // ivar: _info
@property (retain, nonatomic) TVRCKeyboardController *keyboardController; // ivar: _keyboardController
@property (readonly, copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSUInteger pairingCapability;
@property (readonly, copy, nonatomic) NSSet *supportedButtons;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (retain, nonatomic) TVRCVoiceRecorder *voiceRecorder; // ivar: _voiceRecorder


-(BOOL)containsIdentifier:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)isInEditingSession;
-(id)description;
-(id)initWithDeviceIdentifier:(id)arg0 ;
-(void)_deviceEncounteredAuthChallengeType:(NSInteger)arg0 attributes:(NSInteger)arg1 codeToEnterOnDevice:(id)arg2 throttleSeconds:(NSInteger)arg3 ;
-(void)_deviceUpdatedState:(id)arg0 ;
-(void)_disconnectDeviceDueToConnectionInterruption;
-(void)_sendRTIDataPayload:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)disconnectWithType:(NSUInteger)arg0 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;


@end


#endif