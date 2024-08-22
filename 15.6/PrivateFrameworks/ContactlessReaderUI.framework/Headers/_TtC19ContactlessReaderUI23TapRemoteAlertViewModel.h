// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19CONTACTLESSREADERUI23TAPREMOTEALERTVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI23TAPREMOTEALERTVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5TapUI_;



@interface _TtC19ContactlessReaderUI23TapRemoteAlertViewModel : SwiftObject <_TtP15ProximityReader5TapUI_>

 {
    ? remoteProxy;
    ? audioToneGenerator;
    ? _transactionDetails;
    ? interruptionMonitor;
    ? _transactionState;
    ? previousTransactionState;
    ? _particlesState;
    ? _transactionInstruction;
    ? _amount;
    ? _singleImageViewAsset;
    ? _singleImageViewColor;
    ? _transactionPrompt;
    ? _finalScreen;
    ? _vasMerchantNames;
    ? _incomingCall;
    ? _tapUIError;
    ? _finalState;
    ? _showPearl;
    ? _showCancel;
    ? _tapUIIsPresented;
    ? _dismissViewController;
    ? _disableSleep;
    ? _oneTimeAXLabel;
    ? _oneTimeAXValue;
    ? axOngoingAnnouncement;
    ? closeAfterAXAnnouncement;
    ? voiceOverIsRunning;
    ? notificationObservers;
    ? ignoreReadyUpdate;
    ? tryAgainCounter;
    ? _detectedReceived;
}




-(void)closeUI;
-(void)closeUIImmediate;
-(void)updateWithTransactionState:(NSInteger)arg0 ;
-(void)vasReadSuccessWithMerchantNames:(id)arg0 ;


@end


#endif