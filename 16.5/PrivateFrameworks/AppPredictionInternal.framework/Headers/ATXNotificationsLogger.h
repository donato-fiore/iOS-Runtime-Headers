// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSLOGGER_H
#define ATXNOTIFICATIONSLOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXNotificationsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _standardSamplingRate;
}




+(id)sharedInstance;
-(CGFloat)samplingRateForLogType:(NSInteger)arg0 ;
-(id)init;
-(id)samplingRateFromParsecBag;
-(void)submitWithProtobuf:(id)arg0 logtype:(NSInteger)arg1 ;


@end


#endif