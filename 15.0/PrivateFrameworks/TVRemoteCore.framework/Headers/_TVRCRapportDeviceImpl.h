// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCRAPPORTDEVICEIMPL_H
#define _TVRCRAPPORTDEVICEIMPL_H

@class NSString;
@protocol _TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl;

#import <Foundation/Foundation.h>

#import "_TVRXDevice.h"
#import "_TVRCRPCompanionLinkClientWrapper.h"
#import "_TVRXKeyboardController.h"
#import "_TVRCRapportRemoteTextInputKeyboardImpl.h"

@interface _TVRCRapportDeviceImpl : NSObject <_TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) _TVRXDevice *device; // ivar: _device
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *deviceWrapper; // ivar: _deviceWrapper
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) _TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl; // ivar: _keyboardImpl
@property (readonly) Class superclass;


+(id)implWithDevice:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(NSUInteger)pairingCapability;
-(id)alternateIdentifiers;
-(id)identifier;
-(id)initWithDevice:(id)arg0 ;
-(id)model;
-(id)name;
-(id)supportedButtons;
-(id)voiceRecorder;
-(void)_setupKeyboardController;
-(void)connect;
-(void)connectedToDevice:(id)arg0 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg0 ;
-(void)deviceUpdatedSupportedButtons:(id)arg0 ;
-(void)disconnect;
-(void)disconnectedFromDevice:(id)arg0 error:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 options:(id)arg1 response:(id)arg2 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)setAuthenticationSupported:(BOOL)arg0 ;


@end


#endif