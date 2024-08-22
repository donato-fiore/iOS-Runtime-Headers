// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef C2SESSIONTASK_H
#define C2SESSIONTASK_H

@class NSString, NSMutableSet, NSURLSessionDataTask, NSURLSessionTaskMetrics;
@protocol C2SessionTaskDelegate, OS_os_activity, C2RequestDelegate;

#import <Foundation/Foundation.h>

#import "C2RequestOptions.h"

@interface C2SessionTask : NSObject <C2SessionTaskDelegate>



@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (nonatomic) unsigned int attemptCount; // ivar: _attemptCount
@property (readonly, nonatomic) BOOL callbackHung;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<C2RequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initTime; // ivar: _initTime
@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, copy, nonatomic) C2RequestOptions *options; // ivar: _options
@property (retain, nonatomic) NSMutableSet *outstandingCallbacks; // ivar: _outstandingCallbacks
@property (nonatomic) CGFloat resetTime; // ivar: _resetTime
@property (retain, nonatomic) NSObject<C2SessionTaskDelegate> *sessionTaskDelegate; // ivar: _sessionTaskDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // ivar: _taskMetrics


+(CGFloat)captureMetricDurationBetweenStart:(CGFloat)arg0 andEnd:(CGFloat)arg1 ;
+(CGFloat)captureMetricsForTimingData:(id)arg0 withKey:(id)arg1 ;
+(id)callbackHealthQueue;
+(void)initialize;
-(id)initWithOptions:(id)arg0 delegate:(id)arg1 sessionTaskDelegate:(id)arg2 ;
-(void)C2Session:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)captureMetricsWithError:(id)arg0 eventType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didFinishCollectingMetrics:(id)arg0 ;
-(void)handleCallbackForTask:(id)arg0 callback:(id)arg1 ;
-(void)invalidate;
-(void)testBehavior_triggerCallbackHang;


@end


#endif