// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXFOREGROUNDEXITDATA_H
#define MXFOREGROUNDEXITDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXForegroundExitData : NSObject <NSSecureCoding>



@property (readonly) NSUInteger cumulativeAbnormalExitCount; // ivar: _cumulativeAbnormalExitCount
@property (readonly) NSUInteger cumulativeAppWatchdogExitCount; // ivar: _cumulativeAppWatchdogExitCount
@property (readonly) NSUInteger cumulativeBadAccessExitCount; // ivar: _cumulativeBadAccessExitCount
@property (readonly) NSUInteger cumulativeCPUResourceLimitExitCount; // ivar: _cumulativeCPUResourceLimitExitCount
@property (readonly) NSUInteger cumulativeIllegalInstructionExitCount; // ivar: _cumulativeIllegalInstructionExitCount
@property (readonly) NSUInteger cumulativeMemoryResourceLimitExitCount; // ivar: _cumulativeMemoryResourceLimitExitCount
@property (readonly) NSUInteger cumulativeNormalAppExitCount; // ivar: _cumulativeNormalAppExitCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNormalAppExitCount:(NSUInteger)arg0 withMemoryResourceLimitExitCount:(NSUInteger)arg1 withCPUResourceLimitExitCount:(NSUInteger)arg2 withBadAccessExitCount:(NSUInteger)arg3 withAbnormalExitCount:(NSUInteger)arg4 withIllegalInstructionExitCount:(NSUInteger)arg5 withAppWatchDogExitCount:(NSUInteger)arg6 ;
-(id)initWithNormalAppExitCount:(id)arg0 memoryResourceLimitExitCount:(id)arg1 cpuResourceLimitExitCount:(id)arg2 badAccessExitCount:(id)arg3 abnormalExitCount:(id)arg4 illegalInstructionExitCount:(id)arg5 appWatchDogExitCount:(id)arg6 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif