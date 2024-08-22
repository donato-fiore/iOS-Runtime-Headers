// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI21REGISTRATIONVIEWMODEL_H
#define _TTC19CONTACTLESSREADERUI21REGISTRATIONVIEWMODEL_H

@class SwiftObject;
@protocol _TtP15ProximityReader5RegUI_;



@interface _TtC19ContactlessReaderUI21RegistrationViewModel : SwiftObject <_TtP15ProximityReader5RegUI_>

 {
    ? remoteProxy;
    ? _accountID;
    ? _dismissViewController;
    ? _state;
    ? _showError;
    ? _showTermsofService;
    ? regViewController;
    ? partnerToken;
    ? analyticsAppleIdUsed;
}




-(void)closeUI;
-(void)closeUIImmediate;
-(void)notifyUIResultWithResult:(id)arg0 ;


@end


#endif