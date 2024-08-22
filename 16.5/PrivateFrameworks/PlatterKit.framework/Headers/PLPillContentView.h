// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPILLCONTENTVIEW_H
#define PLPILLCONTENTVIEW_H

@class UIView, UIStackView, NSMapTable, NSArray, NSString;
@protocol PLPillPrivate, PLContentSizeCategoryAdjusting;


#import "PLPillContentItem.h"

@interface PLPillContentView : UIView <PLPillPrivate, PLContentSizeCategoryAdjusting>

 {
    UIStackView *_centerStackView;
    UIView *_referenceContentItemView;
    NSMapTable *_wrapperViewsToConstraints;
    NSMapTable *_accessoryViewsToConstraints;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSArray *centerContentItems; // ivar: _centerContentItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *leadingAccessoryView; // ivar: _leadingAccessoryView
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize; // ivar: _referenceContentItemForIntrinsicContentSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingAccessoryView; // ivar: _trailingAccessoryView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_isAccessoryPinnedToTopLine;
-(BOOL)_isWrappingRequiredForCenterContentItemView:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)isWrappingRequiredForCenterContentItem:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(CGFloat)_capInsetForAccessoryView:(id)arg0 ;
-(CGFloat)_capWidthWithAccessoryView:(id)arg0 ;
-(id)_arrangedSubviewForContentItem:(id)arg0 ;
-(id)_referenceContentItemView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithLeadingAccessoryView:(id)arg0 ;
-(id)initWithLeadingAccessoryView:(id)arg0 trailingAccessoryView:(id)arg1 ;
-(id)initWithTrailingAccessoryView:(id)arg0 ;
-(struct CGSize )_intrinsicContentSizeWithReferenceView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFitsContentItem:(id)arg0 ;
-(void)_cleanupStackView;
-(void)_configureCenterStackViewIfNecessary;
-(void)_incomingTopWrapperView:(*id)arg0 incomingBottomWrapperView:(*id)arg1 outgoingWrapperViews:(id)arg2 forOutgoingContentItems:(id)arg3 incomingContentItems:(id)arg4 existingWrapperViews:(id)arg5 ;
-(void)_invalidateVerticalCenterConstraintsForAccessoryView:(id)arg0 ;
-(void)_updateConstraintsForAccessoryView:(id)arg0 ;
-(void)_updateConstraintsForWrapperView:(id)arg0 ;
-(void)updateCenterContentItem:(id)arg0 withContentItem:(id)arg1 ;
-(void)updateConstraints;


@end


#endif