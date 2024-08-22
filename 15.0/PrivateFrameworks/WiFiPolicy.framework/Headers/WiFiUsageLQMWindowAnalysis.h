// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMWINDOWANALYSIS_H
#define WIFIUSAGELQMWINDOWANALYSIS_H

@class NSMutableDictionary, NSString, NSArray, NSMutableArray, NSDictionary, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "WiFiUsageLQMRollingWindow.h"

@interface WiFiUsageLQMWindowAnalysis : NSObject {
    NSMutableDictionary *dimensions;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue; // ivar: _analysisQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *analysisTimer; // ivar: _analysisTimer
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *fgApp; // ivar: _fgApp
@property (nonatomic) BOOL isDone; // ivar: _isDone
@property (retain, nonatomic) NSMutableDictionary *lqmWindowsFeatures; // ivar: _lqmWindowsFeatures
@property (retain, nonatomic) NSString *metricNameCDF; // ivar: _metricNameCDF
@property (retain, nonatomic) NSString *metricNameSankey; // ivar: _metricNameSankey
@property (retain, nonatomic) NSArray *preceedingTriggers; // ivar: _preceedingTriggers
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSMutableArray *subsequentTriggers; // ivar: _subsequentTriggers
@property (retain, nonatomic) NSDictionary *summary; // ivar: _summary
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowAfterTrigger; // ivar: _windowAfterTrigger
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowBeforeTrigger; // ivar: _windowBeforeTrigger


+(BOOL)isKernerlParsingEnabled;
+(id)config;
+(void)computeFeatures:(id)arg0 For:(id)arg1 WithLogLabel:(id)arg2 ;
+(void)initialize;
+(void)updateConfig;
-(BOOL)getBeforeKernelWindowWithLikelyhood;
-(BOOL)isAnalysisTodo;
-(id)addDimensionsTo:(id)arg0 ;
-(id)description;
-(id)dumpAnalysis:(id)arg0 ;
-(id)dumpDimensions:(id)arg0 ;
-(id)fetchKernelLQMRollingWindowForInterface:(id)arg0 into:(id)arg1 ;
-(id)initWithRollingWindow:(id)arg0 andReason:(id)arg1 onQueue:(id)arg2 ;
-(id)metricCallbackForMetric:(id)arg0 AndField:(id)arg1 ;
-(void)computeBins:(id)arg0 WithSampleKind:(Class)arg1 ;
-(void)computeFeaturesFor:(id)arg0 WithLogLabel:(id)arg1 ;
-(void)dealloc;
-(void)performAnalysis;
-(void)updateWithLQMSample:(id)arg0 ;
-(void)updateWithSubsequentTrigger:(id)arg0 ;


@end


#endif