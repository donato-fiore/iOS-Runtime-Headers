// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLUNLOCKHISTORYTABLEVIEWCELL_H
#define SCLUNLOCKHISTORYTABLEVIEWCELL_H

@class PSTableCell;


#import "SCLHistoryItemView.h"

@interface SCLUnlockHistoryTableViewCell : PSTableCell

@property (readonly, nonatomic) SCLHistoryItemView *historyItemView; // ivar: _historyItemView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif