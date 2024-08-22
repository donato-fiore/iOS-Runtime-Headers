// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXBACKGROUNDEXITDATA_H
#define MXBACKGROUNDEXITDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXBackgroundExitData : NSObject <NSSecureCoding>



@property (readonly) NSUInteger cumulativeAbnormalExitCount; // ivar: _cumulativeAbnormalExitCount
@property (readonly) NSUInteger cumulativeAppWatchdogExitCount; // ivar: _cumulativeAppWatchdogExitCount
@property (readonly) NSUInteger cumulativeBackgroundFetchCompletionTimeoutExitCount; // ivar: _cumulativeBackgroundFetchCompletionTimeoutExitCount
@property (readonly) NSUInteger cumulativeBackgroundTaskAssertionTimeoutExitCount; // ivar: _cumulativeBackgroundTaskAssertionTimeoutExitCount
@property (readonly) NSUInteger cumulativeBackgroundURLSessionCompletionTimeoutExitCount; // ivar: _cumulativeBackgroundURLSessionCompletionTimeoutExitCount
@property (readonly) NSUInteger cumulativeBadAccessExitCount; // ivar: _cumulativeBadAccessExitCount
@property (readonly) NSUInteger cumulativeCPUResourceLimitExitCount; // ivar: _cumulativeCPUResourceLimitExitCount
@property (readonly) NSUInteger cumulativeIllegalInstructionExitCount; // ivar: _cumulativeIllegalInstructionExitCount
@property (readonly) NSUInteger cumulativeMemoryPressureExitCount; // ivar: _cumulativeMemoryPressureExitCount
@property (readonly) NSUInteger cumulativeMemoryResourceLimitExitCount; // ivar: _cumulativeMemoryResourceLimitExitCount
@property (readonly) NSUInteger cumulativeNormalAppExitCount; // ivar: _cumulativeNormalAppExitCount
@property (readonly) NSUInteger cumulativeSuspendedWithLockedFileExitCount; // ivar: _cumulativeSuspendedWithLockedFileExitCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNormalAppExitCount:(NSUInteger)arg0 memoryResourceLimitExitCount:(NSUInteger)arg1 cpuResourceLimitExitCount:(NSUInteger)arg2 memoryPressureExitCount:(NSUInteger)arg3 badAccessExitCount:(NSUInteger)arg4 abnormalExitCount:(NSUInteger)arg5 illegalInstructionExitCount:(NSUInteger)arg6 appWatchDogExitCount:(NSUInteger)arg7 cumulativeSuspendedWithLockedFileExitCount:(NSUInteger)arg8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(NSUInteger)arg9 cumulativeBackgroundURLSessionCompletionTimeoutExitCount:(NSUInteger)arg10 cumulativeBackgroundFetchCompletionTimeoutExitCount:(NSUInteger)arg11 ;
-(id)initWithNormalAppExitCount:(id)arg0 memoryResourceLimitExitCount:(id)arg1 cpuResourceLimitExitCount:(id)arg2 badAccessExitCount:(id)arg3 abnormalExitCount:(id)arg4 illegalInstructionExitCount:(id)arg5 appWatchDogExitCount:(id)arg6 cumulativeSuspendedWithLockedFileExitCount:(id)arg7 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg8 ;
-(id)initWithNormalAppExitCount:(id)arg0 memoryResourceLimitExitCount:(id)arg1 cpuResourceLimitExitCount:(id)arg2 memoryPressureExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7 cumulativeSuspendedWithLockedFileExitCount:(id)arg8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg9 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif