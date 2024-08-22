// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STHISTORICALNOTIFICATIONSCELL_H
#define STHISTORICALNOTIFICATIONSCELL_H



#import "STTableCell.h"
#import "STHistoricalUsageViewController.h"

@interface STHistoricalNotificationsCell : STTableCell

@property (readonly) STHistoricalUsageViewController *historicalUsageViewController; // ivar: _historicalUsageViewController


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)value;
-(void)_currentViewModeDidChangeFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)_handleEffectiveChangeForViewMode:(NSInteger)arg0 hasMultilineLayout:(BOOL)arg1 ;
-(void)_hasMulitlineLayoutDidChangeFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setValue:(id)arg0 ;


@end


#endif