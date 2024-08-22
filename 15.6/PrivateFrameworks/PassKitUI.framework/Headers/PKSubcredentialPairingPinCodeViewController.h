// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPAIRINGPINCODEVIEWCONTROLLER_H
#define PKSUBCREDENTIALPAIRINGPINCODEVIEWCONTROLLER_H

@class UIViewController, UILabel, UIBarButtonItem, NSString;
@protocol PKPinCodeFieldDelegate, PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationView.h"
#import "PKPinCodeField.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKSubcredentialPairingPinCodeViewController : UIViewController <PKPinCodeFieldDelegate, PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation>

 {
    PKExplanationView *_explainationView;
    PKPinCodeField *_pinCodeView;
    UILabel *_helpLabel;
    CGSize _keyboardSize;
    UIBarButtonItem *_nextButton;
    BOOL _isAdvancing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;


-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(id)localizedIssuerName;
-(void)cancelButtonPressed;
-(void)explanationViewDidUpdateLayout:(id)arg0 ;
-(void)nextButtonPressed;
-(void)pinCodeTextFieldWasUpdated:(id)arg0 isComplete:(BOOL)arg1 ;
-(void)resetPinCode;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif