// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONVIEW_H
#define HUICONVIEW_H

@class UIView, NSString, UIVisualEffectView, UIVisualEffect;
@protocol HUIconContentViewDelegate, HFIconDescriptor;


#import "HUIconContentView.h"

@interface HUIconView : UIView <HUIconContentViewDelegate>



@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (retain, nonatomic) HUIconContentView *currentIconContentView; // ivar: _currentIconContentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableContinuousAnimation; // ivar: _disableContinuousAnimation
@property (nonatomic) NSUInteger displayContext; // ivar: _displayContext
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (readonly) Class superclass;
@property BOOL useIntrinsicContentSizeFromAsset; // ivar: _useIntrinsicContentSizeFromAsset
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect; // ivar: _vibrancyEffect
@property (nonatomic) CGFloat vibrancyEffectAnimationDuration; // ivar: _vibrancyEffectAnimationDuration


-(id)_defaultVibrancyEffect;
-(id)contentContainerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 contentMode:(NSInteger)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg0 ;
-(void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)iconContentView:(id)arg0 didChangeAspectRatio:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)reclaimIconIfPossible;
-(void)renounceIconIfPossible;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif