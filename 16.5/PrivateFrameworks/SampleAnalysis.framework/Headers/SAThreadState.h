// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATHREADSTATE_H
#define SATHREADSTATE_H

@class NSString;
@protocol SASerializable, NSCopying;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"
#import "SAFrame.h"
#import "SAWaitInfo.h"
#import "SATurnstileInfo.h"
#import "SADispatchQueue.h"
#import "SASwiftTask.h"

@interface SAThreadState : NSObject <SASerializable, NSCopying>

 {
    unsigned char _cpuNum;
    unsigned char _basePriority;
    unsigned char _scheduledPriority;
    BOOL _threadQos;
    BOOL _threadRequestedQos;
    BOOL _isSuspended;
    BOOL _isIOPassive;
    BOOL _startSampleIndex;
    BOOL _isDarwinBG;
    BOOL _isIdleWorkQueue;
    BOOL _endSampleIndex;
    BOOL _isRunning;
    BOOL _filledName;
    BOOL _filledDispatchQueue;
    BOOL _filledSwiftTask;
    BOOL _filledUserStack;
    BOOL _filledScheduling;
    BOOL _filledCyclesInstructions;
    BOOL _filledSnapshot;
    BOOL _threadRequestedQosOverride;
    BOOL _threadQosPromote;
    BOOL _threadQosKEventOverride;
    BOOL _threadQosWorkQueueOverride;
    BOOL _threadQosWorkloopServicerOverride;
    BOOL _isPromotedAboveTask;
    unsigned char _ioTier;
    unsigned int _schedulerFlags;
    unsigned int _state;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    SAFrame *_leafUserFrame;
    SAFrame *_leafOfCRootFramesReplacedBySwiftAsync;
    SAFrame *_leafKernelFrame;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    NSString *_name;
    SADispatchQueue *_dispatchQueue;
    SASwiftTask *_swiftTask;
    NSUInteger _voucherIdentifier;
    NSUInteger _userTimeInNs;
    NSUInteger _systemTimeInNs;
    NSUInteger _instructions;
    NSUInteger _cycles;
    SATimestamp *_timestampLastMadeRunnable;
}


@property (readonly) int basePriority;
@property (readonly) unsigned int cpuNum;
@property (readonly) unsigned int cpuSpeedMhz;
@property (readonly) NSUInteger cpuTimeNs;
@property (readonly) NSUInteger cycles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) SADispatchQueue *dispatchQueue;
@property (readonly) NSUInteger endSampleIndex;
@property (readonly) SATimestamp *endTimestamp;
@property BOOL filledCyclesInstructions;
@property BOOL filledDispatchQueue;
@property BOOL filledName;
@property BOOL filledScheduling;
@property BOOL filledSnapshot;
@property BOOL filledSwiftTask;
@property BOOL filledUserStack;
@property (readonly) BOOL hasDispatchQueue;
@property (readonly) BOOL hasSwiftTask;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger instructions;
@property (readonly) unsigned char ioTier;
@property (readonly) BOOL isAbortingInterruptibleWaits;
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) BOOL isBatteryAndUserActivityValid;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isHaltedAtTermination;
@property (readonly) BOOL isIOPassive;
@property (readonly) BOOL isIORecord;
@property (readonly) BOOL isIdleWorkQueue;
@property (readonly) BOOL isInterruptRecord;
@property (readonly) BOOL isMicrostackshot;
@property (readonly) BOOL isOnBattery;
@property (readonly) BOOL isPromotedAboveTask;
@property (readonly) BOOL isRunnable;
@property (readonly) BOOL isRunning;
@property (readonly) BOOL isStopped;
@property (readonly) BOOL isSuspended;
@property (readonly) BOOL isTimerArmingRecord;
@property (readonly) BOOL isUserActive;
@property (readonly) BOOL isUserMode;
@property (readonly) BOOL isWaiting;
@property (readonly) BOOL isWaitingUninterruptibly;
@property (readonly) SAFrame *leafKernelFrame;
@property (readonly) SAFrame *leafOfCRootFramesReplacedBySwiftAsync;
@property (readonly) SAFrame *leafUserFrame;
@property (readonly) unsigned char microstackshotFlags;
@property (readonly) NSString *name;
@property (readonly) int scheduledPriority;
@property (readonly) unsigned int schedulerFlags;
@property (readonly) NSUInteger startSampleIndex;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property (readonly, weak) SASwiftTask *swiftTask;
@property (readonly) NSUInteger systemTimeInNs;
@property (readonly) unsigned char threadQos;
@property (readonly) unsigned char threadQosIpcOverride; // ivar: _threadQosIpcOverride
@property (readonly) unsigned char threadQosKEventOverride;
@property (readonly) unsigned char threadQosPromote;
@property (readonly) unsigned char threadQosSyncIpcOverride; // ivar: _threadQosSyncIpcOverride
@property (readonly) unsigned char threadQosWorkQueueOverride;
@property (readonly) unsigned char threadQosWorkloopServicerOverride;
@property (readonly) unsigned char threadRequestedQos;
@property (readonly) unsigned char threadRequestedQosOverride;
@property (readonly) SATimestamp *timestampLastMadeRunnable;
@property (readonly) SATurnstileInfo *turnstileInfo;
@property (readonly) NSUInteger userTimeInNs;
@property (readonly) NSUInteger voucherIdentifier;
@property (readonly) SAWaitInfo *waitInfo;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)stateWithStartTimestamp:(id)arg0 endTimestamp:(id)arg1 startSampleIndex:(NSUInteger)arg2 endSampleIndex:(NSUInteger)arg3 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)hasSameStackAs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)sampleCountInSampleIndexRangeStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKCDataDeltaThreadV2:(struct thread_delta_snapshot_v2 *)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(NSUInteger)arg3 endSampleIndex:(NSUInteger)arg4 name:(id)arg5 leafUserFrame:(id)arg6 leafOfCRootFramesReplacedBySwiftAsync:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataDeltaThreadV3:(struct thread_delta_snapshot_v3 *)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(NSUInteger)arg3 endSampleIndex:(NSUInteger)arg4 name:(id)arg5 leafUserFrame:(id)arg6 leafOfCRootFramesReplacedBySwiftAsync:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 ;
-(id)initWithKCDataThreadV2:(struct thread_snapshot_v2 *)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(NSUInteger)arg3 endSampleIndex:(NSUInteger)arg4 name:(id)arg5 leafUserFrame:(id)arg6 leafOfCRootFramesReplacedBySwiftAsync:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info )arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataThreadV4:(struct thread_snapshot_v4 *)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(NSUInteger)arg3 endSampleIndex:(NSUInteger)arg4 name:(id)arg5 leafUserFrame:(id)arg6 leafOfCRootFramesReplacedBySwiftAsync:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info )arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 threadInstructionCycles:(struct instrs_cycles_snapshot *)arg13 ;
-(id)initWithStackshotThreadV1:(struct thread_snapshot *)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(NSUInteger)arg3 endSampleIndex:(NSUInteger)arg4 leafUserFrame:(id)arg5 leafOfCRootFramesReplacedBySwiftAsync:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(struct mach_timebase_info )arg8 ;
-(id)initWithStartTimestamp:(id)arg0 endTimestamp:(id)arg1 startSampleIndex:(NSUInteger)arg2 endSampleIndex:(NSUInteger)arg3 ;
-(id)stack;
-(id)stackIgnoringKernelStackWithLeafFrame:(id)arg0 ;
-(id)stackWithBacktraceStyle:(NSUInteger)arg0 ;
-(id)stackWithBacktraceStyle:(NSUInteger)arg0 ignoringKernelStackWithLeafFrame:(id)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif