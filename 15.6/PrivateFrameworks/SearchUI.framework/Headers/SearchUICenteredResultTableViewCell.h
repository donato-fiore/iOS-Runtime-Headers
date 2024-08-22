// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICENTEREDRESULTTABLEVIEWCELL_H
#define SEARCHUICENTEREDRESULTTABLEVIEWCELL_H

@class TLKHeaderView;


#import "SearchUITableViewCell.h"

@interface SearchUICenteredResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) TLKHeaderView *sizingContainer;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif