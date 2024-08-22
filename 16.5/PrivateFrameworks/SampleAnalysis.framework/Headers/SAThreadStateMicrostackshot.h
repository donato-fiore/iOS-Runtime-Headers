// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATHREADSTATEMICROSTACKSHOT_H
#define SATHREADSTATEMICROSTACKSHOT_H



#import "SAThreadState.h"

@interface SAThreadStateMicrostackshot : SAThreadState {
    unsigned char _microstackshotFlags;
    unsigned short _cpuSpeed100Mhz;
}




+(id)stateWithMicrostackshot:(struct micro_snapshot *)arg0 thread:(struct thread_snapshot *)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(NSUInteger)arg4 endSampleIndex:(NSUInteger)arg5 leafUserFrame:(id)arg6 leafOfCRootFramesReplacedBySwiftAsync:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info )arg9 ;
-(BOOL)isBatteryAndUserActivityValid;
-(BOOL)isIORecord;
-(BOOL)isInterruptRecord;
-(BOOL)isMicrostackshot;
-(BOOL)isOnBattery;
-(BOOL)isTimerArmingRecord;
-(BOOL)isUserActive;
-(BOOL)isUserMode;
-(unsigned char)microstackshotFlags;
-(unsigned int)cpuSpeedMhz;


@end


#endif