// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPLATTERVIEW_H
#define PLPLATTERVIEW_H

@class UIView, MTShadowView, NSMutableDictionary, NSDictionary, NSBundle, MTMaterialShadowView, MTMaterialView, NSString, NSArray;
@protocol PLPlatterInternal, PLPlatter, MTVisualStylingProviding, MTVisualStylingRequiring, MTMaterialGrouping;



@interface PLPlatterView : UIView <PLPlatterInternal, PLPlatter, MTVisualStylingProviding, MTVisualStylingRequiring, MTMaterialGrouping>

 {
    MTShadowView *_shadowView;
    BOOL _recipeDynamic;
    NSMutableDictionary *_categoriesToProviders;
    NSDictionary *_recipeNamesByTraitCollection;
    NSBundle *_recipeBundle;
}


@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // ivar: _backgroundBlurred
@property (readonly, nonatomic) MTMaterialShadowView *backgroundMaterialShadowView;
@property (readonly, nonatomic) MTMaterialView *backgroundMaterialView;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasShadow;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (nonatomic, getter=isRecipeDynamic) BOOL recipeDynamic;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (nonatomic) ? shadowAttributes; // ivar: _shadowAttributes
@property (readonly, nonatomic) UIEdgeInsets shadowOutsets;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBackgroundView; // ivar: _usesBackgroundView


+(id)platterViewWithBlurEffectStyle:(NSInteger)arg0 ;
+(id)platterViewWithStyle:(id)arg0 ;
+(id)platterViewWithStyle:(id)arg0 inBundle:(id)arg1 ;
-(BOOL)_isMaterialViewSufficientlySpecified;
-(CGFloat)_continuousCornerRadius;
-(id)_initWithBlurEffectStyle:(NSInteger)arg0 ;
-(id)_initWithCarPlayBannerStyle;
-(id)_initWithNavigationBannerStyle;
-(id)_initWithNotificationsBannerStyle;
-(id)_initWithRecipe:(NSInteger)arg0 orRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 ;
-(id)_newCarPlayBannerStrokeView;
-(id)_newDefaultBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(id)initWithRecipeNamesByTraitCollection:(id)arg0 inBundle:(id)arg1 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureBackgroundView:(id)arg0 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureCustomContentView;
-(void)_configureCustomContentViewIfNecessary;
-(void)_configureShadowViewIfNecessary;
-(void)_invalidateShadowView;
-(void)_layoutShadowView;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_willRemoveCustomContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif