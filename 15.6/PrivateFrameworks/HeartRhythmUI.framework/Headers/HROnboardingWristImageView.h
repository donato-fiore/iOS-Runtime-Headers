// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGWRISTIMAGEVIEW_H
#define HRONBOARDINGWRISTIMAGEVIEW_H

@class UIView, UIImageView;


#import "HRElectrocardiogramSessionSimulationView.h"

@interface HROnboardingWristImageView : UIView

@property (readonly, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, nonatomic) HRElectrocardiogramSessionSimulationView *screenView; // ivar: _screenView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setTimeRemaining:(CGFloat)arg0 ;
-(void)setUpUI;


@end


#endif