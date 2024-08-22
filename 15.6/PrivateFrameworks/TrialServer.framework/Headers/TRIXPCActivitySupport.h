// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIXPCACTIVITYSUPPORT_H
#define TRIXPCACTIVITYSUPPORT_H


#import <Foundation/Foundation.h>


@interface TRIXPCActivitySupport : NSObject



+(BOOL)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)arg0 ;
+(id)_registeredActivities;
+(id)nameForActivityState:(NSInteger)arg0 ;
+(void)assertRegistrationOfLaunchdPlistActivities:(id)arg0 ;
// +(void)registerActivityWithLaunchDaemonDescriptor:(id)arg0 checkInBlock:(id)arg1 asyncHandler:(unk)arg2  ;


@end


#endif