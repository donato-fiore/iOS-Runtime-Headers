// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARCUSTOMIZATIONCHICLET_H
#define _UIBARCUSTOMIZATIONCHICLET_H

@class NSString, NSArray;
@protocol UIPointerInteractionDelegate;


#import "UIView.h"
#import "_UIBarCustomizationChicletAnchorView.h"
#import "UILabel.h"
#import "UIPointerInteraction.h"
#import "_UIBarCustomizationItem.h"

@interface _UIBarCustomizationChiclet : UIView <UIPointerInteractionDelegate>



@property (weak, nonatomic) _UIBarCustomizationChicletAnchorView *anchorView; // ivar: _anchorView
@property (nonatomic) NSInteger chicletSize; // ivar: _chicletSize
@property (retain, nonatomic) UIView *contentWrapperView; // ivar: _contentWrapperView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fixed;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL labelVisible; // ivar: _labelVisible
@property (nonatomic) BOOL minimized; // ivar: _minimized
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (nonatomic) BOOL platterVisible; // ivar: _platterVisible
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, weak, nonatomic) _UIBarCustomizationItem *representedItem; // ivar: _representedItem
@property (retain, nonatomic) UIView *rootItemView; // ivar: _rootItemView
@property (retain, nonatomic) NSArray *subitemViews; // ivar: _subitemViews
@property (readonly) Class superclass;


-(BOOL)_isDisplayingRootItem;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_currentInterItemSpacing;
-(CGFloat)_interItemSpacingForChicletSize:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithItem:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )_contentSizeWithInterItemSpacing:(CGFloat)arg0 ;
-(struct CGSize )_currentContentSize;
-(struct CGSize )fittingSizeWithChicletSize:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addContentView:(id)arg0 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)_updatePlatterShadow;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)updateItemCenterPoints;


@end


#endif