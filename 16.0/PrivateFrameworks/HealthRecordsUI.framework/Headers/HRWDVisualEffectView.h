// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRWDVISUALEFFECTVIEW_H
#define HRWDVISUALEFFECTVIEW_H

@class UIVisualEffectView, UIView;



@interface HRWDVisualEffectView : UIVisualEffectView

@property (retain, nonatomic) UIView *tintView; // ivar: _tintView


+(id)tintViewWithBlurEffectStyle:(NSInteger)arg0 color:(id)arg1 ;
+(id)ultraLightTintView;
-(id)initWithEffect:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif