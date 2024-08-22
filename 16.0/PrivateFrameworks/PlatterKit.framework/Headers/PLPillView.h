// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPILLVIEW_H
#define PLPILLVIEW_H

@class UIView, MTMaterialView, MTShadowView, NSArray, NSString;
@protocol PLPill, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingProviding;


#import "PLPillContentView.h"
#import "PLPillContentItem.h"

@interface PLPillView : UIView <PLPill, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingProviding>

 {
    MTMaterialView *_materialView;
    MTShadowView *_shadowView;
    PLPillContentView *_contentView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSArray *centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (readonly, nonatomic) UIEdgeInsets shadowOutsets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingAccessoryView;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_effectiveCornerRadius;
-(id)init;
-(id)initWithLeadingAccessoryView:(id)arg0 ;
-(id)initWithLeadingAccessoryView:(id)arg0 trailingAccessoryView:(id)arg1 ;
-(id)initWithTrailingAccessoryView:(id)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFitsContentItem:(id)arg0 ;
-(void)_configureShadowViewIfNecessary;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCenterContentItem:(id)arg0 withContentItem:(id)arg1 ;


@end


#endif