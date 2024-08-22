// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSTASHVIEW_H
#define PGSTASHVIEW_H

@class UIView, UIImageView;


#import "PGBackdropView.h"

@interface PGStashView : UIView {
    PGBackdropView *_backdropView;
    UIView *_lightTintView;
    UIView *_darkTintView;
    UIImageView *_leftChevron;
    UIImageView *_rightChevron;
    BOOL _chevronsHidden;
    BOOL _isChevronShownLeft;
}


@property (nonatomic) CGFloat blurProgress; // ivar: _blurProgress
@property (nonatomic) CGFloat stashedTabWidth; // ivar: _stashedTabWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutStashChevrons;
-(void)layoutSubviews;
-(void)resetChevronState;
-(void)setChevronHidden:(BOOL)arg0 left:(BOOL)arg1 ;


@end


#endif