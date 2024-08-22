// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMETRICS_H
#define IMMETRICS_H


#import <Foundation/Foundation.h>


@interface IMMetrics : NSObject



+(BOOL)canRecordEvent;
+(CGFloat)endTimer:(id)arg0 ;
+(CGFloat)endTimer:(id)arg0 dataSource:(id)arg1 ;
+(CGFloat)endTimer:(id)arg0 dataSource:(id)arg1 withData:(id)arg2 ;
+(id)defaultMetricsController;
+(id)flushImmediately;
+(id)keyForTimerName:(id)arg0 dataSource:(id)arg1 ;
+(id)metricsControllerForTopic:(id)arg0 ;
+(void)addMetricsController:(id)arg0 ;
+(void)cancelFlush;
+(void)disable;
+(void)enable;
+(void)initialize;
+(void)recordEvent:(id)arg0 ;
+(void)recordEvent:(id)arg0 dataSource:(id)arg1 data:(id)arg2 ;
+(void)recordEvent:(id)arg0 dataSource:(id)arg1 data:(id)arg2 topic:(id)arg3 ;
+(void)recordEvent:(id)arg0 topic:(id)arg1 ;
+(void)recordEvent:(id)arg0 with:(id)arg1 ;
+(void)recordMemory:(id)arg0 ;
+(void)recordUserAction:(id)arg0 ;
+(void)recordUserAction:(id)arg0 dataSource:(id)arg1 ;
+(void)recordUserAction:(id)arg0 dataSource:(id)arg1 withData:(id)arg2 ;
+(void)removeMetricsController:(id)arg0 ;
+(void)setDefaultMetricsController:(id)arg0 ;
+(void)setLogLevel:(int)arg0 ;
+(void)setupEvent:(id)arg0 forDataSource:(id)arg1 ;
+(void)startTimer:(id)arg0 ;
+(void)startTimer:(id)arg0 dataSource:(id)arg1 ;


@end


#endif