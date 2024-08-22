// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI12TAPVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI12TAPVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5TapUI_;



@interface _TtC19ContactlessReaderUI12TapViewModel : SwiftObject <_TtP15ProximityReader5TapUI_>

 {
    ? remoteProxy;
    ? playSound;
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
    ? _showPIN;
    ? _tapUIIsPresented;
    ? _dismissViewController;
    ? _disableSleep;
    ? _oneTimeAXLabel;
    ? _oneTimeAXValue;
    ? axOngoingAnnouncement;
    ? closeAfterAXAnnouncement;
    ? voiceOverIsRunning;
    ? notificationObservers;
    ? readCompleteSuccessReceived;
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