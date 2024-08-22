// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERPAGESHADOWVIEW_H
#define SBAPPSWITCHERPAGESHADOWVIEW_H

@class SBFView, UIView, NSString, UIBezierPath;
@protocol PTSettingsKeyObserver;


#import "SBAppSwitcherSettings.h"
#import "SBMedusaSettings.h"

@interface SBAppSwitcherPageShadowView : SBFView <PTSettingsKeyObserver>

 {
    SBAppSwitcherSettings *_switcherSettings;
    SBMedusaSettings *_medusaSettings;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
    CGFloat _rimShadowRadius;
    CGFloat _rimShadowOpacity;
    CGFloat _diffuseShadowRadius;
    CGFloat _diffuseShadowOpacity;
    CGSize _diffuseShadowOffset;
    CGFloat _diffuseShadowRadiusWhileTouched;
    CGFloat _diffuseShadowOpacityWhileTouched;
    CGSize _diffuseShadowOffsetWhileTouched;
    CGFloat _diffuseShadowRadiusWhileCursorHovered;
    CGFloat _diffuseShadowOpacityWhileCursorHovered;
    CGSize _diffuseShadowOffsetWhileCursorHovered;
}


@property (readonly, nonatomic) UIView *_diffuseShadowView;
@property (readonly, nonatomic) UIView *_rimShadowView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger highlightType; // ivar: _highlightType
@property (nonatomic) CGFloat shadowOffset; // ivar: _shadowOffset
@property (retain, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) CGFloat switcherCardScale; // ivar: _switcherCardScale


-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_applyPrototypeSettingsToConstants;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateShadowParameters;
-(void)_updateShadowViews;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif