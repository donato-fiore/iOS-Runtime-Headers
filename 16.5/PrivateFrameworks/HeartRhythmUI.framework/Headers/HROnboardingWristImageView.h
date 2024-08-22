// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRONBOARDINGWRISTIMAGEVIEW_H
#define HRONBOARDINGWRISTIMAGEVIEW_H

@class UIView, UIImageView;



@interface HROnboardingWristImageView : UIView

@property (readonly, nonatomic) NSInteger watchImageStyle; // ivar: _watchImageStyle
@property (retain, nonatomic) UIView *wristWatchContentView; // ivar: _wristWatchContentView
@property (readonly, nonatomic) UIImageView *wristWatchImageView; // ivar: _wristWatchImageView


-(id)_wristWatchContentViewForStyle:(NSInteger)arg0 ;
-(id)initWithImageStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setTimeRemaining:(CGFloat)arg0 ;


@end


#endif