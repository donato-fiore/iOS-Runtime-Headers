// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBUSINESSONBOARDINGCONTROLLER_H
#define CKBUSINESSONBOARDINGCONTROLLER_H

@class OBWelcomeController;



@interface CKBusinessOnboardingController : OBWelcomeController

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


+(BOOL)shouldShowBusinessOnboarding;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)continueButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif