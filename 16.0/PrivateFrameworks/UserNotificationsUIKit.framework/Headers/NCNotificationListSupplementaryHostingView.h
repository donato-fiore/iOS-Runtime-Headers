// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEW_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEW_H

@class UIView, NSArray, NSString, UIColor, PLPlatterView;
@protocol NCAuxiliaryOptionsSupporting, MTMaterialGrouping, PLContentSizeCategoryAdjusting, NCNotificationListSupplementaryHostingViewDelegate;


#import "NCDimmableView.h"
#import "NCAuxiliaryOptionsView.h"

@interface NCNotificationListSupplementaryHostingView : NCDimmableView <NCAuxiliaryOptionsSupporting, MTMaterialGrouping, PLContentSizeCategoryAdjusting>

 {
    UIView *_backgroundTintView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSArray *auxiliaryOptionActions; // ivar: _auxiliaryOptionActions
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText; // ivar: _auxiliaryOptionsSummaryText
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor; // ivar: _auxiliaryOptionsTextColor
@property (copy, nonatomic) UIColor *auxiliaryOptionsTintColor; // ivar: _auxiliaryOptionsTintColor
@property (readonly, nonatomic) NCAuxiliaryOptionsView *auxiliaryOptionsView; // ivar: _auxiliaryOptionsView
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (retain, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (readonly, nonatomic, getter=hasContentForAuxiliaryOptions) BOOL contentForAuxiliaryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListSupplementaryHostingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView
@property (nonatomic, getter=isHostedViewUserInteractionEnabled) BOOL hostedViewUserInteractionEnabled;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (readonly, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureAuxiliaryOptionsViewIfNecessary;
-(void)_configureBackgroundTintViewIfNecessary;
-(void)_configurePlatterViewIfNecessary;
-(void)_layoutAuxiliaryOptionsView;
-(void)_layoutHostedView;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif