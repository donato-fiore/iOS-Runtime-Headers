// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDCONFIGURATIONSTORE_H
#define FPDCONFIGURATIONSTORE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FPDConfigurationStore : NSObject

@property (readonly, nonatomic) int errorGenerationUpdateSeconds; // ivar: _errorGenerationUpdateSeconds
@property (readonly, nonatomic) int fseventProcessBatchSize; // ivar: _fseventProcessBatchSize
@property (readonly, nonatomic) CGFloat fseventsAggregationDelay; // ivar: _fseventsAggregationDelay
@property (readonly, nonatomic) BOOL hangingDownloadCancellationPromptEnabled; // ivar: _hangingDownloadCancellationPromptEnabled
@property (readonly, nonatomic) int hardConcurrentContentUpdateLimit; // ivar: _hardConcurrentContentUpdateLimit
@property (readonly, nonatomic) int hardConcurrentOperationLimit; // ivar: _hardConcurrentOperationLimit
@property (readonly, nonatomic) int hardConcurrentProvideFileLimit; // ivar: _hardConcurrentProvideFileLimit
@property (readonly, nonatomic) BOOL hasUpcallExecutionTimeLimits; // ivar: _hasUpcallExecutionTimeLimits
@property (readonly, nonatomic) int lowPrioritySignalProviderChangesIntervalSeconds; // ivar: _lowPrioritySignalProviderChangesIntervalSeconds
@property (readonly, nonatomic) int maxFPCKDatabaseChecks; // ivar: _maxFPCKDatabaseChecks
@property (readonly, nonatomic) int maxFSEventQueueSize; // ivar: _maxFSEventQueueSize
@property (readonly, nonatomic) int maxLookupDepth; // ivar: _maxLookupDepth
@property (readonly, nonatomic) int pendingSetMaxItemCount; // ivar: _pendingSetMaxItemCount
@property (readonly, nonatomic) CGFloat pendingSetRefreshInterval; // ivar: _pendingSetRefreshInterval
@property (readonly, nonatomic) int pendingSetRegatherThreshold; // ivar: _pendingSetRegatherThreshold
@property (readonly, nonatomic) int perfTelemetrySubSamplingPercentage; // ivar: _perfTelemetrySubSamplingPercentage
@property (readonly, nonatomic) int softConcurrentContentUpdateLimit; // ivar: _softConcurrentContentUpdateLimit
@property (readonly, nonatomic) int softConcurrentOperationLimit; // ivar: _softConcurrentOperationLimit
@property (readonly, nonatomic) int softConcurrentProvideFileLimit; // ivar: _softConcurrentProvideFileLimit
@property (readonly, nonatomic) int sqlDatabaseBatchChangeCount; // ivar: _sqlDatabaseBatchChangeCount
@property (readonly, nonatomic) CGFloat sqlDatabaseBatchDelay; // ivar: _sqlDatabaseBatchDelay
@property (readonly, nonatomic) int sqlDatabaseFlushIntervalMilliseconds; // ivar: _sqlDatabaseFlushIntervalMilliseconds
@property (readonly, nonatomic) int sqlDatabaseOnNextDurableFlushTriggerThreshold; // ivar: _sqlDatabaseOnNextDurableFlushTriggerThreshold
@property (readonly, nonatomic) int sqlDatabaseStatementCacheMaxCount; // ivar: _sqlDatabaseStatementCacheMaxCount
@property (readonly, nonatomic) int sqlDatabaseVacuumBatchSize; // ivar: _sqlDatabaseVacuumBatchSize
@property (readonly, nonatomic) BOOL trialClientLoadedSuccessfully; // ivar: _trialClientLoadedSuccessfully
@property (readonly, nonatomic) NSString *trialExperiment; // ivar: _trialExperiment
@property (readonly, nonatomic) int trialTestFactor; // ivar: _trialTestFactor
@property (readonly, nonatomic) NSString *trialTreatment; // ivar: _trialTreatment
@property (readonly, nonatomic) CGFloat upcallExcutionTimeLimitProgressCancellationGracePeriod; // ivar: _upcallExcutionTimeLimitProgressCancellationGracePeriod
@property (readonly, nonatomic) CGFloat upcallExcutionTimeLimitStaleProgress; // ivar: _upcallExcutionTimeLimitStaleProgress
@property (readonly, nonatomic) CGFloat upcallExecutionTimeLimitBase; // ivar: _upcallExecutionTimeLimitBase
@property (readonly, nonatomic) CGFloat upcallExecutionTimeLimitPerKiloByte; // ivar: _upcallExecutionTimeLimitPerKiloByte
@property (readonly, nonatomic) NSArray *userPackageExtensions; // ivar: _userPackageExtensions
@property (readonly, nonatomic) int vfsDirectoryListerLimit; // ivar: _vfsDirectoryListerLimit


+(id)defaultStore;
+(void)__test_only_reloadDefaultStore;
-(id)init;


@end


#endif