// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREACTIVATIONVIEWCONTROLLER_H
#define PKPASSSHAREACTIVATIONVIEWCONTROLLER_H

@class NSString, PKPassSharePendingActivation;


#import "PKPassShareRedemptionViewController.h"

@interface PKPassShareActivationViewController : PKPassShareRedemptionViewController {
    NSString *_activationCode;
    PKPassSharePendingActivation *_pendingActivation;
}




-(id)init;
-(id)initWithPendingActivation:(id)arg0 ;
-(void)_showError:(id)arg0 ;
-(void)activationCodeDidChangeToCode:(id)arg0 ;
-(void)cancelButtonPressed;
-(void)continueButtonPressed;
-(void)loadCardArt;
-(void)loadView;


@end


#endif