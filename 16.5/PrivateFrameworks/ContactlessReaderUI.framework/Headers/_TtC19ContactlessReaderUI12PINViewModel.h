// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19CONTACTLESSREADERUI12PINVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI12PINVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5PINUI_;



@interface _TtC19ContactlessReaderUI12PINViewModel : SwiftObject <_TtP15ProximityReader5PINUI_>

 {
    ? remoteProxy;
    ? tapDigitCounter;
    ? removeDigitsCounter;
    ? pinContext;
    ? pinData;
    ? audioManager;
    ? $__lazy_storage_$_voiceOverObserver;
    ? $__lazy_storage_$_fineRotationManager;
    ? voiceOverWasEnabled;
    ? initialInstructions;
    ? shortInstructions;
    ? audioMode;
    ? inhibitsVocalMessages;
    ? _voiceOverEnabled;
    ? _incomingCall;
    ? _showProgress;
    ? pinEntryTimer;
    ? tapCounterTimer;
    ? removeDigitTimer;
    ? _pinUIIsPresented;
    ? _pinEntryMode;
    ? _disableAXButton;
    ? _readingVOInstructions;
    ? _pinLength;
    ? _pinUIError;
    ? _presentAuth;
    ? _showLockOnStatusBar;
    ? _cancelUnlockInstruction;
    ? _topBarModel;
    ? samSession;
    ? context;
    ? evaluating;
    ? pinCardRequest;
    ? subscribers;
    ? isPINPrivacyLockEnabled;
    ? didMerchantAuthorize;
    ? incomingCallAccepted;
    ? pinController;
    ? pinCaptureState;
    ? _pinState;
}




-(void)closePINUI;
-(void)closePINUIImmediate;
-(void)errorInDaemonWithError:(NSInteger)arg0 ;
-(void)notifyIncomingCall;
-(void)updateSessionEventWithSessionEvent:(NSInteger)arg0 ;


@end


#endif