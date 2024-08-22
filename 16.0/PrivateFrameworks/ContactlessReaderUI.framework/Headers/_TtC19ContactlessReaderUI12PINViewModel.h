// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI12PINVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI12PINVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5PINUI_;



@interface _TtC19ContactlessReaderUI12PINViewModel : SwiftObject <_TtP15ProximityReader5PINUI_>

 {
    ? remoteProxy;
    ? interruptionMonitor;
    ? digitCounter;
    ? removeDigitsCounter;
    ? dismissalCallback;
    ? notificationObservers;
    ? pinData;
    ? vocalCompletion;
    ? playSound;
    ? $__lazy_storage_$_vocalReading;
    ? voiceOverWasEnabled;
    ? initialInstructions;
    ? executeAfterAnnouncement;
    ? executeAfterVocalReading;
    ? _voiceOverEnabled;
    ? _statusDisplay;
    ? _statusText;
    ? _incomingCall;
    ? _showProgress;
    ? entryTimer;
    ? tapCounterTimer;
    ? removeDigitTimer;
    ? _pinUIIsPresented;
    ? _dismissViewController;
    ? _disableSleep;
    ? _showTapCounter;
    ? _disableAXButton;
    ? _disableErrorButton;
    ? _readingVOInstructions;
    ? _pinLength;
    ? _pinUIError;
    ? _presentAuth;
    ? _showLockOnStatusBar;
    ? _cancelUnlockInstruction;
    ? samSession;
    ? context;
    ? evaluating;
    ? pinCardRequest;
    ? isPINPrivacyLockEnabled;
    ? incomingCallAccepted;
    ? pinCaptureState;
    ? _pinState;
    ? displayPINView;
    ? pinController;
}




-(void)closePINUI;
-(void)errorInDaemonWithError:(NSInteger)arg0 ;
-(void)notifyIncomingCall;
-(void)startPINWithDigest:(id)arg0 pinToken:(id)arg1 ;
-(void)updateSessionEventWithSessionEvent:(NSInteger)arg0 ;


@end


#endif