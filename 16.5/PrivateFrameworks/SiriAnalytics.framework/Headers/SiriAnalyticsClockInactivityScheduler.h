// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSCLOCKINACTIVITYSCHEDULER_H
#define SIRIANALYTICSCLOCKINACTIVITYSCHEDULER_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsClockInactivityScheduler : NSObject {
    ? interval;
    ? queue;
    ? expiration;
    ? inactivityTimer;
    ? timerLock;
}




-(id)init;
// -(id)initWithSeconds:(NSInteger)arg0 queue:(id)arg1 expiration:(id)arg2 creation:(unk)arg3  ;
-(void)clockCreated;
-(void)clockExpiredWithCompletion:(id)arg0 ;
-(void)clockForcefullyDestroyedWithCompletion:(id)arg0 ;


@end


#endif