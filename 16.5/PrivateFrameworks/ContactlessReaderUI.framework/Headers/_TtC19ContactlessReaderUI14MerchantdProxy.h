// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19CONTACTLESSREADERUI14MERCHANTDPROXY_H
#define _TTC19CONTACTLESSREADERUI14MERCHANTDPROXY_H

@class SwiftObject;
@protocol _TtP15ProximityReader21TransactionUIDelegate_, _TtP15ProximityReader13TransactionUI_;



@interface _TtC19ContactlessReaderUI14MerchantdProxy : SwiftObject <_TtP15ProximityReader21TransactionUIDelegate_, _TtP15ProximityReader13TransactionUI_>

 {
    ? tapUI;
    ? pinUI;
    ? remoteProxy;
    ? proxyQueue;
}




-(void)closePINUI;
-(void)closePINUIImmediate;
-(void)closeUI;
-(void)closeUIImmediate;
-(void)errorInDaemonWithError:(NSInteger)arg0 ;
-(void)notifyIncomingCall;
-(void)pinAuthNeeded;
-(void)pinAuthResultWithError:(id)arg0 cancelsFlow:(BOOL)arg1 ;
-(void)pinDataReceivedWithPinData:(id)arg0 isCardRequest:(BOOL)arg1 isAccessibilityEnabled:(BOOL)arg2 ;
-(void)pinUIDidLoad;
-(void)pinValidateSession;
-(void)reportGuidanceUpdateWithVisible:(BOOL)arg0 trigger:(id)arg1 ;
-(void)reportPINErrorWithError:(NSInteger)arg0 isCardRequest:(BOOL)arg1 isAccessibilityEnabled:(BOOL)arg2 ;
-(void)reportProxEventInRange:(BOOL)arg0 ;
-(void)requiresCardPIN:(id)arg0 ;
-(void)setVoiceOverWithEnabled:(BOOL)arg0 ;
-(void)tapUIDidLoad;
-(void)tapUIFinishedWithExpected:(BOOL)arg0 ;
-(void)tapUIRequestingCancel;
-(void)tapUIRequestingRetry;
-(void)updateSessionEventWithSessionEvent:(NSInteger)arg0 ;
-(void)updateWithTransactionEvent:(NSInteger)arg0 ;
-(void)vasReadSuccessWithMerchantNames:(id)arg0 ;


@end


#endif