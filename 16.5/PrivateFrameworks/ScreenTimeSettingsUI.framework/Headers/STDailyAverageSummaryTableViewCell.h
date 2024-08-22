// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDAILYAVERAGESUMMARYTABLEVIEWCELL_H
#define STDAILYAVERAGESUMMARYTABLEVIEWCELL_H

@class STDailyAverageView;


#import "STTableCell.h"
#import "STUsageSummaryTitleView.h"
#import "STHorizontallySegmentedView.h"
#import "STUsageGraphViewController.h"

@interface STDailyAverageSummaryTableViewCell : STTableCell

@property (readonly) STDailyAverageView *dailyAverageView; // ivar: _dailyAverageView
@property (readonly) STUsageSummaryTitleView *titleView; // ivar: _titleView
@property (readonly) STHorizontallySegmentedView *topItemsView; // ivar: _topItemsView
@property (readonly) STUsageGraphViewController *usageGraphViewController; // ivar: _usageGraphViewController


-(id)initWithUsageReport:(id)arg0 ;
-(void)_layoutDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_numberOfLinesDidChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif