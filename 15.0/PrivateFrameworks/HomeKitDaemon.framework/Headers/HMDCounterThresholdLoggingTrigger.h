// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOUNTERTHRESHOLDLOGGINGTRIGGER_H
#define HMDCOUNTERTHRESHOLDLOGGINGTRIGGER_H

@class NSString;
@protocol HMDEventCounterObserver;

#import <Foundation/Foundation.h>


@interface HMDCounterThresholdLoggingTrigger : NSObject <HMDEventCounterObserver>



@property (readonly, nonatomic) NSString *counterName; // ivar: _counterName
@property (readonly, nonatomic) NSUInteger threshold; // ivar: _threshold


-(id)initWithThreshold:(NSUInteger)arg0 counterName:(id)arg1 ;
-(void)logThresholdTrigger:(id)arg0 triggerValue:(NSUInteger)arg1 ;
-(void)updatedCounterForEventName:(id)arg0 requestGroup:(id)arg1 fromOldValue:(NSUInteger)arg2 toNewValue:(NSUInteger)arg3 ;


@end


#endif