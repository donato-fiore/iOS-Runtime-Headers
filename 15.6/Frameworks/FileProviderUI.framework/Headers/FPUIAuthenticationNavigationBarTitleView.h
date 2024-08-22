// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUIAUTHENTICATIONNAVIGATIONBARTITLEVIEW_H
#define FPUIAUTHENTICATIONNAVIGATIONBARTITLEVIEW_H

@class UIStackView, UIActivityIndicatorView, UILabel, NSString;



@interface FPUIAuthenticationNavigationBarTitleView : UIStackView

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title;


-(id)init;


@end


#endif