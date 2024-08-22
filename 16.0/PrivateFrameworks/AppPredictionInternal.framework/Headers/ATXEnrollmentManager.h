// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXENROLLMENTMANAGER_H
#define ATXENROLLMENTMANAGER_H


#import <Foundation/Foundation.h>


@interface ATXEnrollmentManager : NSObject



+(id)getUserIdForScheme:(id)arg0 enrollmentPeriod:(CGFloat)arg1 enrollmentRate:(CGFloat)arg2 ;
+(id)getUserIdForScheme:(id)arg0 enrollmentPeriod:(CGFloat)arg1 enrollmentRate:(CGFloat)arg2 currentDate:(id)arg3 defaultsDomain:(id)arg4 ;
+(id)readCurrentEnrollmentUserIdFromDefaults:(id)arg0 scheme:(id)arg1 ;
+(id)readLastEnrollmentDateFromDefaults:(id)arg0 scheme:(id)arg1 ;
+(void)setCurrentEnrollmentUserId:(id)arg0 forUserDefaults:(id)arg1 scheme:(id)arg2 ;
+(void)setLastEnrollmentToDate:(id)arg0 forUserDefaults:(id)arg1 scheme:(id)arg2 ;


@end


#endif