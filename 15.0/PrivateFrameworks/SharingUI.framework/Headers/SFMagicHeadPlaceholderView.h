// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMAGICHEADPLACEHOLDERVIEW_H
#define SFMAGICHEADPLACEHOLDERVIEW_H

@class UIView, UIVisualEffectView, UILabel, UIImageView;


#import "SFMagicHeadCircleView.h"

@interface SFMagicHeadPlaceholderView : UIView {
    UIVisualEffectView *_backgroundVisualEffectView;
    SFMagicHeadCircleView *_backgroundView;
    UIVisualEffectView *_contentVisualEffectView;
    UILabel *_label;
    UIImageView *_imageView;
    BOOL _useNoUWBCapableLabel;
    BOOL _useRaiseLabel;
    BOOL _titledTooFarColor;
    BOOL _canShowArrow;
}




-(CGFloat)alpha;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setTiltedTooFarColor:(BOOL)arg0 useRaiseLabel:(BOOL)arg1 useNoUWBCapableLabel:(BOOL)arg2 ;
-(void)updateForCurrentState;


@end


#endif