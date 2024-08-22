// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapContinueButton;
-(void)viewDidLoad;


@end


#endif