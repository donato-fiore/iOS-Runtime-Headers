// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOUNTERRATELOGGINGTRIGGER_H
#define HMDCOUNTERRATELOGGINGTRIGGER_H

@class NSString;
@protocol HMDEventCounterObserver, HMDEWSLogging;

#import <Foundation/Foundation.h>


@interface HMDCounterRateLoggingTrigger : NSObject <HMDEventCounterObserver>



@property (readonly, nonatomic) NSString *counterName; // ivar: _counterName
@property (readonly, nonatomic) NSObject<HMDEWSLogging> *ewsLogger; // ivar: _ewsLogger
@property (nonatomic) *NSUInteger intervalCounts; // ivar: _intervalCounts
@property (readonly, nonatomic) NSUInteger intervalSize; // ivar: _intervalSize
@property (nonatomic) NSUInteger lastUpdatedInterval; // ivar: _lastUpdatedInterval
@property (nonatomic) NSUInteger maxWindowCount; // ivar: _maxWindowCount
@property (readonly, nonatomic) id *timeSourceBlock; // ivar: _timeSourceBlock
@property (readonly, nonatomic) BOOL uploadImmediately; // ivar: _uploadImmediately
@property (nonatomic) NSUInteger windowCount; // ivar: _windowCount
@property (readonly, nonatomic) NSUInteger windowSize; // ivar: _windowSize
@property (readonly, nonatomic) NSUInteger windowThreshold; // ivar: _windowThreshold


-(id)initWithThreshold:(NSUInteger)arg0 windowSize:(NSUInteger)arg1 counterName:(id)arg2 ewsLogger:(id)arg3 ;
-(id)initWithThreshold:(NSUInteger)arg0 windowSize:(NSUInteger)arg1 counterName:(id)arg2 uploadImmediately:(BOOL)arg3 ewsLogger:(id)arg4 ;
-(id)initWithThreshold:(NSUInteger)arg0 windowSize:(NSUInteger)arg1 counterName:(id)arg2 uploadImmediately:(BOOL)arg3 ewsLogger:(id)arg4 timeSourceBlock:(id)arg5 ;
-(void)dealloc;
-(void)logRateTrigger:(id)arg0 triggerValue:(NSUInteger)arg1 ;
-(void)updatedCounterForEventName:(id)arg0 fromOldValue:(NSUInteger)arg1 toNewValue:(NSUInteger)arg2 ;


@end


#endif