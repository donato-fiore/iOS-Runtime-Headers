// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMATERIALLAYER_H
#define MTMATERIALLAYER_H

@class CABackdropLayer, NSMutableDictionary, NSHashTable, NSString;
@protocol MTRecipeMaterialSettingsProviding;


#import "MTMaterialSettingsInterpolator.h"

@interface MTMaterialLayer : CABackdropLayer {
    MTMaterialSettingsInterpolator *_settingsInterpolator;
    MTMaterialSettingsInterpolator *_previousSettingsInterpolator;
    BOOL _needsConfiguring;
    BOOL _blurEnabled;
    BOOL _zoomEnabled;
    id *_backdropScaleAdjustment;
    BOOL _shouldCrossfade;
    BOOL _contentReplacedWithSnapshot;
    NSMutableDictionary *_pendingChange;
    NSMutableDictionary *_visualStyleCategoriesToProviders;
    NSHashTable *_prunePromises;
    NSInteger _allowsInPlaceFiltering;
    ? _materialLayerDelegateFlags;
}


@property (readonly, nonatomic, getter=_backdropScale) CGFloat backdropScale;
@property (copy, nonatomic) id *backdropScaleAdjustment;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (copy, nonatomic) id *blurRadiusTransformer;
@property (nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot;
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (copy, nonatomic) id *defaultBackdropScaleAdjustment; // ivar: _defaultBackdropScaleAdjustment
@property (readonly, nonatomic, getter=_privateOpacity) CGFloat privateOpacity;
@property (copy, nonatomic) NSString *recipe;
@property (copy, nonatomic) NSString *recipeName;
@property (retain, nonatomic, getter=_recipeSettings, setter=_setRecipeSettings:) NSObject<MTRecipeMaterialSettingsProviding> *recipeSettings;
@property (nonatomic, getter=isReduceMotionEnabled) BOOL reduceMotionEnabled; // ivar: _reduceMotionEnabled
@property (nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled; // ivar: _reduceTransparencyEnabled
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic) CGFloat weighting;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


+(id)_attributeKeys;
+(id)_unserializedAttributeKeys;
+(id)mt_animatableKeys;
+(id)mt_implicitlyAnimatableKeys;
+(void)initialize;
-(BOOL)_delegateManagesWeighting;
-(BOOL)_didValueChangeForKey:(id)arg0 withPendingChange:(id)arg1 ;
-(BOOL)_isDelegateManagingInterpolation;
-(BOOL)_isDelegateManagingOpacity;
-(BOOL)_needsPruning;
-(BOOL)allowsInPlaceFiltering;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)_effectiveDebugIdentifier;
-(id)description;
-(id)init;
-(id)visualStylingProviderForCategory:(id)arg0 ;
-(void)_adjustScaleOfBackdropLayer:(id)arg0 ifNecessaryWithSettingsInterpolator:(id)arg1 ;
-(void)_configureBackdropLayer:(id)arg0 withSettingsInterpolator:(id)arg1 preservingFiltersIfIdentity:(BOOL)arg2 ;
-(void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)arg0 ;
-(void)_configureDelegateFlagsForDelegate:(id)arg0 ;
-(void)_configureIfNecessaryWithSettingsInterpolator:(id)arg0 ;
-(void)_pruneAtCompletionOfCurrentTransaction;
-(void)_reevaluateDefaultShouldCrossfade;
-(void)_setNeedsConfiguring;
-(void)_updateForChangeInRecipeAndConfiguration;
-(void)_updateForChangeInWeighting;
-(void)_updateVisualStylingProviders;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)layoutSublayers;
-(void)prune;
-(void)setAllowsInPlaceFiltering:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setUnsafeUnretainedDelegate:(id)arg0 ;
-(void)willChangeValueForKey:(id)arg0 ;


@end


#endif