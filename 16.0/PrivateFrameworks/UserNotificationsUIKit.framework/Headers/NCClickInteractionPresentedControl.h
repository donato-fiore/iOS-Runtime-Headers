// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCCLICKINTERACTIONPRESENTEDCONTROL_H
#define NCCLICKINTERACTIONPRESENTEDCONTROL_H

@class UIControl, MTMaterialView, NSString, UITraitCollection;
@protocol PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate;


#import "NCClickInteractionPresentedView.h"

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // ivar: _backgroundMaterialView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_materialRecipe) NSInteger materialRecipe; // ivar: _materialRecipe
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection; // ivar: _overrideTraitCollection
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic, getter=_presentedView) NCClickInteractionPresentedView *presentedView; // ivar: _presentedView
@property (readonly) Class superclass;
@property (copy, nonatomic, getter=_title, setter=_setTitle:) NSString *title;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_newMaterialViewWithRecipe:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 materialRecipe:(NSInteger)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureContentViewIfNecessaryWithTitle:(id)arg0 ;
-(void)_configureMaterialViewsIfNecessary;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif