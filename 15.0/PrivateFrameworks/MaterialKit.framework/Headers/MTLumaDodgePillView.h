// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLUMADODGEPILLVIEW_H
#define MTLUMADODGEPILLVIEW_H

@class NSMutableArray, NSString;
@protocol CAAnimationDelegate, MTLumaDodgePillBackgroundLuminanceObserver;


#import "MTPillView.h"
#import "MTLumaDodgePillSettings.h"
#import "_MTLumaDodgePillLowQualityEffectView.h"

@interface MTLumaDodgePillView : MTPillView <CAAnimationDelegate>

 {
    MTLumaDodgePillSettings *_settings;
    NSInteger _graphicsQuality;
    CGFloat _luma;
    BOOL _lumaIsValid;
    _MTLumaDodgePillLowQualityEffectView *_lowQualityEffectView;
    unsigned int _bounceAnimationsInFlight;
    NSMutableArray *_bounceAnimationKeys;
}


@property (readonly, nonatomic) NSInteger backgroundLuminance; // ivar: _backgroundLuminance
@property (nonatomic) NSInteger backgroundLuminanceBias; // ivar: _backgroundLuminanceBias
@property (weak, nonatomic) NSObject<MTLumaDodgePillBackgroundLuminanceObserver> *backgroundLumninanceObserver; // ivar: _backgroundLumninanceObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) CGFloat suggestedEdgeSpacing;
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundLuminanceObserving;
+(Class)layerClass;
+(struct CGSize )suggestedSizeForContentWidth:(CGFloat)arg0 withSettings:(id)arg1 ;
+(void)initialize;
-(BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 graphicsQuality:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )suggestedSizeForContentWidth:(CGFloat)arg0 ;
-(void)_updateStyle;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)backdropLayer:(id)arg0 didChangeLuma:(CGFloat)arg1 ;
-(void)bounce;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif