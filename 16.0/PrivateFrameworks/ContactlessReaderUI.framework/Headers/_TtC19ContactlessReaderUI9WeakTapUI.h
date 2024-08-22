// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI9WEAKTAPUI_H
#define _TTC19CONTACTLESSREADERUI9WEAKTAPUI_H

@class SwiftObject;
@protocol _TtP15ProximityReader13TransactionUI_;



@interface _TtC19ContactlessReaderUI9WeakTapUI : SwiftObject <_TtP15ProximityReader13TransactionUI_>

 {
    ? ui;
}




-(void)closePINUI;
-(void)closeUI;
-(void)closeUIImmediate;
-(void)errorInDaemonWithError:(NSInteger)arg0 ;
-(void)notifyIncomingCall;
-(void)startPINWithDigest:(id)arg0 pinToken:(id)arg1 ;
-(void)updateSessionEventWithSessionEvent:(NSInteger)arg0 ;
-(void)updateWithTransactionState:(NSInteger)arg0 ;
-(void)vasReadSuccessWithMerchantNames:(id)arg0 ;


@end


#endif