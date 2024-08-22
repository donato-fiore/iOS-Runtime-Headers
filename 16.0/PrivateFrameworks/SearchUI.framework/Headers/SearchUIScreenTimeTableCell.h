// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISCREENTIMETABLECELL_H
#define SEARCHUISCREENTIMETABLECELL_H



#import "SearchUITableViewCell.h"
#import "SearchUIScreenTimeView.h"

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

@property (retain) SearchUIScreenTimeView *sizingContainer;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)visibleResults;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif