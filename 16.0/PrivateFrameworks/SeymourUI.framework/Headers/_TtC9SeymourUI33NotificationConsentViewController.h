// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI33NOTIFICATIONCONSENTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI33NOTIFICATIONCONSENTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI33NotificationConsentViewController : UIViewController {
    ? scrollView;
    ? contentView;
    ? imageView;
    ? titleLabel;
    ? bodyLabel;
    ? continueButton;
    ? contentAvailability;
    ? fallbackLocalizationBundle;
    ? storefrontLocalizer;
    ? platform;
    ? continueButtonHandler;
    ? _fitnessPlusNotificationSettingsEnabled;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapContinueButton;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif