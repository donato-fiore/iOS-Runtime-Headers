// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICARDSECTIONTABLECELL_H
#define SEARCHUICARDSECTIONTABLECELL_H



#import "SearchUITableViewCell.h"
#import "SearchUICardSectionView.h"

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (readonly) SearchUICardSectionView *cardSectionView;
@property (retain, nonatomic) SearchUICardSectionView *sizingContainer;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)leadingTextView;
-(id)leadingView;
-(void)setDelegate:(id)arg0 ;
-(void)tabKeyPressed;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif