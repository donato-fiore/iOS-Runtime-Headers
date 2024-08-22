// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASAMPLESTORE_H
#define SASAMPLESTORE_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"
#import "SAWSUpdateDataStore.h"
#import "SABinaryLocator.h"
#import "SASharedCache.h"
#import "SAFrame.h"
#import "SATimeRange.h"
#import "SAMountStatusTracker.h"
#import "SATask.h"

@interface SASampleStore : NSObject <NSSecureCoding>

 {
    NSUInteger _numSamples;
    SATimestamp *_startTime;
    SATimestamp *_endTime;
    NSMutableArray *_fanSpeeds;
    NSMutableArray *_powerModeTransitions;
    SAWSUpdateDataStore *_wsDataStore;
    SABinaryLocator *_binaryLocator;
    NSMutableSet *_pidsToTrack;
    int _targetProcessId;
    NSUInteger _targetThreadId;
    _CSArchitecture _arch;
    unsigned int _threadPolicyVersion;
    NSUInteger _previousSampleTimestamp;
    unsigned int _previousStackshotBufferSize;
    BOOL _sampleOnlyMainThreads;
    BOOL _nextSampleIsFirstSamplingAllThreads;
    BOOL _stackshotsOnlyIncludeSpecificProcesses;
    BOOL _nextSampleIsFirstSamplingAllProcesses;
    BOOL _haveKPerfSched;
    CGFloat _sampleIntervalLimit;
    NSMutableArray *_namesToUseDsymForUUID;
    NSMutableArray *_idsToUseDsymForUUID;
    BOOL _bulkSymbolicationFailed;
    NSUInteger _numMicrostackshotsSkippedDueToMissingLoadInfos;
    BOOL _reportedMissingMachineInfoForMicrostackshots;
    NSUInteger _targetHIDEventMachAbs;
    NSMutableDictionary *_processAddressTranslations;
    BOOL _attemptedResampling;
    NSUInteger _dataSource;
    NSUInteger _dataStyle;
    NSDictionary *_systemAdvisoryLevels;
    NSDictionary *_homeVolumeSpace;
    NSDictionary *_nonDefaultFeatureFlags;
    NSArray *_previousSAVersions;
    SASharedCache *_mostRecentNativeSharedCache;
}


