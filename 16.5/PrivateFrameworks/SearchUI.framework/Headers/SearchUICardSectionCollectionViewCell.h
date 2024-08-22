// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICARDSECTIONCOLLECTIONVIEWCELL_H
#define SEARCHUICARDSECTIONCOLLECTIONVIEWCELL_H

@class NUIContainerBoxView;


#import "SearchUICollectionViewCell.h"
#import "SearchUICardSectionView.h"

@interface SearchUICardSectionCollectionViewCell : SearchUICollectionViewCell

@property (retain) NUIContainerBoxView *boxView; // ivar: _boxView
@property (retain) SearchUICardSectionView *cardSectionView; // ivar: _cardSectionView


-(id)embeddedViewController;
-(id)leadingTextView;
-(id)leadingView;
-(id)sizingView;
-(void)setDelegate:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateRoundedCornersForView:(id)arg0 cornerMask:(NSUInteger)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif