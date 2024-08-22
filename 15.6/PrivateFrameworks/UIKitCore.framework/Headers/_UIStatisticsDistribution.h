// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATISTICSDISTRIBUTION_H
#define _UISTATISTICSDISTRIBUTION_H

@class UIStatistics;



@interface _UIStatisticsDistribution : UIStatistics



-(BOOL)isTimingForObject:(id)arg0 ;
-(void)cancelTimingForObject:(id)arg0 ;
-(void)recordDistributionValue:(CGFloat)arg0 ;
-(void)recordTimingForObject:(id)arg0 ;
-(void)resetDistribution;
-(void)resetDistributionToValue:(CGFloat)arg0 ;
-(void)startTimingForObject:(id)arg0 ;


@end


#endif