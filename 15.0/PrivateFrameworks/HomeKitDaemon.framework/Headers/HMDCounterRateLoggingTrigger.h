// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOUNTERRATELOGGINGTRIGGER_H
#define HMDCOUNTERRATELOGGINGTRIGGER_H

@class NSString;
@protocol HMDEventCounterObserver;

#import <Foundation/Foundation.h>


@interface HMDCounterRateLoggingTrigger : NSObject <HMDEventCounterObserver>



@property (readonly, nonatomic) NSString *counterName; // ivar: _counterName
@property (nonatomic) *NSUInteger intervalCounts; // ivar: _intervalCounts
@property (readonly, nonatomic) NSUInteger intervalSize; // ivar: _intervalSize
@property (nonatomic) NSUInteger lastUpdatedInterval; // ivar: _lastUpdatedInterval
@property (nonatomic) NSUInteger maxWindowCount; // ivar: _maxWindowCount
@property (readonly, nonatomic) id *timeSourceBlock; // ivar: _timeSourceBlock
@property (nonatomic) NSUInteger windowCount; // ivar: _windowCount
@property (readonly, nonatomic) NSUInteger windowSize; // ivar: _windowSize
@property (readonly, nonatomic) NSUInteger windowThreshold; // ivar: _windowThreshold


-(id)initWithThreashold:(NSUInteger)arg0 windowSize:(NSUInteger)arg1 counterName:(id)arg2 ;
-(id)initWithThreashold:(NSUInteger)arg0 windowSize:(NSUInteger)arg1 counterName:(id)arg2 timeSourceBlock:(id)arg3 ;
-(void)dealloc;
-(void)logRateTrigger:(id)arg0 triggerValue:(NSUInteger)arg1 ;
-(void)updatedCounterForEventName:(id)arg0 requestGroup:(id)arg1 fromOldValue:(NSUInteger)arg2 toNewValue:(NSUInteger)arg3 ;


@end


#endif