// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARPLANUSERCONSENTVIEWCONTROLLER_H
#define TSCELLULARPLANUSERCONSENTVIEWCONTROLLER_H

@class NSString, NSArray, UIView;
@protocol SSSpinnerProtocol, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"
#import "SSOBBoldTrayButton.h"
#import "SSSpinner.h"

@interface TSCellularPlanUserConsentViewController : TSOBWelcomeController <SSSpinnerProtocol, TSSetupFlowItem>

 {
    BOOL _didReceiveResponse;
    NSString *_confirmationCode;
    BOOL _requireAdditionalConsent;
}


@property (retain) SSOBBoldTrayButton *acceptButton; // ivar: _acceptButton
@property BOOL animating; // ivar: _animating
@property (retain) NSArray *cachedButtons; // ivar: _cachedButtons
@property (readonly, nonatomic) NSUInteger consentType; // ivar: _consentType
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SSSpinner *spinner; // ivar: _spinner
@property (retain) UIView *spinnerContainer; // ivar: _spinnerContainer
@property (readonly) Class superclass;


+(void)calculateTitleAndDetailsWithName:(id)arg0 consentType:(NSUInteger)arg1 title:(*id)arg2 details:(*id)arg3 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)customizeSpinner;
-(id)initWithConfirmationCode:(id)arg0 consentType:(NSUInteger)arg1 requireAdditionalConsent:(BOOL)arg2 confirmationCode:(id)arg3 ;
-(id)initWithName:(id)arg0 consentType:(NSUInteger)arg1 requireAdditionalConsent:(BOOL)arg2 ;
-(void)_cancelButtonTapped;
-(void)_declineButtonTapped;
-(void)_setNavigationItems;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif