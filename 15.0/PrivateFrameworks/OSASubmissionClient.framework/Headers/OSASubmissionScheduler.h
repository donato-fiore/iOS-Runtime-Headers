// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSASUBMISSIONSCHEDULER_H
#define OSASUBMISSIONSCHEDULER_H


#import <Foundation/Foundation.h>


@interface OSASubmissionScheduler : NSObject



+(CGFloat)_lastSuccessTime;
+(void)_saveLastSuccessTime;
+(void)_scheduleSubmissionPermissive:(BOOL)arg0 ;
+(void)_setDelayForActivity:(id)arg0 ;
+(void)scheduleCleanupWithHomeDirectory:(id)arg0 ;
+(void)scheduleSubmission;


@end


#endif