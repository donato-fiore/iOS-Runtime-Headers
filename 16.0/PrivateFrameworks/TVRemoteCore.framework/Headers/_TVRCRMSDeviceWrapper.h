// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRCRMSDEVICEWRAPPER_H
#define _TVRCRMSDEVICEWRAPPER_H

@class NSDictionary, NSString, NSMutableSet;
@protocol TVRMSDAAPControlSessionDelegate, TVRMSPairingSessionDelegate, _TVRCRMSDeviceKeyboardImplDelegate, TVRMSDAAPControlSession, _TVRCRMSDeviceWrapperDelegate;

#import <Foundation/Foundation.h>

#import "TVRMSService.h"
#import "TVRXKeyboardController.h"
#import "_TVRCRMSDeviceKeyboardImpl.h"
#import "_TVRCRMSNowPlayingState.h"
#import "TVRMSPairingSession.h"

@interface _TVRCRMSDeviceWrapper : NSObject <TVRMSDAAPControlSessionDelegate, TVRMSPairingSessionDelegate, _TVRCRMSDeviceKeyboardImplDelegate>



@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (nonatomic) BOOL authenticationAllowed; // ivar: _authenticationAllowed
@property (nonatomic) BOOL connected; // ivar: _connected
@property (retain, nonatomic) NSObject<TVRMSDAAPControlSession> *controlSession; // ivar: _controlSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRCRMSDeviceWrapperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVRMSService *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) _TVRCRMSDeviceKeyboardImpl *keyboardImpl; // ivar: _keyboardImpl
@property (retain, nonatomic) NSMutableSet *mediaButtons; // ivar: _mediaButtons
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) _TVRCRMSNowPlayingState *nowPlayingState; // ivar: _nowPlayingState
@property (retain, nonatomic) TVRMSPairingSession *pairingSession; // ivar: _pairingSession
@property (readonly) Class superclass;


+(id)wrapperWithDevice:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)supportsTouchEvents;
-(NSInteger)_navigationCommandForButtonEvent:(id)arg0 ;
-(NSInteger)_touchDirectionForButtonEvent:(id)arg0 ;
-(NSInteger)connectionType;
-(id)initWithDevice:(id)arg0 ;
-(id)supportedButtons;
-(void)_cancelPairing;
-(void)_connectWithPairingGUID:(id)arg0 ;
-(void)_disconnectWithError:(id)arg0 ;
-(void)_initiatePairing;
-(void)_seekToTime:(CGFloat)arg0 ;
-(void)_setupKeyboardController;
-(void)_skipSeconds:(CGFloat)arg0 ;
-(void)connect;
-(void)controlSession:(id)arg0 artworkDataDidBecomeAvailable:(id)arg1 identifier:(id)arg2 ;
-(void)controlSession:(id)arg0 didUpdateAudioRoutes:(id)arg1 ;
-(void)controlSession:(id)arg0 didUpdateKeyboardEditingInfo:(id)arg1 ;
-(void)controlSession:(id)arg0 didUpdateNowPlayingInfo:(id)arg1 ;
-(void)controlSession:(id)arg0 didUpdateVolume:(float)arg1 ;
-(void)controlSession:(id)arg0 keyboardEditingDidBegin:(id)arg1 ;
-(void)controlSession:(id)arg0 keyboardEditingDidEnd:(id)arg1 ;
-(void)controlSessionDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)disconnectWithError:(id)arg0 ;
-(void)keyboardImpl:(id)arg0 updatedText:(id)arg1 ;
-(void)keyboardImplRequestsSendingReturnKey:(id)arg0 ;
-(void)pairingSession:(id)arg0 didBeginPairingWithPasscode:(id)arg1 ;
-(void)pairingSession:(id)arg0 didPairWithServiceNetworkName:(id)arg1 pairingGUID:(id)arg2 ;
-(void)pairingSessionDidFail:(id)arg0 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;


@end


#endif