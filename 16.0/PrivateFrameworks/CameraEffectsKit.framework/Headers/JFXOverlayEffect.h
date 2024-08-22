// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXOVERLAYEFFECT_H
#define JFXOVERLAYEFFECT_H

@class NSString;
@protocol JFXTrackedEffectPropertiesDelegate;


#import "JFXTextEffect.h"
#import "JFXFaceTrackedEffectTransform.h"
#import "JFXTrackedEffectProperties.h"

@interface JFXOverlayEffect : JFXTextEffect <JFXTrackedEffectPropertiesDelegate>

 {
    uint8_t _isInteractiveEditingCount;
    uint8_t _isEditingFaceTrackingTransformsCount;
}


@property (copy, nonatomic) NSString *accessibilityOverlayEffectLabel; // ivar: _accessibilityOverlayEffectLabel
@property (copy, nonatomic) NSString *dynamicTextString;
@property (readonly, nonatomic) NSUInteger dynamicTextType;
@property (retain, nonatomic) JFXFaceTrackedEffectTransform *faceTrackingTransform;
@property (nonatomic, getter=isTailFlipped) BOOL flipTail;
@property (nonatomic, getter=isTextFlipped) BOOL flipText;
@property (readonly, nonatomic) BOOL hasBackground;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain) JFXFaceTrackedEffectTransform *internalFaceTrackingTransform; // ivar: _internalFaceTrackingTransform
@property (readonly, nonatomic) BOOL isCurrentlyTracking;
@property (readonly, nonatomic) BOOL isEditingFaceTrackingTransforms;
@property (readonly, nonatomic) BOOL isEmoji;
@property (readonly, nonatomic) BOOL isInteractiveEditing;
@property (readonly, nonatomic) BOOL isTracked;
@property (nonatomic) BOOL prefersTrackingNotActivateAutomatically; // ivar: _prefersTrackingNotActivateAutomatically
@property (retain, nonatomic) JFXTrackedEffectProperties *trackingProps; // ivar: _trackingProps


