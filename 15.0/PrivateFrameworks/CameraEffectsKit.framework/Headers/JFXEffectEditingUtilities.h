// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTEDITINGUTILITIES_H
#define JFXEFFECTEDITINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface JFXEffectEditingUtilities : NSObject



+(BOOL)canEditTextForEffect:(id)arg0 ;
+(BOOL)isFaceTrackingDataAvailable;
+(BOOL)isStreamingMode;
+(BOOL)makeOverlayTrackedMaintainingAppearance:(id)arg0 atTime:(struct ? )arg1 newTrackingType:(NSInteger)arg2 arMetadata:(id)arg3 playableInterfaceOrientation:(NSInteger)arg4 ;
+(BOOL)shouldAutoEditTextForEffect:(id)arg0 ;
+(BOOL)shouldDisableTextOutlineWhileEditingTextForEffectID:(id)arg0 ;
+(BOOL)shouldRenderTextWithMotionWhileEditingTextForEffectID:(id)arg0 ;
+(BOOL)shouldUseFullTransformWhileEditingTextForEffectID:(id)arg0 ;
+(NSInteger)trackingTypeForOverlayPointIntersectionWithFaceRect:(struct CGPoint )arg0 atTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 defaultTrackingType:(NSInteger)arg3 faceAnchor:(id)arg4 transformAnimation:(id)arg5 playableMediaContentMode:(int)arg6 playableInterfaceOrientation:(NSInteger)arg7 playableAspectRatio:(NSInteger)arg8 playableAspectRatioPreservationMode:(NSInteger)arg9 ;
+(NSUInteger)JFX_bestTrackedInsertionPointIndexForOverlay:(id)arg0 atTime:(struct ? )arg1 insertionPoints:(id)arg2 startingIndex:(NSUInteger)arg3 visibilityThreshold:(CGFloat)arg4 scaleRelativeToCenterSquare:(CGFloat)arg5 withARMetadata:(id)arg6 transformAnimation:(id)arg7 playableMediaContentMode:(int)arg8 playableInterfaceOrientation:(NSInteger)arg9 ;
+(NSUInteger)insertionPointIndex;
+(NSUInteger)maximumTextLengthForEffect:(id)arg0 ;
+(NSUInteger)nextInsertionPointIndex;
+(id)JFX_hitTestOverlays:(id)arg0 atNormalizedPoint:(struct CGPoint )arg1 atTime:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 adjustForMinimumSize:(BOOL)arg4 normalizedMinimumSize:(struct ? )arg5 ;
+(id)hitTestOverlays:(id)arg0 atPoint:(struct CGPoint )arg1 relativeToBounds:(struct CGRect )arg2 atTime:(struct ? )arg3 adjustForMinimumSize:(BOOL)arg4 normalizedMinimumSize:(struct ? )arg5 ;
+(id)hitTestOverlaysAtPosterFrame:(id)arg0 atNormalizedPoint:(struct CGPoint )arg1 atTime:(struct ? )arg2 adjustForMinimumSize:(BOOL)arg3 normalizedMinimumSize:(struct ? )arg4 ;
+(id)hitTestOverlaysAtPosterFrame:(id)arg0 atPoint:(struct CGPoint )arg1 relativeToBounds:(struct CGRect )arg2 atTime:(struct ? )arg3 adjustForMinimumSize:(BOOL)arg4 normalizedMinimumSize:(struct ? )arg5 ;
+(id)newTextEditingPropertiesForEffect:(id)arg0 relativeTo:(struct CGRect )arg1 atTime:(struct ? )arg2 withNewText:(id)arg3 ;
+(id)newTextEditingPropertiesForEffect:(id)arg0 relativeTo:(struct CGRect )arg1 atTime:(struct ? )arg2 withNewText:(id)arg3 moveBeforeScalingToAvoidKeyboard:(BOOL)arg4 ;
+(id)normalizedInsertionPoints;
+(id)textForEffect:(id)arg0 ;
+(id)trackedNormalizedInsertionPoints;
+(struct CGPoint )JFX_closeButtonInsetForEffect:(id)arg0 viewBounds:(struct CGRect )arg1 ;
+(struct CGPoint )JFX_convertPoint:(struct CGPoint )arg0 fromSize:(struct CGSize )arg1 toSize:(struct CGSize )arg2 invertY:(BOOL)arg3 ;
+(struct CGPoint )nextNormalizedInsertionPointForOverlay:(id)arg0 scaleRelativeToCenterSquare:(CGFloat)arg1 atTime:(struct ? )arg2 applyTracking:(BOOL)arg3 withARMetadata:(id)arg4 transformAnimation:(id)arg5 playableMediaContentMode:(int)arg6 playableInterfaceOrientation:(NSInteger)arg7 ;
+(struct CGPoint )removeButtonPositionForEffect:(id)arg0 atTime:(struct ? )arg1 atPosterFrameRelativeToBounds:(struct CGRect )arg2 viewCorrectionTransform:(struct CGAffineTransform )arg3 ;
+(struct CGPoint )spacingBetweenCenterPointOfEffect:(id)arg0 point:(struct CGPoint )arg1 relativeToBounds:(struct CGRect )arg2 atTime:(struct ? )arg3 ;
+(struct CGRect )JFX_compositionBounds;
+(struct CGRect )JFX_currentFaceRectRelativeToBounds:(struct CGRect )arg0 atTime:(struct ? )arg1 faceAnchor:(id)arg2 transformAnimation:(id)arg3 playableMediaContentMode:(int)arg4 playableInterfaceOrientation:(NSInteger)arg5 playableAspectRatio:(NSInteger)arg6 playableAspectRatioPreservationMode:(NSInteger)arg7 ;
+(struct CGRect )JFX_rectAtNormalizedPointinCenteredSquareInFaceRect:(struct CGPoint )arg0 faceAnchor:(id)arg1 atTime:(struct ? )arg2 scaleRelativeToCenterSquare:(CGFloat)arg3 relativeToBounds:(struct CGRect )arg4 transformAnimation:(id)arg5 playableMediaContentMode:(int)arg6 playableInterfaceOrientation:(NSInteger)arg7 playableAspectRatio:(NSInteger)arg8 playableAspectRatioPreservationMode:(NSInteger)arg9 ;
+(struct CGRect )currentFaceRectRelativeToBounds:(struct CGRect )arg0 atTime:(struct ? )arg1 transformAnimation:(id)arg2 playableMediaContentMode:(int)arg3 playableInterfaceOrientation:(NSInteger)arg4 playableAspectRatio:(NSInteger)arg5 playableAspectRatioPreservationMode:(NSInteger)arg6 ;
+(void)JFX_ApplyTextFlipIfNeeded:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
+(void)JFX_setTextRenderingEnabledForEffect:(id)arg0 value:(BOOL)arg1 ;
+(void)addTransformToEffect:(id)arg0 transform:(struct CGAffineTransform )arg1 relativeToBounds:(struct CGRect )arg2 time:(struct ? )arg3 restrictToBounds:(BOOL)arg4 ;
+(void)applyCameraTrackingTransformToOverlay:(id)arg0 withARMetadata:(id)arg1 playableInterfaceOrientation:(NSInteger)arg2 ;
+(void)beginTextEditingForEffect:(id)arg0 ;
+(void)configureOverlayForInsertion:(id)arg0 atNormalizedPoint:(struct CGPoint )arg1 atTime:(struct ? )arg2 isPositionRelativeToCenterSquare:(BOOL)arg3 isPositionRelativeToFace:(BOOL)arg4 scaleRelativeToCenterSquare:(CGFloat)arg5 rotationAngle:(CGFloat)arg6 applyTracking:(BOOL)arg7 autoDetectTrackingType:(BOOL)arg8 withARMetadata:(id)arg9 previewViewCorrectionTransform:(struct CGAffineTransform )arg10 transformAnimation:(id)arg11 playableMediaContentMode:(int)arg12 playableInterfaceOrientation:(NSInteger)arg13 playableAspectRatio:(NSInteger)arg14 playableAspectRatioPreservationMode:(NSInteger)arg15 ;
+(void)configureOverlayForInsertion:(id)arg0 inRect:(struct CGRect )arg1 atTime:(struct ? )arg2 rotationAngle:(CGFloat)arg3 applyTracking:(BOOL)arg4 autoDetectTrackingType:(BOOL)arg5 withARMetadata:(id)arg6 previewViewCorrectionTransform:(struct CGAffineTransform )arg7 transformAnimation:(id)arg8 playableMediaContentMode:(int)arg9 playableInterfaceOrientation:(NSInteger)arg10 playableAspectRatio:(NSInteger)arg11 playableAspectRatioPreservationMode:(NSInteger)arg12 ;
+(void)disableAnimationForEffects:(id)arg0 ;
+(void)enableAnimationForEffects:(id)arg0 animationStartTime:(struct ? )arg1 ;
+(void)endTextEditingForEffect:(id)arg0 ;
+(void)setInsertionPointIndex:(NSUInteger)arg0 ;
+(void)setStreamingMode:(BOOL)arg0 ;
+(void)suspendOverlayTrackingMaintainingAppearance:(id)arg0 forViewBounds:(struct CGRect )arg1 atTime:(struct ? )arg2 arMetadata:(id)arg3 playableInterfaceOrientation:(NSInteger)arg4 ;
+(void)updateEffectText:(id)arg0 newText:(id)arg1 ;
+(void)updateEffectToDefaultTextIfEmpty:(id)arg0 ;


@end


#endif