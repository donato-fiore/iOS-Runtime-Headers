// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGCARDSECTIONTABLECELL_H
#define SEARCHUIHORIZONTALLYSCROLLINGCARDSECTIONTABLECELL_H



#import "SearchUITableViewCell.h"
#import "SearchUIHorizontallyScrollingContainerView.h"

@interface SearchUIHorizontallyScrollingCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *sizingContainer;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif