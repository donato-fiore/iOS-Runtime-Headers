// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMATERIALSHADOWVIEW_H
#define MTMATERIALSHADOWVIEW_H

@class UIView, NSString, UIColor;
@protocol MTMaterialViewObserving;


#import "MTMaterialView.h"

@interface MTMaterialShadowView : UIView <MTMaterialViewObserving>

 {
    UIView *_shadowView;
    MTMaterialView *_captureOnlyMaterialView;
}


@property (nonatomic, getter=isCaptureOnlyMaterialViewSuppliedByClient) BOOL captureOnlyMaterialViewSuppliedByClient; // ivar: _captureOnlyMaterialViewSuppliedByClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) BOOL shadowPathIsBounds;
@property (nonatomic) CGFloat shadowRadius;
@property (readonly) Class superclass;


+(id)materialShadowViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 ;
+(id)materialShadowViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 ;
+(id)materialShadowViewWithRecipe:(NSInteger)arg0 configuration:(NSInteger)arg1 initialWeighting:(CGFloat)arg2 scaleAdjustment:(id)arg3 ;
+(id)materialShadowViewWithRecipeNamed:(id)arg0 inBundle:(id)arg1 configuration:(NSInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
+(id)materialShadowViewWithRecipeNamesByTraitCollection:(id)arg0 inBundle:(id)arg1 configuration:(NSInteger)arg2 initialWeighting:(CGFloat)arg3 scaleAdjustment:(id)arg4 ;
-(id)initWithMaterialView:(id)arg0 ;
-(void)_configureCaptureOnlyMaterialViewIfNecessary;
-(void)_configureShadowViewIfNecessary;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)groupNameDidChangeForMaterialView:(id)arg0 ;
-(void)layoutSubviews;
-(void)recipeNameDidChangeForMaterialView:(id)arg0 ;
-(void)weightingDidChangeForMaterialView:(id)arg0 ;


@end


#endif