@property (copy) NSString *actionTaken; // ivar: _actionTaken
@property CGFloat attemptedSamplingInterval; // ivar: _attemptedSamplingInterval
@property (copy) NSString *bootArgs; // ivar: _bootArgs
@property NSUInteger bytesWritten; // ivar: _bytesWritten
@property NSUInteger bytesWrittenLimit; // ivar: _bytesWrittenLimit
@property CGFloat cpuDuration; // ivar: _cpuDuration
@property CGFloat cpuLimit; // ivar: _cpuLimit
@property CGFloat cpuLimitDuration; // ivar: _cpuLimitDuration
@property (readonly) SAFrame *cpuSignalHandlerStackLeafKernelFrame; // ivar: _cpuSignalHandlerStackLeafKernelFrame
@property CGFloat cpuUsed; // ivar: _cpuUsed
@property (copy) NSString *customOutput; // ivar: _customOutput
@property NSUInteger dataGatheringOptions; // ivar: _dataGatheringOptions
@property (readonly) NSUInteger dataSource;
@property (readonly) NSUInteger dataStyle;
@property (copy) NSString *durationNote; // ivar: _durationNote
@property (readonly) SATimestamp *endTime;
@property (copy) NSString *event; // ivar: _event
@property (copy) NSString *eventNote; // ivar: _eventNote
@property (copy) SATimeRange *eventTimeRange; // ivar: _eventTimeRange
@property CGFloat extraDuration; // ivar: _extraDuration
@property (copy) NSString *hardwareModel; // ivar: _hardwareModel
@property BOOL haveKPerfSched;
@property (readonly) NSArray *hidEvents; // ivar: _hidEvents
@property (readonly) NSDictionary *homeVolumeSpace;
@property unsigned int hwPageSize; // ivar: _hwPageSize
@property (readonly) NSArray *ioEvents; // ivar: _ioEvents
@property CGFloat kPerfPETSampleIntervalLimit;
@property BOOL keepMicrostackshotsWithoutLoadInfo; // ivar: _keepMicrostackshotsWithoutLoadInfo
@property BOOL keepStateBetweenSampleIndexes;
@property (readonly) NSArray *kernelCaches; // ivar: _kernelCaches
@property (readonly) NSString *kernelVersion; // ivar: _kernelVersion
@property (readonly, copy) NSString *kextStat; // ivar: _kextStat
@property (readonly) CGFloat lastWakeTime; // ivar: _lastWakeTime
@property mach_timebase_info machTimebase; // ivar: _machTimebase
@property (copy) NSString *machineArchitecture;
@property (readonly) NSArray *memoryPressureEvents; // ivar: _memoryPressureEvents
@property (readonly) SAMountStatusTracker *mountStatusTracker; // ivar: _mountStatusTracker
@property (readonly) NSDictionary *nonDefaultFeatureFlags;
@property unsigned int numActiveCPUs; // ivar: _numActiveCPUs
@property (readonly) NSUInteger numSamples;
@property NSUInteger numWakeups; // ivar: _numWakeups
@property NSUInteger numWakeupsLimit; // ivar: _numWakeupsLimit
@property BOOL omitSensitiveStrings; // ivar: _omitSensitiveStrings
@property (copy) NSString *osBuildVersion; // ivar: _osBuildVersion
@property (copy) NSString *osProductName; // ivar: _osProductName
@property (copy) NSString *osProductVersion; // ivar: _osProductVersion
@property (readonly) NSArray *powerModeTransitions;
@property (copy) NSString *reason; // ivar: _reason
@property CGFloat reportTimeThreshold; // ivar: _reportTimeThreshold
@property BOOL sampleOnlyMainThreads;
@property (readonly) NSArray *sampleTimestamps; // ivar: _sampleTimestamps
@property BOOL sanitizePaths; // ivar: _sanitizePaths
@property (readonly) NSArray *sharedCaches; // ivar: _sharedCaches
@property BOOL shouldGatherKextStat; // ivar: _shouldGatherKextStat
@property (copy) NSString *signature; // ivar: _signature
@property BOOL stackshotsOnlyIncludeSpecificProcesses;
@property (readonly) SATimestamp *startTime;
@property (copy) NSString *stepsNote; // ivar: _stepsNote
@property (readonly) NSDictionary *systemAdvisoryLevels;
@property NSUInteger targetHIDEventEndMachAbs; // ivar: _targetHIDEventEndMachAbs
@property NSUInteger targetHIDEventMachAbs;
@property (readonly) SATask *targetProcess; // ivar: _targetProcess
@property (readonly) NSString *targetProcessAbsolutePath;
@property (readonly) NSString *targetProcessBundleBuildVersion;
@property (readonly) NSString *targetProcessBundleId;
@property (readonly) NSString *targetProcessBundleName;
@property (readonly) NSString *targetProcessBundleProductBuildVersion;
@property (readonly) NSString *targetProcessBundleProjectName;
@property (readonly) NSString *targetProcessBundleShortVersion;
@property (readonly) NSString *targetProcessBundleSourceVersion;
@property (readonly) NSString *targetProcessBundleVersion;
@property (readonly) NSString *targetProcessCommerceAppID;
@property (readonly) NSString *targetProcessCommerceExternalID;
@property int targetProcessId;
@property (readonly) NSString *targetProcessName;
@property (readonly) NSString *targetProcessVendorID;
@property NSUInteger targetThreadId;
@property (readonly) NSDictionary *tasksByPid; // ivar: _tasksByPid
@property (readonly) NSDictionary *tasksByUniquePid; // ivar: _tasksByUniquePid
@property (readonly) SATimestamp *timeWhenTransitionedToSamplingAllProcesses; // ivar: _timeWhenTransitionedToSamplingAllProcesses
@property (readonly) SATimestamp *timeWhenTransitionedToSamplingAllThreads; // ivar: _timeWhenTransitionedToSamplingAllThreads
@property unsigned int vmPageSize; // ivar: _vmPageSize
@property CGFloat wakeupsDuration; // ivar: _wakeupsDuration
@property CGFloat wakeupsLimitDuration; // ivar: _wakeupsLimitDuration
@property (readonly) unsigned int workQueueHardThreadLimit; // ivar: _workQueueHardThreadLimit
@property (readonly) unsigned int workQueueSoftThreadLimit; // ivar: _workQueueSoftThreadLimit
@property CGFloat writeDuration; // ivar: _writeDuration
@property CGFloat writeLimitDuration; // ivar: _writeLimitDuration


