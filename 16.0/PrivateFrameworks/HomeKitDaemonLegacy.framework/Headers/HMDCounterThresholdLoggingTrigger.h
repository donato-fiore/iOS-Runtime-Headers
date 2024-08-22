// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOUNTERTHRESHOLDLOGGINGTRIGGER_H
#define HMDCOUNTERTHRESHOLDLOGGINGTRIGGER_H

@class NSString;
@protocol HMDEventCounterObserver;

#import <Foundation/Foundation.h>


@interface HMDCounterThresholdLoggingTrigger : NSObject <HMDEventCounterObserver>



@property (readonly, nonatomic) NSString *counterName; // ivar: _counterName
@property (readonly, nonatomic) id *loggingBlock; // ivar: _loggingBlock
@property (readonly, nonatomic) NSUInteger threshold; // ivar: _threshold
@property (readonly, nonatomic) BOOL uploadImmediately; // ivar: _uploadImmediately


-(id)initWithThreshold:(NSUInteger)arg0 counterName:(id)arg1 ;
-(id)initWithThreshold:(NSUInteger)arg0 counterName:(id)arg1 uploadImmediately:(BOOL)arg2 ;
-(id)initWithThreshold:(NSUInteger)arg0 counterName:(id)arg1 uploadImmediately:(BOOL)arg2 loggingBlock:(id)arg3 ;
-(void)logThresholdTrigger:(id)arg0 triggerValue:(NSUInteger)arg1 ;
-(void)updatedCounterForEventName:(id)arg0 fromOldValue:(NSUInteger)arg1 toNewValue:(NSUInteger)arg2 ;


@end


#endif