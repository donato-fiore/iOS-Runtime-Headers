// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASAMPLEPRINTOPTIONS_H
#define SASAMPLEPRINTOPTIONS_H

@class NSMutableArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SASamplePrintOptions : NSObject <NSCopying>

 {
    BOOL _microstackshotsFormat;
    BOOL _systemstatsFormat;
}


@property BOOL aggregateFramesByOffsetIntoBinary; // ivar: _aggregateFramesByOffsetIntoBinary
@property BOOL aggregateProcessesByExecutable; // ivar: _aggregateProcessesByExecutable
@property BOOL aggregateStacksByProcess;
@property BOOL aggregateStacksByThread;
@property BOOL binaryImagesBeforeStacks; // ivar: _binaryImagesBeforeStacks
@property NSUInteger callTreeAggregation; // ivar: _callTreeAggregation
@property (readonly) NSMutableArray *callTreeSortAttributes; // ivar: _callTreeSortAttributes
@property NSUInteger callTreeTimestampsTimeDomain; // ivar: _callTreeTimestampsTimeDomain
@property BOOL displayAddressesInBlockedReasons; // ivar: _displayAddressesInBlockedReasons
@property BOOL displayAllBinaries; // ivar: _displayAllBinaries
@property BOOL displayAllHIDEvents;
@property BOOL displayAllTaskSizeChanges; // ivar: _displayAllTaskSizeChanges
@property BOOL displayBinaryImageAddresses; // ivar: _displayBinaryImageAddresses
@property BOOL displayBinaryImagesLackingNameOrPath; // ivar: _displayBinaryImagesLackingNameOrPath
@property BOOL displayBlockedReasons; // ivar: _displayBlockedReasons
@property BOOL displayBlockedReasonsLackingProcessOwners; // ivar: _displayBlockedReasonsLackingProcessOwners
@property BOOL displayBlockedThreads; // ivar: _displayBlockedThreads
@property BOOL displayBody; // ivar: _displayBody
@property BOOL displayCPUNumForNonRunningThreads; // ivar: _displayCPUNumForNonRunningThreads
@property BOOL displayCPUNumForRunningThreads; // ivar: _displayCPUNumForRunningThreads
@property BOOL displayCallTreesWithZeroCount; // ivar: _displayCallTreesWithZeroCount
@property BOOL displayCodesigningIDsMatchingBundleIDs; // ivar: _displayCodesigningIDsMatchingBundleIDs
@property BOOL displayDefaultPowerModes; // ivar: _displayDefaultPowerModes
@property BOOL displayDetailedCpuTime; // ivar: _displayDetailedCpuTime
@property BOOL displayDetailedWallTime; // ivar: _displayDetailedWallTime
@property BOOL displayDifferentTypesOfSuspension; // ivar: _displayDifferentTypesOfSuspension
@property BOOL displayEachIndividualIOInCallTrees; // ivar: _displayEachIndividualIOInCallTrees
@property BOOL displayEmptyBootArgs; // ivar: _displayEmptyBootArgs
@property BOOL displayFooter; // ivar: _displayFooter
@property BOOL displayFrameAddresses; // ivar: _displayFrameAddresses
@property BOOL displayFullSourcePaths; // ivar: _displayFullSourcePaths
@property BOOL displayHeader; // ivar: _displayHeader
@property BOOL displayIOInCallTrees; // ivar: _displayIOInCallTrees
@property BOOL displayIdleWorkQueueThreads; // ivar: _displayIdleWorkQueueThreads
@property BOOL displayKernelFrames; // ivar: _displayKernelFrames
@property BOOL displayMultipleMatchingBlockedReasons; // ivar: _displayMultipleMatchingBlockedReasons
@property BOOL displayOffsetsFromUnnamedSymbols; // ivar: _displayOffsetsFromUnnamedSymbols
@property BOOL displayProcessFirstLastTimes;
@property BOOL displayRunnableThreads; // ivar: _displayRunnableThreads
@property BOOL displayRunningThreads; // ivar: _displayRunningThreads
@property BOOL displayStacksWithZeroCount;
@property BOOL displaySub1MsCpuTime;
@property BOOL displaySymbolInformation; // ivar: _displaySymbolInformation
@property BOOL displayTasksWithZeroCount; // ivar: _displayTasksWithZeroCount
@property BOOL displayThreadRunningState; // ivar: _displayThreadRunningState
@property BOOL displayTimestampsInCallTrees;
@property BOOL displayUserFrames; // ivar: _displayUserFrames
@property BOOL forceOneBasedTimeIndexes; // ivar: _forceOneBasedTimeIndexes
@property NSUInteger hidEventDisplayOptions; // ivar: _hidEventDisplayOptions
@property BOOL includeUserIdleAndBatteryStateInStacks; // ivar: _includeUserIdleAndBatteryStateInStacks
@property BOOL microstackshotsFormat;
@property BOOL omitAbsoluteWallTimes; // ivar: _omitAbsoluteWallTimes
@property NSInteger omitFramesAfterLineCount; // ivar: _omitFramesAfterLineCount
@property char omitFramesBelowPercentOfStackSamples; // ivar: _omitFramesBelowPercentOfStackSamples
@property NSInteger omitFramesBelowSampleCount; // ivar: _omitFramesBelowSampleCount
@property int omitStacksAboveBasePriority; // ivar: _omitStacksAboveBasePriority
@property int omitStacksBelowBasePriority; // ivar: _omitStacksBelowBasePriority
@property char omitStacksBelowPercentOfTaskSamples; // ivar: _omitStacksBelowPercentOfTaskSamples
@property NSInteger omitStacksBelowSampleCount; // ivar: _omitStacksBelowSampleCount
@property BOOL omitStacksOnAC; // ivar: _omitStacksOnAC
@property BOOL omitStacksOnBattery; // ivar: _omitStacksOnBattery
@property BOOL omitStacksWithUserActive; // ivar: _omitStacksWithUserActive
@property BOOL omitStacksWithUserIdle; // ivar: _omitStacksWithUserIdle
@property char omitTasksBelowPercentOfTotalSamples; // ivar: _omitTasksBelowPercentOfTotalSamples
@property NSInteger omitTasksBelowSampleCount; // ivar: _omitTasksBelowSampleCount
@property BOOL orderTasksBySampleCount;
@property BOOL patchTruncatedStacks; // ivar: _patchTruncatedStacks
@property (copy) NSSet *pidsToPrint; // ivar: _pidsToPrint
@property BOOL printHeavyStacks; // ivar: _printHeavyStacks
@property BOOL printJson; // ivar: _printJson
@property BOOL printSpinSignatureStack; // ivar: _printSpinSignatureStack
@property BOOL printTargetHIDEvent;
@property BOOL printTargetThreadOnly; // ivar: _printTargetThreadOnly
@property (copy) NSSet *processNamesToPrint; // ivar: _processNamesToPrint
@property (readonly) NSMutableArray *processSortAttributes; // ivar: _processSortAttributes
@property (copy) NSSet *processUUIDsToPrint; // ivar: _processUUIDsToPrint
@property BOOL showThreadStateAsLeafFrame; // ivar: _showThreadStateAsLeafFrame
@property NSUInteger swiftAsyncCallTreeAggregation; // ivar: _swiftAsyncCallTreeAggregation
@property BOOL swiftAsyncDisplayCRootCallstacks; // ivar: _swiftAsyncDisplayCRootCallstacks
@property BOOL swiftAsyncPrintLeafyCCallstackOnTopOfCRootCallstacksAlways; // ivar: _swiftAsyncPrintLeafyCCallstackOnTopOfCRootCallstacksAlways
@property BOOL swiftAsyncPrintLeafyCCallstackOnTopOfSwiftAsyncCallstacksAlways; // ivar: _swiftAsyncPrintLeafyCCallstackOnTopOfSwiftAsyncCallstacksAlways
@property BOOL systemstatsFormat;
@property BOOL tabDelineateBinaryImageSections; // ivar: _tabDelineateBinaryImageSections
@property (copy) NSSet *tidsToPrint; // ivar: _tidsToPrint
@property (copy) NSSet *uniquePidsToPrint; // ivar: _uniquePidsToPrint
@property BOOL verbose;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;


@end


#endif