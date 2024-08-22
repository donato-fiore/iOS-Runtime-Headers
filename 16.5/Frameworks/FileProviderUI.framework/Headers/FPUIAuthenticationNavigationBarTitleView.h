// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUIAUTHENTICATIONNAVIGATIONBARTITLEVIEW_H
#define FPUIAUTHENTICATIONNAVIGATIONBARTITLEVIEW_H

@class UIStackView, UIActivityIndicatorView, UILabel, NSString;



@interface FPUIAuthenticationNavigationBarTitleView : UIStackView

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title;


-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFontOfTitleLabel:(id)arg0 ;


@end


#endif