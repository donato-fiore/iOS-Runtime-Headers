// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMATERIALVIEW_H
#define MTMATERIALVIEW_H

@class UIView, NSMutableDictionary, NSDictionary, NSBundle, NSHashTable, UIViewFloatAnimatableProperty, NSString, MTMaterialLayer;
@protocol NSCopying, MTVisualStylingProviding;



@interface MTMaterialView : UIView <NSCopying, MTVisualStylingProviding>

 {
    BOOL _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
    BOOL _recipeDynamic;
    BOOL _shadowed;
    NSMutableDictionary *_cmVisualStyleCategoriesToProviders;
    NSDictionary *_recipeNamesByTraitCollection;
    NSBundle *_recipeBundle;
    NSHashTable *_observers;
    UIView *_highlightView;
    BOOL _needsLayoutOnMoveToWindow;
}


@property (retain, nonatomic, getter=_backdropFloatAnimatableProperty) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty; // ivar: _backdropFloatAnimatableProperty
@property (copy, nonatomic) id *backdropScaleAdjustment;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceCrossfadeIfNecessary;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameBase; // ivar: _groupNameBase
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) BOOL ignoresScreenClip;
@property (nonatomic, getter=isInPlaceFilteringEnabled) BOOL inPlaceFilteringEnabled;
@property (readonly, nonatomic, getter=_materialLayer) MTMaterialLayer *materialLayer;
@property (nonatomic) NSInteger recipe; // ivar: _recipe
@property (nonatomic, getter=isRecipeDynamic) BOOL recipeDynamic;
@property (copy, nonatomic) NSString *recipeName;
@property (nonatomic, getter=isShadowed) BOOL shadowed;
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic) BOOL shouldCrossfadeIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic) CGFloat weighting;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


+(BOOL)_isWorkaroundRequiredForRecipe:(NSInteger)arg0 ;
+(Class)layerClass;
+(id)_deprecatedControlCenterMaterialWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 ;
+(id)_recipeNameForTraitCollection:(id)arg0 withRecipeNamesByTraitCollection:(id)arg1 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 initialWeighting:(CGFloat)arg2 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 initialWeighting:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 ;
// +(id)materialViewWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 compatibleWithTraitCollection:(unk)arg4  ;
+(id)materialViewWithRecipeNamed:(id)arg0 ;
+(id)materialViewWithRecipeNamed:(id)arg0 inBundle:(id)arg1 configuration:(NSInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
+(id)materialViewWithRecipeNamed:(id)arg0 inBundle:(id)arg1 options:(NSUInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
+(id)materialViewWithRecipeNamesByTraitCollection:(id)arg0 compatibleWithTraitCollection:(id)arg1 bundle:(id)arg2 configuration:(NSInteger)arg3 initialWeighting:(CGFloat)arg4 scaleAdjustment:(id)arg5 ;
+(id)materialViewWithRecipeNamesByTraitCollection:(id)arg0 inBundle:(id)arg1 configuration:(NSInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
// +(id)materialViewWithRecipeNamesByTraitCollection:(id)arg0 inBundle:(id)arg1 options:(NSUInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 compatibleWithTraitCollection:(unk)arg5  ;
+(id)materialViewWithVisualStyleFromRecipe:(NSInteger)arg0 category:(NSInteger)arg1 style:(NSInteger)arg2 options:(NSUInteger)arg3 initialWeighting:(CGFloat)arg4 compatibleWithTraitCollection:(id)arg5 ;
+(id)newDefaultHighlightAnimator;
+(id)staticMaterialViewWithRecipe:(NSInteger)arg0 ;
+(id)staticMaterialViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 ;
+(void)initialize;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
// -(BOOL)addCompletionForCurrentAnimation:(id)arg0 forMaterialLayer:(unk)arg1 reason:(id)arg2  ;
-(BOOL)isManagingInterpolationForMaterialLayer:(id)arg0 ;
-(BOOL)isManagingOpacityForMaterialLayer:(id)arg0 ;
-(BOOL)managesWeightingForMaterialLayer:(id)arg0 ;
-(NSUInteger)_options;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg0 ;
-(id)_groupNameWithBase:(id)arg0 ;
-(id)_initWithCoreMaterialRecipe:(id)arg0 fromBundle:(id)arg1 options:(NSUInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
// -(id)_initWithRecipe:(NSInteger)arg0 options:(NSUInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 compatibleWithTraitCollection:(unk)arg4  ;
// -(id)_initWithRecipeNamesByTraitCollection:(id)arg0 bundle:(id)arg1 options:(NSUInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 compatibleWithTraitCollection:(unk)arg5  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newShadowView;
-(id)newShadowViewWithCaptureOnlyMaterialView:(BOOL)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_invalidateAlphaTransformer;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_reduceMotionStatusDidChange;
-(void)_reduceTransparencyStatusDidChange;
-(void)_removeObserver:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_setupAlphaTransformer;
-(void)_setupOrInvalidateAlphaTransformer;
-(void)_updateGroupNameIfNecessary;
-(void)_updateRecipeNameIfNeeded;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prune;


@end


#endif