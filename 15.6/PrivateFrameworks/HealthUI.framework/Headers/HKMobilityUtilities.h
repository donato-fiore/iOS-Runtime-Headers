// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMOBILITYUTILITIES_H
#define HKMOBILITYUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKMobilityUtilities : NSObject



+(BOOL)_valueRangeMin:(*CGFloat)arg0 max:(*CGFloat)arg1 forChartData:(id)arg2 ;
+(BOOL)chartDataSpansMultipleClassifications:(id)arg0 ;
+(NSInteger)classificationForAppleWalkingSteadinessQuantity:(id)arg0 ;
+(NSInteger)classificationForAppleWalkingSteadinessValue:(CGFloat)arg0 ;
+(id)_localizedStringForClassification:(NSInteger)arg0 narrow:(BOOL)arg1 ;
+(id)generateAppleWalkingSteadinessDataSourceForTimeScope:(NSInteger)arg0 displayType:(id)arg1 healthStore:(id)arg2 quantityType:(id)arg3 unitController:(id)arg4 ;
+(id)generateAppleWalkingSteadinessSeriesForTimeScope:(NSInteger)arg0 displayType:(id)arg1 color:(id)arg2 ;
+(id)localizedAxisLabelStringForClassification:(NSInteger)arg0 ;
+(id)localizedDescriptionForClassification:(NSInteger)arg0 ;
+(id)localizedTitleForClassification:(NSInteger)arg0 ;
+(id)localizedTitleForWalkingSteadinessEventCategoryValue:(NSInteger)arg0 ;


@end


#endif