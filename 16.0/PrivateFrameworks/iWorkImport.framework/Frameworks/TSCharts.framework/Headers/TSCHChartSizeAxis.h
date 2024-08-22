// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTSIZEAXIS_H
#define TSCHCHARTSIZEAXIS_H



#import "TSCHChartAxis.h"

@interface TSCHChartSizeAxis : TSCHChartAxis



+(unsigned char)styleOwnerPathType;
-(CGFloat)doubleModelToAxisValue:(CGFloat)arg0 forSeries:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0 ;
-(id)userMax;
-(id)userMin;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg0 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg0 ;


@end


#endif