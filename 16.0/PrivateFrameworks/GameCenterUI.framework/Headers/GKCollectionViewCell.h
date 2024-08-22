// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOLLECTIONVIEWCELL_H
#define GKCOLLECTIONVIEWCELL_H

@class NSLayoutConstraint, NSArray, UIView, CALayer;


#import "GKFocusHighlightingCollectionViewCell.h"
#import "GKHairlineView.h"
#import "GKStaticRenderContentView.h"
#import "GKEditActionsView.h"

@interface GKCollectionViewCell : GKFocusHighlightingCollectionViewCell {
    BOOL _shouldDisplaySwipeToEditAccessories;
    CGFloat _contentOriginX;
}


@property (readonly, nonatomic) CGRect alignmentRectForText;
@property (retain, nonatomic) GKHairlineView *bottomHairline; // ivar: _bottomHairline
@property (retain, nonatomic) NSLayoutConstraint *contentLeftConstraint; // ivar: _contentLeftConstraint
@property (retain, nonatomic) GKStaticRenderContentView *contentRenderView; // ivar: _contentRenderView
@property (nonatomic) BOOL doesAbutLeftEdge; // ivar: _doesAbutLeftEdge
@property (retain, nonatomic) NSArray *editActions; // ivar: _editActions
@property (retain, nonatomic) NSArray *editActionsConstraints; // ivar: _editActionsConstraints
@property (readonly, nonatomic) GKEditActionsView *editActionsView; // ivar: _editActionsView
@property (nonatomic) CGFloat editingContentOriginX;
@property (retain, nonatomic) NSArray *hairlineConstraints; // ivar: _hairlineConstraints
@property (readonly, nonatomic) UIView *interactiveContentView;
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (retain, nonatomic) CALayer *leftGradientMask; // ivar: _leftGradientMask
@property (retain, nonatomic) id *representedItem; // ivar: _representedItem
@property (retain, nonatomic) UIView *staticContentView; // ivar: _staticContentView
@property (retain, nonatomic) GKHairlineView *topHairline; // ivar: _topHairline
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin


+(void)registerCellClassesWithCollectionView:(id)arg0 ;
-(BOOL)touchWithinEditActions:(id)arg0 ;
-(BOOL)userInteractionEnabledForEditing;
-(CGFloat)contentViewOriginXWhileEditing;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popoverSourceView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_gkEnumerateSubviewsUsingBlock:(id)arg0 ;
-(void)animateOutSwipeToEditAccessories;
-(void)applyGradientMaskIfNeeded;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)beginEditing;
-(void)closeForDelete;
-(void)didUpdateModel;
-(void)finishEditing;
-(void)layoutSubviews;
-(void)prepareEditActionsConstraintsIfNeeded;
-(void)prepareForReuse;
-(void)prepareHairlineConstraintsIfNeeded;
-(void)resetEditingContentOrigin;
-(void)setNeedsDisplay;
-(void)setShouldDisplaySwipeToEditAccessories:(BOOL)arg0 ;
-(void)setUserInteractionEnabledForEditing:(BOOL)arg0 ;
-(void)shutActionPaneAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateConstraints;


@end


#endif