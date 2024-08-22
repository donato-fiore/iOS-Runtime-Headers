// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOVERALLUSAGESUMMARYCELL_H
#define STOVERALLUSAGESUMMARYCELL_H



#import "STTableCell.h"
#import "STNoUsageDataView.h"
#import "STUsageSummaryTitleView.h"
#import "STUsageGraphViewController.h"

@interface STOverallUsageSummaryCell : STTableCell

@property (readonly) STNoUsageDataView *noUsageDataView; // ivar: _noUsageDataView
@property (readonly) STUsageSummaryTitleView *titleView; // ivar: _titleView
@property (readonly) STUsageGraphViewController *weekGraphViewController; // ivar: _weekGraphViewController


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)value;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setValue:(id)arg0 ;


@end


#endif