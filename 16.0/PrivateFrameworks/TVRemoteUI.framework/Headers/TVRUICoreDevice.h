// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUICOREDEVICE_H
#define TVRUICOREDEVICE_H

@class NSMutableDictionary, TVRCDeviceAuthenticationChallenge, NSString, TVRCDevice;
@protocol TVRCDeviceDelegate, TVRCKeyboardControllerDelegate, TVRUIDevice, TVRUIDeviceDelegate;

#import <Foundation/Foundation.h>


@interface TVRUICoreDevice : NSObject <TVRCDeviceDelegate, TVRCKeyboardControllerDelegate, TVRUIDevice>



@property (readonly, nonatomic) BOOL captionsEnabled; // ivar: _captionsEnabled
@property (nonatomic, getter=isConnecting) BOOL connecting; // ivar: _connecting
@property (retain, nonatomic) NSMutableDictionary *coreButtons; // ivar: _coreButtons
@property (retain, nonatomic) TVRCDeviceAuthenticationChallenge *currentChallenge; // ivar: _currentChallenge
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRUIDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVRCDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCaptionsToggle; // ivar: _supportsCaptionsToggle
@property (readonly, nonatomic) BOOL supportsGuide; // ivar: _supportsGuide
@property (readonly, nonatomic) BOOL supportsLaunchingApplications; // ivar: _supportsLaunchingApplications
@property (readonly, nonatomic) BOOL supportsMute; // ivar: _supportsMute
@property (readonly, nonatomic) BOOL supportsPaging; // ivar: _supportsPaging
@property (readonly, nonatomic) BOOL supportsPower; // ivar: _supportsPower
@property (readonly, nonatomic) BOOL supportsSiri; // ivar: _supportsSiri
@property (readonly, nonatomic) BOOL supportsVolumeControl; // ivar: _supportsVolumeControl


+(NSInteger)_coreButtonEventTypeForEventType:(NSInteger)arg0 ;
+(NSInteger)_coreButtonTypeForButton:(NSInteger)arg0 ;
+(NSInteger)_uiButtonTypeFromCore:(NSInteger)arg0 ;
-(BOOL)_isCaptionsToggleButton:(id)arg0 ;
-(BOOL)_isLaunchApplicationButton:(id)arg0 ;
-(BOOL)_isMediaButton:(id)arg0 ;
-(BOOL)_isVolumeButton:(id)arg0 ;
-(BOOL)hasIdentifier:(id)arg0 ;
-(BOOL)isConnected;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)isLegacyAppleTV;
-(BOOL)isPaired;
-(BOOL)supportsDonatingIntents;
-(BOOL)supportsModernConnections;
-(BOOL)supportsTouchEvents;
-(NSInteger)_disconnectReasonFromCoreReason:(NSInteger)arg0 ;
-(NSInteger)_tvrcTouchPhaseFromUITouchPhase:(NSInteger)arg0 ;
-(id)_initWithCoreDevice:(id)arg0 ;
-(id)_initWithDeviceIdentifier:(id)arg0 ;
-(id)currentText;
-(id)identifier;
-(id)keyboardAttributes;
-(id)model;
-(id)name;
-(void)_disconnectWithType:(NSUInteger)arg0 ;
-(void)_notifyDelegateForSiriAndVolume;
-(void)_processButtonsForFeatureAdditions:(id)arg0 ;
-(void)_processButtonsForFeatureRemovals:(id)arg0 ;
-(void)cancelAuthenitcationChallenge;
-(void)connect;
-(void)device:(id)arg0 disconnectedForReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)device:(id)arg0 encounteredAuthenticationChallenge:(id)arg1 ;
-(void)device:(id)arg0 removedSupportedButtons:(id)arg1 added:(id)arg2 ;
-(void)deviceBeganConnecting:(id)arg0 ;
-(void)deviceConnected:(id)arg0 ;
-(void)disconnectSystemInitiated;
-(void)disconnectUserInitiated;
-(void)disconnectWithTimeOut;
-(void)enableTVRemoteOnLockscreen:(BOOL)arg0 ;
-(void)keyboardController:(id)arg0 beganTextEditingWithAttributes:(id)arg1 ;
-(void)keyboardController:(id)arg0 didUpdateAttributes:(id)arg1 ;
-(void)keyboardController:(id)arg0 didUpdateText:(id)arg1 ;
-(void)keyboardControllerEndedTextEditing:(id)arg0 ;
-(void)sendAuthenticationCode:(id)arg0 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendReturnKey;
-(void)sendText:(id)arg0 ;
-(void)sendTextInputPayload:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)startVoiceRecorder;
-(void)stopVoiceRecorder;


@end


#endif