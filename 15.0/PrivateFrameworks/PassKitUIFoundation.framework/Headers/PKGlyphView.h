// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKGLYPHVIEW_H
#define PKGLYPHVIEW_H

@class UIView, NSMutableArray, NSString, LAUIPearlGlyphView, LAUICheckmarkLayer, CALayer, PKMicaLayer, UIColor;
@protocol PKFingerprintGlyphViewDelegate, LAUIPearlGlyphViewDelegate, OS_dispatch_group, PKGlyphViewDelegate;


#import "PKFingerprintGlyphView.h"
#import "PKPhoneGlyphLayer.h"

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate, LAUIPearlGlyphViewDelegate>

 {
    NSInteger _style;
    BOOL _isPad;
    NSUInteger _transitionIndex;
    BOOL _transitioning;
    BOOL _transitioningAnimated;
    NSInteger _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    NSObject<OS_dispatch_group> *_lastAnimationGroup;
    CGFloat _lastAnimationWillFinish;
    BOOL _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    ? _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    LAUIPearlGlyphView *_pearlView;
    PKPhoneGlyphLayer *_phoneLayer;
    LAUICheckmarkLayer *_checkLayer;
    CALayer *_userIntentLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentDeviceLayer;
    CGFloat _phoneAspectRatio;
    CALayer *_customImageLayer;
    UIColor *_secondaryColor;
    UIColor *_primaryHighlightColor;
    UIColor *_intentPrimaryHighlightColor;
    UIColor *_secondaryHighlightColor;
}


@property (readonly, nonatomic) NSInteger colorMode; // ivar: _colorMode
@property (readonly, nonatomic) *CGImage customImage; // ivar: _customImage
@property (readonly, nonatomic) UIEdgeInsets customImageAlignmentEdgeInsets; // ivar: _customImageAlignmentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKGlyphViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOnRecognized;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (nonatomic) BOOL showQRCode; // ivar: _showQRCode
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int userIntentEdge; // ivar: _userIntentEdge


+(BOOL)automaticallyNotifiesObserversOfState;
+(id)sharedStaticResources;
+(void)invokeSuccessFeedback;
-(id)_primaryColorForStyle:(NSInteger)arg0 mode:(NSInteger)arg1 ;
-(id)_secondaryColorForStyle:(NSInteger)arg0 mode:(NSInteger)arg1 ;
-(id)createCustomImageLayer;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CATransform3D )_phoneTransformDeltaWhileShownFromRotationPercentage:(CGFloat)arg0 toPercentage:(CGFloat)arg1 ;
-(struct CGPoint )_phonePositionDeltaWhileShownFromRotationPercentage:(CGFloat)arg0 toPercentage:(CGFloat)arg1 ;
-(struct CGPoint )_phonePositionWhileShownWithRotationPercentage:(CGFloat)arg0 ;
-(void)_applyColorMode:(BOOL)arg0 ;
-(void)_applyEffectiveHighlightColorsToLayersAnimated:(BOOL)arg0 ;
-(void)_applyEffectivePrimaryColorToLayersAnimated:(BOOL)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_endPhoneWiggle;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(id)arg0 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(CGFloat)arg0 handler:(id)arg1 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg0 ;
-(void)_finishTransitionForIndex:(NSUInteger)arg0 cancelled:(BOOL)arg1 ;
-(void)_layoutContentLayer:(id)arg0 ;
-(void)_performTransitionWithTransitionIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_setRecognizedIfNecessaryWithTransitionIndex:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_setSecondaryColor:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startPhoneWiggle;
-(void)_updateCheckViewStateAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg0 ;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(CGFloat)arg0 ;
-(void)_updatePhoneLayoutWithTransitionIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updatePhoneWiggleIfNecessary;
-(void)_updateUserIntentLayerRotation;
-(void)_updateUserIntentLayoutAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)fingerprintGlyphView:(id)arg0 didLayoutContentLayer:(id)arg1 ;
-(void)layoutSubviews;
-(void)pearlGlyphView:(id)arg0 didLayoutContentLayer:(id)arg1 ;
-(void)tintColorDidChange;
-(void)updateRasterizationScale:(CGFloat)arg0 ;
-(void)updateRotation;


@end


#endif