+(BOOL)supportsSecureCoding;
+(id)dynamicTextPlaceholderMap;
+(id)effectIDToImageSequenceIDMap;
-(?)newPathsForHitTestingAtTime:(?)arg0 forcePosterFrame:(?)arg1 relativeTo:(?)arg2 basisOrigin:(?)arg3 adjustForMinimumSize:(?)arg4 normalizedMinimumSizeoutExpandedPath;
-(BOOL)JFX_hasPosterFrame;
-(BOOL)JFX_posterFrameIsCachable;
-(BOOL)JFX_shouldEnableDynamicLineSpacingForDiacritics;
-(BOOL)enablePresentationState:(BOOL)arg0 ;
-(BOOL)hasDynamicText;
-(BOOL)hitTestPoint:(struct CGPoint )arg0 atTime:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 relativeTo:(struct CGRect )arg3 basisOrigin:(int)arg4 adjustForMinimumSize:(BOOL)arg5 normalizedMinimumSize:(struct ? )arg6 ;
-(BOOL)includeDropShadowWhenPositioningCloseButton;
-(BOOL)isAppearanceEqual:(id)arg0 forPurpose:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loopedRangeRenderIsCacheable;
-(BOOL)objectBounds:(struct CGRect *)arg0 time:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(BOOL)supportsFlippingTail;
-(BOOL)supportsFlippingText;
-(BOOL)wasDynamicTextSet;
-(CGFloat)JFX_adjustedMinimumSizeFromNormalizedMinimumSize:(struct ? )arg0 atTime:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 relativeTo:(struct CGRect )arg3 basisOrigin:(int)arg4 ;
-(CGFloat)customPickerRotation;
-(CGFloat)pickerScale;
-(NSInteger)rotatedAspectRatio;
-(NSUInteger)hash;
-(NSUInteger)maxCharacters;
-(id)JFX_dynamicTextPlaceHolderText;
-(id)JFX_stringAtIndex:(NSUInteger)arg0 ;
-(id)accessibilityName;
-(id)contentProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customPrimaryFillColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffectID:(id)arg0 ;
-(id)osfaToneMappingOption;
-(id)overlayContentDataSource;
-(id)serializableEffectParameters;
-(int)type;
-(struct ? )transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 includePlayableAspectScale:(BOOL)arg3 relativeTo:(struct CGRect )arg4 basisOrigin:(int)arg5 ;
-(struct ? )transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(struct CGAffineTransform )addTransform:(struct CGAffineTransform )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(struct CGAffineTransform )addTransform:(struct CGAffineTransform )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 restrictToBounds:(BOOL)arg4 ;
-(struct CGPoint )closeButtonInset;
-(struct CGPoint )effectCenterAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 includePlayableAspectScale:(BOOL)arg3 relativeTo:(struct CGRect )arg4 basisOrigin:(int)arg5 ;
-(struct CGPoint )effectPointToScreenPoint:(struct CGPoint )arg0 effectToScreenTransform:(struct ? )arg1 viewSize:(struct CGSize )arg2 ;
-(struct CGPoint )hitAreaScale;
-(struct CGPoint )screenPointToEffectPoint:(struct CGPoint )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(struct CGRect )hitAreaBoundingFrameAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 adjustForMinimumSize:(BOOL)arg3 normalizedMinimumSize:(struct ? )arg4 relativeTo:(struct CGRect )arg5 basisOrigin:(int)arg6 ;
-(struct CGRect )imageFrameAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 relativeTo:(struct CGRect )arg3 basisOrigin:(int)arg4 ;
-(struct PVCGPointQuad )cornersAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 relativeTo:(struct CGRect )arg4 basisOrigin:(int)arg5 ;
-(void)JFX_applyEffectParametersForFaceTrackingTransform:(id)arg0 ;
-(void)JFX_setupTrackingProps;
-(void)JFX_updateInteractiveMode;
-(void)applyScaleToFitFrame:(struct CGRect )arg0 withComponentTime:(struct ? )arg1 relativeRect:(struct CGRect )arg2 ;
-(void)applyScaleToFitFrame:(struct CGRect )arg0 withComponentTime:(struct ? )arg1 relativeRect:(struct CGRect )arg2 restrictToBounds:(BOOL)arg3 ;
-(void)beginEditingFaceTrackingTransforms;
-(void)beginInteractiveEditing;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endEditingFaceTrackingTransforms;
-(void)endInteractiveEditing;
-(void)renderEffectWillLoad;
-(void)resumeTracking;
-(void)rotate:(CGFloat)arg0 aroundPoint:(struct CGPoint )arg1 withComponentTime:(struct ? )arg2 relativeTo:(struct CGRect )arg3 basisOrigin:(int)arg4 ;
-(void)setForceRenderAtPosterFrame:(BOOL)arg0 ;
-(void)setImageSequencePath:(id)arg0 ;
-(void)setImageSequencePathToBundledAssets;
-(void)setPosition:(struct CGPoint )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 restrictToBounds:(BOOL)arg4 ;
-(void)setSingleLineScaleThreshold:(CGFloat)arg0 ;
-(void)suspendTracking;
-(void)trackedEffectProperties:(id)arg0 didChangeTrackingType:(BOOL)arg1 didChangeEnabled:(BOOL)arg2 ;
-(void)updateDynamicTextWithCompletionBlock:(id)arg0 ;
-(void)updateRenderSizeMaintainingAppearance:(struct CGSize )arg0 withComponentTime:(struct ? )arg1 ;
-(void)updateRenderSizeMaintainingRelativeSizeAndPosition:(struct CGSize )arg0 toSize:(struct CGSize )arg1 withComponentTime:(struct ? )arg2 ;
-(void)updateRenderSizeMaintainingSizeAndPositionRelativeToMedia:(struct CGSize )arg0 mediaSize:(struct CGSize )arg1 mediaContentMode:(int)arg2 ;


@end


#endif