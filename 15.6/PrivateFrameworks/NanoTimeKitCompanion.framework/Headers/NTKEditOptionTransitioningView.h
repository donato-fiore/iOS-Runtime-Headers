// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKEDITOPTIONTRANSITIONINGVIEW_H
#define NTKEDITOPTIONTRANSITIONINGVIEW_H

@class UIView, UIImageView;
@protocol NTKEditOptionTransitioningViewDelegate;


#import "NTKEditOption.h"

@interface NTKEditOptionTransitioningView : UIView {
    UIView *_transitionContainer;
    UIView *_transitionDimmingView;
    CGFloat _breathScaleModifier;
    CGFloat _rubberBandScaleModifier;
    UIImageView *_toTransitionImageView;
    UIImageView *_fromTransitionImageView;
}


@property (weak, nonatomic) NSObject<NTKEditOptionTransitioningViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NTKEditOption *fromEditOption; // ivar: _fromEditOption
@property (retain, nonatomic) NTKEditOption *toEditOption; // ivar: _toEditOption


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_resetTransitionImageView:(id)arg0 ;
-(void)_updateUnifiedScaleTransform;
-(void)didAddSubview:(id)arg0 ;
-(void)setBreatheFraction:(CGFloat)arg0 ;
-(void)setDimmingAlpha:(CGFloat)arg0 ;
-(void)setOption:(id)arg0 ;
-(void)setRubberBandingFraction:(CGFloat)arg0 ;
-(void)setTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 ;


@end


#endif