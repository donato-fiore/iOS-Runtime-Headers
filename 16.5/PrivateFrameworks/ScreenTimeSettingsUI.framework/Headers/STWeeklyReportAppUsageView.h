// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STWEEKLYREPORTAPPUSAGEVIEW_H
#define STWEEKLYREPORTAPPUSAGEVIEW_H

@class UIView, UIStackView, NSMutableDictionary, UILabel, NSMutableArray;


#import "STUsageReport.h"

@interface STWeeklyReportAppUsageView : UIView

@property (retain, nonatomic) UIStackView *appImageStackView; // ivar: _appImageStackView
@property (retain, nonatomic) NSMutableDictionary *dimensionByUsageItem; // ivar: _dimensionByUsageItem
@property (retain, nonatomic) STUsageReport *report; // ivar: _report
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSMutableArray *topEightImageItems; // ivar: _topEightImageItems


-(id)_appImageSubviewWithImage:(id)arg0 dimension:(CGFloat)arg1 ;
-(id)initWithUsageReport:(id)arg0 useVibrancy:(BOOL)arg1 ;
-(void)_didFetchIcon:(id)arg0 ;


@end


#endif