// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOMBINEDCARDSECTIONTABLECELL_H
#define SEARCHUICOMBINEDCARDSECTIONTABLECELL_H



#import "SearchUITableViewCell.h"
#import "SearchUICombinedCardSectionsView.h"

@interface SearchUICombinedCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICombinedCardSectionsView *sizingContainer;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif