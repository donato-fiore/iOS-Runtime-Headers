// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTREPORTING_H
#define CUTREPORTING_H


#import <Foundation/Foundation.h>

#import "CUTPromise.h"

@interface CUTReporting : NSObject

@property (retain, nonatomic) CUTPromise *promise; // ivar: _promise
@property (readonly) os_unfair_lock_s promiseLock; // ivar: _promiseLock


+(id)RTCSessionPromiseWithBatchingInterval:(CGFloat)arg0 ;
+(id)_rtcReportingSession;
+(id)reportingSession;
+(void)startRTCReportingSessionWithCompletion:(id)arg0 ;
-(id)_RTCSessionPromiseWithBatchingInterval:(CGFloat)arg0 ;
-(id)init;
-(void)_beginPromiseTimeoutWithInterval:(NSInteger)arg0 ;
-(void)_failSeal:(id)arg0 withError:(id)arg1 ;
-(void)_fullfillSeal:(id)arg0 withSession:(id)arg1 ;
-(void)_startConfigurationOfSession:(id)arg0 withPromiseSeal:(id)arg1 ;


@end


#endif