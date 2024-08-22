// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTSTATICVISUALSTYLINGMATERIALVIEW_H
#define _MTSTATICVISUALSTYLINGMATERIALVIEW_H

@class NSString, NSMutableDictionary, MTCoreMaterialVisualStylingProvider, NSArray;
@protocol MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring;


#import "MTMaterialView.h"

@interface _MTStaticVisualStylingMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving, MTVisualStylingRequiring>

 {
    NSString *_recipeName;
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


+(Class)layerClass;
-(BOOL)ignoresScreenClip;
-(BOOL)isBlurEnabled;
-(BOOL)isCaptureOnly;
-(BOOL)isContentReplacedWithSnapshot;
-(BOOL)isZoomEnabled;
-(BOOL)shouldCrossfade;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg0 ;
-(id)_initWithCoreMaterialRecipe:(id)arg0 fromBundle:(id)arg1 options:(NSUInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
-(id)_materialLayer;
-(id)backdropScaleAdjustment:(SEL)arg0 ;
-(id)recipeName;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_invalidateContentVisualStyling;
-(void)_setCoreMaterialVisualStylingProvider:(id)arg0 ForCategory:(id)arg1 ;
-(void)_updateContentVisualStylingIfNecessary;
-(void)_updateContentVisualStylingWithProvider:(id)arg0 ;
-(void)_updateCoreMaterialVisualStylingProviders;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)setBackdropScaleAdjustment:(id)arg0 ;
-(void)setBlurEnabled:(BOOL)arg0 ;
-(void)setCaptureOnly:(BOOL)arg0 ;
-(void)setContentReplacedWithSnapshot:(BOOL)arg0 ;
-(void)setIgnoresScreenClip:(BOOL)arg0 ;
-(void)setRecipe:(NSInteger)arg0 ;
-(void)setRecipeName:(id)arg0 ;
-(void)setShouldCrossfade:(BOOL)arg0 ;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)arg0 ;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)setZoomEnabled:(BOOL)arg0 ;


@end


#endif