// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICSP33_95987ADD223C83697EEA450CF0CC3A3519SCANTURNSSUBSCRIBER_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICSP33_95987ADD223C83697EEA450CF0CC3A3519SCANTURNSSUBSCRIBER_H

@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject <BPSSubscriber>

 {
    ? downstream;
    ? innerSubscription;
    ? eventTables;
    ? endpointer;
}




-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif