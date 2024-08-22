// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI31ONBOARDINGWELCOMEVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI31ONBOARDINGWELCOMEVIEWCONTROLLER_H

@class UIViewController;
@protocol UIScrollViewDelegate;



@interface _TtC28HealthExposureNotificationUI31OnboardingWelcomeViewController : UIViewController <UIScrollViewDelegate>

 {
    ? flow;
    ? isFromAvailabilityAlert;
    ? notificationPreview;
    ? primaryButton;
    ? secondaryButton;
    ? titleLabel;
    ? subtitleLabel;
    ? howItWorksButton;
    ? footerLabel;
    ? scrollView;
    ? scrollViewContentSizeObserver;
    ? buttonTray;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapDone;
-(void)didTapFooterLabel;
-(void)didTapHowExposureNotificationsWork;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif