// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSASUBMISSIONSCHEDULER_H
#define OSASUBMISSIONSCHEDULER_H


#import <Foundation/Foundation.h>


@interface OSASubmissionScheduler : NSObject



+(CGFloat)_lastSuccessTime;
+(NSInteger)_retryCount;
+(void)_saveLastSuccessTime;
+(void)_scheduleSubmissionPermissive:(BOOL)arg0 ;
+(void)_setCadenceForActivity:(id)arg0 ;
+(void)_setRetryCount:(NSInteger)arg0 ;
+(void)scheduleCleanupWithHomeDirectory:(id)arg0 ;
+(void)scheduleSubmission;


@end


#endif