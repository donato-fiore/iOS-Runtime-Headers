// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19CONTACTLESSREADERUI12TAPVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI12TAPVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5TapUI_;



@interface _TtC19ContactlessReaderUI12TapViewModel : SwiftObject <_TtP15ProximityReader5TapUI_>

 {
    ? remoteProxy;
    ? _tapUIIsPresented;
    ? _showPIN;
    ? _transactionDetails;
    ? _readerStateModel;
    ? _particlesState;
    ? _showCancelButton;
    ? _vasMerchantNames;
    ? _tapUIError;
    ? _centerState;
    ? _orientationInverted;
    ? _centerTextKey;
    ? _axTransactionContextLabel;
    ? _axTransactionContextValue;
    ? axOngoingAnnouncement;
    ? closeAfterAXAnnouncement;
    ? showPINAfterAXAnnouncement;
    ? voiceOverIsRunning;
    ? notificationObservers;
    ? stateMachine;
    ? playSound;
    ? rotationManager;
    ? proximitySensorObserver;
    ? sensorObscured;
    ? proximityCounter;
    ? cardTearCounter;
    ? transientCenterStateTimer;
    ? subscriptions;
}




-(void)closeUI;
-(void)closeUIImmediate;
-(void)requiresCardPIN:(id)arg0 ;
-(void)updateWithTransactionEvent:(NSInteger)arg0 ;
-(void)vasReadSuccessWithMerchantNames:(id)arg0 ;


@end


#endif