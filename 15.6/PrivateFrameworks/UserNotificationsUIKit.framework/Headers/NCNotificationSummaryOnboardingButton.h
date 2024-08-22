// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSUMMARYONBOARDINGBUTTON_H
#define NCNOTIFICATIONSUMMARYONBOARDINGBUTTON_H

@class UIButton, UIView;



@interface NCNotificationSummaryOnboardingButton : UIButton {
    UIView *_backgroundView;
}




-(void)_configureBackgroundViewIfNecessary;
-(void)_layoutBackgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif