// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRCLINICALSHARINGONBOARDINGINFORMATIONALVIEWCONTROLLER_H
#define HRCLINICALSHARINGONBOARDINGINFORMATIONALVIEWCONTROLLER_H

@class OBWelcomeController;



@interface HRClinicalSharingOnboardingInformationalViewController : OBWelcomeController {
    ? onboardingSession;
    ? flowType;
    ? selectedAccount;
    ? accountIconProvider;
    ? gatewayProxyToTry;
    ? delegate;
}




-(id)initWithOnboardingSession:(id)arg0 flowType:(NSInteger)arg1 selectedAccount:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)nextButtonTappedForAccountLogin:(id)arg0 ;
-(void)nextButtonTappedForAuthorizationSelection:(id)arg0 ;
-(void)nextButtonTappedForProviderSearch:(id)arg0 ;
-(void)skipButtonTappedForAuthorizationSelection:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif