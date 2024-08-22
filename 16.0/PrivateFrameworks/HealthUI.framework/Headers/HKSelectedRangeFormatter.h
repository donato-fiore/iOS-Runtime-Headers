// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSELECTEDRANGEFORMATTER_H
#define HKSELECTEDRANGEFORMATTER_H

@class UIFont;
@protocol HKInteractiveChartRangeProvider;

#import <Foundation/Foundation.h>

#import "HKUnitPreferenceController.h"

@interface HKSelectedRangeFormatter : NSObject

@property (retain, nonatomic) NSObject<HKInteractiveChartRangeProvider> *chartRangeProvider; // ivar: _chartRangeProvider
@property (retain, nonatomic) UIFont *majorFont; // ivar: _majorFont
@property (retain, nonatomic) UIFont *minorFont; // ivar: _minorFont
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(id)_formatterForDisplayType:(id)arg0 timeScope:(NSInteger)arg1 majorFont:(id)arg2 minorFont:(id)arg3 ;
-(id)_handwashingStatFormatterItemOptionsForTimePeriodTimeScope:(NSInteger)arg0 ;
-(id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg0 timeScope:(NSInteger)arg1 context:(NSInteger)arg2 ;
-(id)initWithUnitPreferenceController:(id)arg0 ;
-(id)selectedRangeDataWithCoordinateInfo:(id)arg0 majorFont:(id)arg1 minorFont:(id)arg2 displayType:(id)arg3 timeScope:(NSInteger)arg4 context:(NSInteger)arg5 ;
-(id)selectedRangeDataWithCoordinates:(id)arg0 majorFont:(id)arg1 minorFont:(id)arg2 displayType:(id)arg3 timeScope:(NSInteger)arg4 context:(NSInteger)arg5 ;
-(id)selectedRangeDataWithGraphView:(id)arg0 majorFont:(id)arg1 minorFont:(id)arg2 displayType:(id)arg3 timeScope:(NSInteger)arg4 context:(NSInteger)arg5 ;
-(void)configureWithChartRangeProvider:(id)arg0 ;


@end


#endif