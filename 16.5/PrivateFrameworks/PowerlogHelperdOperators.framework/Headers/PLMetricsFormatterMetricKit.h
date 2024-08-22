// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMETRICSFORMATTERMETRICKIT_H
#define PLMETRICSFORMATTERMETRICKIT_H


#import <Foundation/Foundation.h>


@interface PLMetricsFormatterMetricKit : NSObject

@property BOOL processHangs; // ivar: _processHangs


+(id)categorizeAppExits:(id)arg0 ;
+(id)decodeExitWithDomain:(unsigned int)arg0 withCode:(NSUInteger)arg1 ;
-(BOOL)hangtracerEnabled:(id)arg0 ;
-(id)constructCellularData:(id)arg0 ;
-(id)constructCellularHistogram:(id)arg0 ;
-(id)constructHistogramBucketsWithDuration:(int)arg0 andData:(id)arg1 ;
-(id)constructPayloadWithMetrics:(id)arg0 andSignpostData:(id)arg1 forDate:(id)arg2 ;
-(id)constructSignpostIntervalDataWithDurations:(id)arg0 withMetrics:(id)arg1 ;
-(id)init;
-(int)computeBucketEndWithDuration:(int)arg0 andValue:(int)arg1 ;
-(void)addBucketWithDuration:(int)arg0 WithEnd:(int)arg1 andCount:(NSUInteger)arg2 toList:(id)arg3 ;
-(void)addBucketWithSignalBar:(short)arg0 withTime:(id)arg1 toList:(id)arg2 ;
-(void)addPerfMetrics:(id)arg0 toAppData:(id)arg1 ;
-(void)addPowerMetrics:(id)arg0 toAppData:(id)arg1 ;
-(void)addSignpostData:(id)arg0 forApp:(id)arg1 toAppData:(id)arg2 ;
-(void)addTelemetryForMetricInconsistencies:(id)arg0 ;
-(void)analyticsLogSignpostsWithBundleId:(id)arg0 withName:(id)arg1 withCategory:(id)arg2 withMetrics:(id)arg3 ;
-(void)normalizeCellularData:(id)arg0 ;
-(void)publishMetrics:(id)arg0 andSignpostData:(id)arg1 forDate:(id)arg2 ;


@end


#endif