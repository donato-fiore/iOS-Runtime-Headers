// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHATASKHEALTHRECORDER_H
#define PHATASKHEALTHRECORDER_H

@class CPAnalytics, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHATaskHealthRecorder : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
}


@property (readonly, nonatomic) NSString *taskName; // ivar: _taskName


-(id)initWithTaskName:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
-(void)recordTaskCompletionWithTaskCompletionState:(NSUInteger)arg0 taskDuration:(id)arg1 taskProgress:(id)arg2 taskError:(id)arg3 lastRunDate:(id)arg4 ;


@end


#endif