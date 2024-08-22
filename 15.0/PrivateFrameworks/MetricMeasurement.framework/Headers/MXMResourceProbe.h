// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMRESOURCEPROBE_H
#define MXMRESOURCEPROBE_H

@class NSThread;


#import "MXMProbe.h"

@interface MXMResourceProbe : MXMProbe

@property (retain) NSThread *pollingThread; // ivar: _pollingThread


+(id)probe;
+(int)_processIdentifierWithProcessName:(char *)arg0 error:(*id)arg1 ;
-(BOOL)performPreIterationActions;
-(id)_pollMainBody;
-(id)init;
-(id)sampleWithTimeout:(CGFloat)arg0 stopReason:(*NSUInteger)arg1 ;
-(void)_beginUpdates;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 mach_space_basicinfo:(struct ipc_info_space_basic *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 pm_networking_stats:(struct ? *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 rusage:(struct rusage_info_v5 *)arg2 ;
-(void)_buildData:(id)arg0 timestamp:(NSUInteger)arg1 taskinfo:(struct proc_taskinfo *)arg2 ;
-(void)_pollAllProcesses:(id)arg0 ;
-(void)_pollBasicTaskInformation:(id)arg0 pid:(int)arg1 ;
-(void)_pollProcessNetworkingStatsWithData:(id)arg0 pid:(int)arg1 task:(unsigned int)arg2 ;
-(void)_pollProcessResourceUsageWithData:(id)arg0 pid:(int)arg1 ;
-(void)_pollProcessWithData:(id)arg0 pid:(int)arg1 ;
-(void)_pollTaskMachPortInformation:(id)arg0 task:(unsigned int)arg1 ;
-(void)_stopUpdates;


@end


#endif