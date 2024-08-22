// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUPLOAD_H
#define NPTUPLOAD_H

@class NSURLSession, NSDate, NSMutableURLRequest, NSMutableDictionary, NSMutableArray, NSError, NSString, NetworkQualityAssessment, NetworkQualityConfiguration;
@protocol NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying, OS_nw_activity, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NPTPerformanceTestConfiguration.h"
#import "NPTMetricResult.h"

@interface NPTUpload : NSObject <NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying>

 {
    NSURLSession *uploadSession;
    NSDate *initialTime;
    NSUInteger maxConcurrentStreams;
    NSUInteger processedStreamEndCount;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *uploadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    CGFloat recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartUpload;
    NSUInteger timedUploadLength;
    NSUInteger uploadFileSize;
    CGFloat stableSpeedToLog;
    NSError *uploadError;
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
-(id)createHTTPBodyWithBoundary:(id)arg0 usingData:(id)arg1 withMimeType:(id)arg2 withFileName:(id)arg3 ;
-(id)createRandomDataOfSize:(NSUInteger)arg0 ;
-(id)createTempFileWithData:(id)arg0 named:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkActivityParent:(id)arg0 testConfiguration:(id)arg1 ;
-(id)processNQResult:(id)arg0 ;
-(id)realTimeSpeedMetricOverall;
-(id)setupNewUploadTask:(NSUInteger)arg0 suspensionThresholdEnum:(int)arg1 ;
-(int)determineSuspensionThreshold;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)cancel;
-(void)cancelDispatchTimer;
-(void)cancelDispatchTimerAndSession;
-(void)cleanUp;
-(void)encodeWithCoder:(id)arg0 ;
-(void)kickOffNewUpload:(NSInteger)arg0 suspensionThresholdEnum:(int)arg1 ;
-(void)progress:(id)arg0 ;
-(void)removeTempFileNamed:(id)arg0 ;
-(void)setupTimer;
-(void)startLegacyUploadWithCompletion:(id)arg0 ;
-(void)startNQUploadWithCompletion:(id)arg0 ;
-(void)startTasks;
-(void)startUploadWithCompletion:(id)arg0 ;


@end


#endif