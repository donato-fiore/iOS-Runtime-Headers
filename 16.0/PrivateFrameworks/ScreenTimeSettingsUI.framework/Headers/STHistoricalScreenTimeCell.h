// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STHISTORICALSCREENTIMECELL_H
#define STHISTORICALSCREENTIMECELL_H



#import "STTableCell.h"
#import "STHistoricalUsageViewController.h"
#import "STHorizontallySegmentedView.h"

@interface STHistoricalScreenTimeCell : STTableCell

@property (readonly) STHistoricalUsageViewController *historicalUsageViewController; // ivar: _historicalUsageViewController
@property (readonly) STHorizontallySegmentedView *topItemsView; // ivar: _topItemsView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)value;
-(void)_currentViewModeDidChangeFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)_handleEffectiveChangeForViewMode:(NSInteger)arg0 hasMultilineLayout:(BOOL)arg1 numberOfLines:(NSUInteger)arg2 ;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_numberOfLinesDidChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setValue:(id)arg0 ;


@end


#endif