// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPILLCONTROL_H
#define PLPILLCONTROL_H

@class UIControl, NSArray, NSString, UIView;
@protocol UIPointerInteractionDelegate, PLPill, PLContentSizeCategoryAdjusting;


#import "PLPillContentView.h"
#import "PLPillContentItem.h"

@interface PLPillControl : UIControl <UIPointerInteractionDelegate, PLPill, PLContentSizeCategoryAdjusting>

 {
    PLPillContentView *_contentView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) NSArray *centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingAccessoryView;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)init;
-(id)initWithLeadingAccessoryView:(id)arg0 ;
-(id)initWithLeadingAccessoryView:(id)arg0 trailingAccessoryView:(id)arg1 ;
-(id)initWithTrailingAccessoryView:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFitsContentItem:(id)arg0 ;
-(void)_configureShadowNecessary;
-(void)_performHighlight:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif