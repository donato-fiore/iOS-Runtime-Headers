// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI32SESSIONPROMPTALERTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI32SESSIONPROMPTALERTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI32SessionPromptAlertViewController : UIViewController {
    ? titleText;
    ? subtitleText;
    ? primaryActionTitle;
    ? secondaryActionTitle;
    ? featureView;
    ? platform;
    ? actionResultBlock;
    ? backgroundView;
    ? contentView;
    ? stackView;
    ? titleLabel;
    ? subtitleLabel;
    ? primaryPhoneButton;
    ? secondaryPhoneButton;
    ? primaryTVButton;
    ? secondaryTVButton;
    ? styleProvider;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)burnbarOffButtonTapped;
-(void)burnbarOnButtonTapped;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif