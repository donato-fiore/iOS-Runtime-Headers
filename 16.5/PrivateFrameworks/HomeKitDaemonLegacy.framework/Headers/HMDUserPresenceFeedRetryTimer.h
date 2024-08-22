// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERPRESENCEFEEDRETRYTIMER_H
#define HMDUSERPRESENCEFEEDRETRYTIMER_H

@class HMFObject, NSString, HMFTimer, NSUUID;
@protocol HMFLogging;



@interface HMDUserPresenceFeedRetryTimer : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger retryCount; // ivar: _retryCount
@property (readonly) CGFloat retryTimeInterval;
@property (retain) HMFTimer *retryTimer; // ivar: _retryTimer
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *timerID; // ivar: _timerID


+(id)logCategory;
-(BOOL)shouldRetryImmediately:(CGFloat)arg0 ;
-(id)attributeDescriptions;
-(id)init;
-(id)logIdentifier;
-(void)cancel;
-(void)startWithDelegate:(id)arg0 delegateQueue:(id)arg1 responseTime:(CGFloat)arg2 ;


@end


#endif