+(BOOL)canOpenFileAsKTraceFile:(char *)arg0 errorOut:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)sampleStoreForSpindumpFile:(char *)arg0 ;
-(BOOL)cacheLoadInfoForProcess:(int)arg0 ;
-(BOOL)findCpuSignalHandlerStackLeafKernelFrame;
-(BOOL)isEmpty;
-(BOOL)parseKTraceFile:(char *)arg0 warningsOut:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)parseStackshotsFromKTraceFile:(char *)arg0 warningsOut:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)saveBinaryFormatToStream:(struct __sFILE *)arg0 ;
-(NSInteger)addMicrostackshotsFromData:(id)arg0 ofTypes:(unsigned int)arg1 inTimeRangeStart:(CGFloat)arg2 end:(CGFloat)arg3 onlyPid:(int)arg4 onlyTid:(NSUInteger)arg5 ;
-(NSUInteger)addKCDataStackshot:(id)arg0 ;
-(NSUInteger)addKCDataStackshot:(id)arg0 returningTimestamp:(*id)arg1 ;
-(NSUInteger)addKCDataStackshots:(id)arg0 createSeparateSamplePerStackshot:(BOOL)arg1 ;
-(NSUInteger)indexOfFirstSampleOnOrAfterTimestamp:(id)arg0 ;
-(NSUInteger)indexOfLastSampleOnOrBeforeTimestamp:(id)arg0 ;
-(id)binaryFormat;
-(id)callTreeForDispatchQueue:(id)arg0 andThread:(id)arg1 inTask:(id)arg2 options:(id)arg3 ;
-(id)callTreeForExecutable:(id)arg0 options:(id)arg1 ;
-(id)callTreeForTask:(id)arg0 options:(id)arg1 ;
-(id)callTreeForThread:(id)arg0 inTask:(id)arg1 options:(id)arg2 ;
-(id)callTreeForThreadsInTask:(id)arg0 options:(id)arg1 ;
-(id)fanSpeedClosestToTimestamp:(id)arg0 ;
-(id)idleThreadSet;
-(id)init;
-(id)initForFileParsing;
-(id)initForLiveSampling;
-(id)initWithCoder:(id)arg0 ;
-(id)tidToPidDict;
-(id)tidsForPid:(int)arg0 ;
-(int)addMicrostackshotsFromFile:(id)arg0 ofTypes:(unsigned int)arg1 inTimeRangeStart:(CGFloat)arg2 end:(CGFloat)arg3 onlyPid:(int)arg4 onlyTid:(NSUInteger)arg5 ;
-(void)addAuxiliaryData:(id)arg0 ;
-(void)addProcessInfoFromTailspin:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateTasks:(id)arg0 ;
-(void)finishedSamplingLiveSystem;
-(void)gatherMachineArchitecture;
-(void)postprocess;
-(void)startingSamplingLiveSystem;
-(void)symbolicate;
-(void)useDsymForUUIDFor:(id)arg0 ;


@end


#endif