// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBPROCESSCPUSTATISTICS_H
#define FBPROCESSCPUSTATISTICS_H

@class RBSProcessHandle;

#import <Foundation/Foundation.h>


@interface FBProcessCPUStatistics : NSObject {
    RBSProcessHandle *_handle;
    FBProcessTimes _times;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) CGFloat totalElapsedIdleTime;
@property (readonly, nonatomic) CGFloat totalElapsedSystemTime;
@property (readonly, nonatomic) CGFloat totalElapsedTime;
@property (readonly, nonatomic) CGFloat totalElapsedUserTime;


-(id)descriptionForCrashReport;
-(id)initWithProcessHandle:(id)arg0 ;
-(void)_hostwideUserElapsedCPUTime:(*CGFloat)arg0 systemElapsedCPUTime:(*CGFloat)arg1 idleElapsedCPUTime:(*CGFloat)arg2 ;
-(void)_lock_getApplicationCPUTimesForUser:(*CGFloat)arg0 system:(*CGFloat)arg1 idle:(*CGFloat)arg2 ;
-(void)reset;


@end


#endif