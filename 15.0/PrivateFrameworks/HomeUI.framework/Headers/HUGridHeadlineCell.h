// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDHEADLINECELL_H
#define HUGRIDHEADLINECELL_H

@class UICollectionViewCell, NSString, UIView, UIImageView, NSArray, UILabel, HFItem;
@protocol HUGridCellProtocol, HUResizableCellDelegate;


#import "HUGridCellBackgroundView.h"
#import "HUGridHeadlineCellLayoutOptions.h"

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol>



@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // ivar: _cellContentsHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (retain, nonatomic) UIView *editingBackgroundContainerView; // ivar: _editingBackgroundContainerView
@property (retain, nonatomic) UIView *editingBackgroundDarkeningView; // ivar: _editingBackgroundDarkeningView
@property (retain, nonatomic) HUGridCellBackgroundView *editingBackgroundView; // ivar: _editingBackgroundView
@property (retain, nonatomic) UIImageView *editingChevronImageView; // ivar: _editingChevronImageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *headlineCellConstraints; // ivar: _headlineCellConstraints
@property (retain, nonatomic) UILabel *headlineLabel; // ivar: _headlineLabel
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HUGridHeadlineCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) CGFloat pointerRegionMargin;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect unpaddedContentFrame;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_setupCommonCellAppearance;
-(void)_updateHeadlineLabel;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif