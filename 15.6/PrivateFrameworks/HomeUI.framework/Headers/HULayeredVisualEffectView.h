// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULAYEREDVISUALEFFECTVIEW_H
#define HULAYEREDVISUALEFFECTVIEW_H

@class UIView, UIVisualEffectView;


#import "HULayeredBackgroundEffect.h"
#import "HULayeredContentEffect.h"

@interface HULayeredVisualEffectView : UIView

@property (retain, nonatomic) HULayeredBackgroundEffect *backgroundEffect; // ivar: _backgroundEffect
@property (nonatomic) CGFloat backgroundEffectAlpha; // ivar: _backgroundEffectAlpha
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (retain, nonatomic) UIView *backgroundFillView; // ivar: _backgroundFillView
@property (retain, nonatomic) HULayeredContentEffect *contentEffect; // ivar: _contentEffect
@property (nonatomic) CGFloat contentEffectAlpha; // ivar: _contentEffectAlpha
@property (retain, nonatomic) UIVisualEffectView *contentEffectView; // ivar: _contentEffectView
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


-(id)initWithContentEffect:(id)arg0 backgroundEffect:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_applyCornerRadius;
-(void)_updateBackgroundEffects;
-(void)_updateContentEffects;
-(void)_updateSubviewOrder;


@end


#endif