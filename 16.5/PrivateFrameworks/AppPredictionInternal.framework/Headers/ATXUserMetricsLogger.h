// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERMETRICSLOGGER_H
#define ATXUSERMETRICSLOGGER_H

@protocol ATXUserMetricsLoggerTarget;

#import <Foundation/Foundation.h>


@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)storeUserMetric:(id)arg0 ;
-(void)storeUserMetric:(id)arg0 forceUserId:(id)arg1 ;


@end


#endif