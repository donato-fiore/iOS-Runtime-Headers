// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTDOWNLOAD_H
#define NPTDOWNLOAD_H

@class NSURLSession, NSDate, NSMutableURLRequest, NSMutableDictionary, NSMutableArray, NSError, NSString, NetworkQualityAssessment, NetworkQualityConfiguration;
@protocol NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying, OS_nw_activity, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NPTPerformanceTestConfiguration.h"
#import "NPTMetricResult.h"

@interface NPTDownload : NSObject <NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying>

 {
    NSURLSession *downloadSession;
    NSUInteger processedStreamEndCount;
    NSUInteger maxConcurrentStreams;
    NSDate *initialTime;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *downloadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    CGFloat recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartDownload;
    NSUInteger timedDownloadLength;
    CGFloat stableSpeedToLog;
    NSError *downloadError;
    BOOL stopAtFileSizeEnabled;
    NSString *callingClient;
    CGFloat maxSpeedObserved;
    BOOL legacy;
    NPTPerformanceTestConfiguration *testConfig;
    NetworkQualityAssessment *nqTest;
    NetworkQualityConfiguration *nqConfig;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPTMetricResult *results; // ivar: _results
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)finishedAllTasks;
-(BOOL)inTimedMode;
-(BOOL)isLastTask;
-(BOOL)isTimerCancelledError:(id)arg0 ;
-(CGFloat)checkAndReturnSpeedStablized:(id)arg0 ;
-(CGFloat)minNonZeroValue:(CGFloat)arg0 comparisonValue:(CGFloat)arg1 ;
-(id)aggregateResults;
-(id)checkInterfaceSpecified;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkActivityParent:(id)arg0 testConfiguration:(id)arg1 ;
-(id)overAllResultByTask:(NSUInteger)arg0 ;
-(id)processNQResult:(id)arg0 ;
-(id)realTimeSpeedMetric:(NSUInteger)arg0 ;
-(id)realTimeSpeedMetricOverall;
-(id)setupNewDownloadTask;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)cancel;
-(void)cancelDispatchTimer;
-(void)cancelDispatchTimerAndSession;
-(void)encodeWithCoder:(id)arg0 ;
-(void)kickOffNewDownload;
-(void)progress:(id)arg0 ;
-(void)setupTimer;
-(void)startDownloadWithCompletion:(id)arg0 ;
-(void)startLegacyDownloadWithCompletion:(id)arg0 ;
-(void)startNQDownloadWithCompletion:(id)arg0 ;
-(void)startTasks;


@end


#endif