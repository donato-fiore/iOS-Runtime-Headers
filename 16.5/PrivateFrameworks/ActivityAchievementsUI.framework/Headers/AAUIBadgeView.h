// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIBADGEVIEW_H
#define AAUIBADGEVIEW_H

@class UIView, UIImage, NSAttributedString, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, NSDictionary, NSString, NSNumber;
@protocol UIGestureRecognizerDelegate, AAUIBadgeViewDrawableDelegate, AAUIBadgeViewDrawable, AAUIBadgeViewDelegate;


#import "AAUIBadge.h"
#import "AAUIBadgeModelConfiguration.h"

@interface AAUIBadgeView : UIView <UIGestureRecognizerDelegate, AAUIBadgeViewDrawableDelegate, AAUIBadgeViewDrawable>

 {
    BOOL _useEarnedShader;
    AAUIBadge *_badge;
    UIImage *_backAppleLogo;
    NSAttributedString *_backsideAttributedString;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSDictionary *_tweakableUniforms;
    CGFloat _lastUpdateTime;
    CGFloat _spinRate;
}


@property (retain, nonatomic) UIImage *backTextureImage; // ivar: _backTextureImage
@property (weak, nonatomic) NSObject<AAUIBadgeViewDelegate> *badgeDelegate; // ivar: _badgeDelegate
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<AAUIBadgeViewDrawable> *drawable; // ivar: _drawable
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL magnetsEngaged; // ivar: _magnetsEngaged
@property (retain, nonatomic) NSNumber *overrideEarnedShader; // ivar: _overrideEarnedShader
@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) id *shortenedBadgeBacksideStringProvider; // ivar: _shortenedBadgeBacksideStringProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *useMetal; // ivar: _useMetal
@property (nonatomic) BOOL verticalPanningDisabled; // ivar: _verticalPanningDisabled
@property (readonly, nonatomic) UIView *view;


+(CGFloat)badgeAspectRatio;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_attenuatedSpinRate:(CGFloat)arg0 ;
-(CGFloat)_attenuatedVelocity:(CGFloat)arg0 ;
-(CGFloat)playFlipInAnimation;
-(CGFloat)playFlipOutAnimation;
-(CGFloat)timeSinceLastUpdate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(float)_normalizeAngle:(float)arg0 ;
-(id)_defaultTweaks;
-(id)_unearnedShaderDefaultTweaks;
-(id)_valueForTweak:(id)arg0 ;
-(id)drawable:(id)arg0 valueForTweakableUniform:(id)arg1 ;
-(id)initUsingEarnedShader:(BOOL)arg0 ;
-(id)initUsingEarnedShader:(BOOL)arg0 delegate:(id)arg1 ;
-(id)snapshot;
-(id)tweakableUniformsForDrawable:(id)arg0 ;
-(id)updateBadgeModelForDrawable:(id)arg0 ;
-(void)_applyImpulse:(CGFloat)arg0 ;
-(void)_generateBackTextureImage;
-(void)_invalidateLastUpdateTime;
-(void)_longPressInternalOnly:(id)arg0 ;
-(void)_panned:(id)arg0 ;
-(void)_setBackTextureNeedsRegeneration;
-(void)_spin360Degrees;
-(void)_tapped:(id)arg0 ;
-(void)cleanupAfterSnapshot;
-(void)resizeBadgeForCurrentViewSize;
-(void)setBadgeBacksideAttributedString:(id)arg0 ;
-(void)setBadgeBacksideIcon:(id)arg0 ;
-(void)setFixedBadgeAngle:(CGFloat)arg0 ;


@end


#endif