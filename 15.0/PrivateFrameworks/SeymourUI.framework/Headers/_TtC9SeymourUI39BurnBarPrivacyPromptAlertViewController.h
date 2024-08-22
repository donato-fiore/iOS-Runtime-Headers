// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI39BURNBARPRIVACYPROMPTALERTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI39BURNBARPRIVACYPROMPTALERTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI39BurnBarPrivacyPromptAlertViewController : UIViewController {
    ? backgroundView;
    ? scrollView;
    ? contentView;
    ? titleLabel;
    ? messageLabel;
    ? burnbarOnButton;
    ? burnbarOffButton;
    ? burnBar;
    ? burnBarEnabledBlock;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)burnbarOffButtonTapped;
-(void)burnbarOnButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif