// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSASTATEMONITOR_H
#define OSASTATEMONITOR_H


#import <Foundation/Foundation.h>


@interface OSAStateMonitor : NSObject



+(id)dateForEvent:(id)arg0 ;
+(id)keyForEvent:(id)arg0 ;
+(void)checkCALogWrittenStatus;
+(void)checkSubmissionStatus;
+(void)evaluateState;
+(void)postFailureWithReason:(id)arg0 ;
+(void)recordEvent:(id)arg0 ;


@end


#endif