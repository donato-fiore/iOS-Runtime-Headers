// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUIIMAGEROWCELL_H
#define CPUIIMAGEROWCELL_H

@class CPUIBaseTableCell, UIActivityIndicatorView, NSArray, UIImageView, UIImage, NSMutableArray, UIStackView, NSLayoutConstraint;


#import "CPUIHighlightButton.h"

@interface CPUIImageRowCell : CPUIBaseTableCell

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (copy, nonatomic) NSArray *artworkCatalogs; // ivar: _artworkCatalogs
@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (retain, nonatomic) UIImage *fallbackImage; // ivar: _fallbackImage
@property (retain, nonatomic) CPUIHighlightButton *focusIndicator; // ivar: _focusIndicator
@property (retain, nonatomic) NSMutableArray *reusableMediaViews; // ivar: _reusableMediaViews
@property (copy, nonatomic) id *selectGridItemBlock; // ivar: _selectGridItemBlock
@property (copy, nonatomic) id *selectTitleBlock; // ivar: _selectTitleBlock
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint; // ivar: _stackViewWidthConstraint


+(CGFloat)minimumHeight;
+(CGFloat)rowHeight;
-(BOOL)canBecomeFocused;
-(NSInteger)artworkViewCountThatFits:(struct CGSize )arg0 ;
-(void)_layoutArtworkImages;
-(void)_updateTintColors;
-(void)applyConfiguration:(id)arg0 ;
-(void)configureCell;
-(void)coreCellItemTapped:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)gridCellItemTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg0 ;


@end


#endif