// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRXDEVICE_H
#define _TVRXDEVICE_H

@class NSDictionary, NSString, NSSet;
@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;

#import <Foundation/Foundation.h>

#import "_TVRXKeyboardController.h"
#import "_TVRXVoiceRecorder.h"

@interface _TVRXDevice : NSObject

@property (copy, nonatomic) NSDictionary *alternateIdentifiers; // ivar: _alternateIdentifiers
@property (readonly, nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, nonatomic) NSInteger connectionType;
@property (weak, nonatomic) NSObject<_TVRXDeviceDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic, getter=_impl, setter=_setImpl:) NSObject<_TVRCDeviceImpl> *impl; // ivar: _impl
@property (readonly, nonatomic) _TVRXKeyboardController *keyboardController;
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL paired;
@property (readonly, nonatomic) NSUInteger pairingCapability;
@property (copy, nonatomic) NSSet *supportedButtons; // ivar: _supportedButtons
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) _TVRXVoiceRecorder *voiceRecorder;


-(BOOL)_authenticationIsSupported;
-(BOOL)containsIdentifier:(id)arg0 ;
-(id)_init;
-(id)allIdentifiers;
-(id)description;
-(void)_applyButtonEventSideEffects:(id)arg0 ;
-(void)_connectionAttemptSucceeded;
-(void)_disconnected:(NSInteger)arg0 error:(id)arg1 ;
-(void)_encounteredAuthenticationChallenge:(id)arg0 ;
-(void)_setActiveEndpoint;
-(void)_setDeviceName:(id)arg0 ;
-(void)connect;
-(void)disconnect;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 options:(id)arg1 response:(id)arg2 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;


@end


#endif