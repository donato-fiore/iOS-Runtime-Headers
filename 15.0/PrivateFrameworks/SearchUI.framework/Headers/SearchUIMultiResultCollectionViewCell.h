// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIMULTIRESULTCOLLECTIONVIEWCELL_H
#define SEARCHUIMULTIRESULTCOLLECTIONVIEWCELL_H

@class TLKAuxilliaryTextView;


#import "SearchUICollectionViewCell.h"
#import "SearchUIMultiResultCollectionView.h"

@interface SearchUIMultiResultCollectionViewCell : SearchUICollectionViewCell

@property (retain) TLKAuxilliaryTextView *folderLabelView; // ivar: _folderLabelView
@property (retain) SearchUIMultiResultCollectionView *multiCollectionView; // ivar: _multiCollectionView


-(BOOL)isExpandable;
-(BOOL)needsInternalFocus;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForForcedFocus;
-(id)visibleResults;
-(struct CGSize )sizeCollectionViewWithSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeManualFocus;
-(void)returnKeyPressed;
-(void)setDelegate:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupManualFocus;
-(void)updateExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif