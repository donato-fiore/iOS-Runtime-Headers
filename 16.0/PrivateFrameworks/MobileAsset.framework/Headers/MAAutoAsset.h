// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSET_H
#define MAAUTOASSET_H

@class NSDictionary, NSString, SUCoreConnectClient, NSURL;
@protocol SUCoreConnectClientDelegate, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"

@interface MAAutoAsset : NSObject <SUCoreConnectClientDelegate, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetAttributes; // ivar: _assetAttributes
@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector; // ivar: _assetSelector
@property (readonly, nonatomic) NSString *autoAssetClientName; // ivar: _autoAssetClientName
@property (readonly, nonatomic) NSInteger clientProcessID; // ivar: _clientProcessID
@property (readonly, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (retain, nonatomic) SUCoreConnectClient *connectionClient; // ivar: _connectionClient
@property (retain, nonatomic) NSString *contentLockedReason; // ivar: _contentLockedReason
@property (retain, nonatomic) MAAutoAssetSelector *contentLockedSelector; // ivar: _contentLockedSelector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *localContentURL; // ivar: _localContentURL
@property (nonatomic) int locksOfContent; // ivar: _locksOfContent
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *updateCategoryDesiredByClient; // ivar: _updateCategoryDesiredByClient


+(BOOL)supportsSecureCoding;
+(NSInteger)waitOnSemaphore:(id)arg0 withDaemonTriggeredTimeout:(NSInteger)arg1 ;
+(NSUInteger)stageDownloadAllSync:(NSInteger)arg0 assetsSuccessfullyStaged:(*NSInteger)arg1 error:(*id)arg2 reportingProgress:(id)arg3 ;
+(id)assetSelectorForAssetTargetOSVersion:(id)arg0 forTargetBuildVersion:(id)arg1 ;
+(id)defaultDispatchQueue;
+(id)determineIfAvailableSync:(id)arg0 forAssetSelector:(id)arg1 discoveredAttributes:(*id)arg2 error:(*id)arg3 ;
+(id)eliminateAllForAssetTypeSync:(id)arg0 ;
+(id)eliminateAllForSelectorSync:(id)arg0 ;
+(id)eliminatePromotedNeverLockedForSelectorSync:(id)arg0 ;
+(id)endAllPreviousLocksOfReasonSync:(id)arg0 forAssetSelector:(id)arg1 ;
+(id)endAllPreviousLocksOfReasonSync:(id)arg0 forClientName:(id)arg1 forAssetSelector:(id)arg2 ;
+(id)endAllPreviousLocksOfSelectorSync:(id)arg0 ;
+(id)endAllPreviousLocksOfSelectorSync:(id)arg0 forClientName:(id)arg1 ;
+(id)endPreviousLocksOfReasonSync:(id)arg0 forAssetSelector:(id)arg1 removingLockCount:(NSInteger)arg2 ;
+(id)endPreviousLocksOfReasonSync:(id)arg0 forClientName:(id)arg1 forAssetSelector:(id)arg2 removingLockCount:(NSInteger)arg3 ;
+(id)frameworkDispatchQueue;
+(id)frameworkInstanceUUID;
+(id)interestInContentSync:(id)arg0 forAssetSelector:(id)arg1 ;
+(id)interestInContentSync:(id)arg0 forAssetSelector:(id)arg1 withInterestPolicy:(id)arg2 ;
+(id)stageDetermineAllAvailableSync:(id)arg0 forTargetBuildVersion:(id)arg1 totalExpectedBytes:(*NSUInteger)arg2 error:(*id)arg3 ;
+(id)stagePurgeAllSync;
+(void)determineIfAvailable:(id)arg0 forAssetSelector:(id)arg1 completion:(id)arg2 ;
+(void)eliminateAllForAssetType:(id)arg0 completion:(id)arg1 ;
+(void)eliminateAllForSelector:(id)arg0 completion:(id)arg1 ;
+(void)eliminatePromotedNeverLockedForSelector:(id)arg0 completion:(id)arg1 ;
+(void)endAllPreviousLocksOfReason:(id)arg0 forAssetSelector:(id)arg1 completion:(id)arg2 ;
+(void)endAllPreviousLocksOfReason:(id)arg0 forClientName:(id)arg1 forAssetSelector:(id)arg2 completion:(id)arg3 ;
+(void)endAllPreviousLocksOfSelector:(id)arg0 completion:(id)arg1 ;
+(void)endAllPreviousLocksOfSelector:(id)arg0 forClientName:(id)arg1 completion:(id)arg2 ;
+(void)endPreviousLocksOfReason:(id)arg0 forAssetSelector:(id)arg1 removingLockCount:(NSInteger)arg2 completion:(id)arg3 ;
+(void)endPreviousLocksOfReason:(id)arg0 forClientName:(id)arg1 forAssetSelector:(id)arg2 removingLockCount:(NSInteger)arg3 completion:(id)arg4 ;
+(void)frameworkInstanceSetLogDomain;
+(void)interestInContent:(id)arg0 forAssetSelector:(id)arg1 completion:(id)arg2 ;
+(void)interestInContent:(id)arg0 forAssetSelector:(id)arg1 withInterestPolicy:(id)arg2 completion:(id)arg3 ;
+(void)stageDetermineAllAvailable:(id)arg0 forTargetBuildVersion:(id)arg1 completion:(id)arg2 ;
// +(void)stageDownloadAll:(NSInteger)arg0 reportingProgress:(id)arg1 completion:(unk)arg2  ;
+(void)stagePurgeAll:(id)arg0 ;
-(NSUInteger)_stageDownloadAllSync:(NSInteger)arg0 assetsSuccessfullyStaged:(*NSInteger)arg1 error:(*id)arg2 reportingProgress:(id)arg3 ;
-(id)_eliminateAllForAssetTypeSync;
-(id)_eliminateAllForSelectorSync;
-(id)_eliminatePromotedNeverLockedForSelectorSync;
-(id)_endAllPreviousLocksOfReasonSync:(id)arg0 ;
-(id)_endPreviousLocksOfReasonSync:(id)arg0 removingLockCount:(NSInteger)arg1 ;
-(id)_newProxyObjectForLockProgressBlock:(id)arg0 ;
-(id)_newProxyObjectForStageProgressBlock:(id)arg0 ;
-(id)_stageDetermineAllAvailableSync:(id)arg0 forTargetBuildVersion:(id)arg1 totalExpectedBytes:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)_stagePurgeAllSync;
-(id)assetAttribute:(id)arg0 ;
-(id)checkForNewerSync:(id)arg0 withTimeout:(NSInteger)arg1 discoveredAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)checkForNewerSync:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 discoveredAttributes:(*id)arg3 error:(*id)arg4 ;
-(id)continueLockUsageSync:(id)arg0 ;
-(id)continueLockUsageSync:(id)arg0 withUsagePolicy:(id)arg1 ;
-(id)currentStatusSync:(*id)arg0 ;
-(id)determineIfAvailableSync:(id)arg0 withTimeout:(NSInteger)arg1 discoveredAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)endLockUsageSync:(id)arg0 ;
-(id)initForClientName:(id)arg0 selectingAsset:(id)arg1 completingFromQueue:(id)arg2 error:(*id)arg3 ;
-(id)initForClientName:(id)arg0 selectingAsset:(id)arg1 error:(*id)arg2 ;
-(id)initForClientName:(id)arg0 selectingAsset:(id)arg1 usingDesiredPolicyCategory:(id)arg2 completingFromQueue:(id)arg3 error:(*id)arg4 ;
-(id)initForClientName:(id)arg0 selectingAsset:(id)arg1 usingDesiredPolicyCategory:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)interestInContentSync:(id)arg0 ;
-(id)interestInContentSync:(id)arg0 withInterestPolicy:(id)arg1 ;
-(id)lockContentSync:(id)arg0 withTimeout:(NSInteger)arg1 lockedAssetSelector:(*id)arg2 newerInProgress:(*id)arg3 error:(*id)arg4 ;
-(id)lockContentSync:(id)arg0 withTimeout:(NSInteger)arg1 lockedAssetSelector:(*id)arg2 newerInProgress:(*id)arg3 error:(*id)arg4 reportingProgress:(id)arg5 ;
-(id)lockContentSync:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 lockedAssetSelector:(*id)arg3 newerInProgress:(*id)arg4 error:(*id)arg5 ;
-(id)lockContentSync:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 lockedAssetSelector:(*id)arg3 newerInProgress:(*id)arg4 error:(*id)arg5 reportingProgress:(id)arg6 ;
-(id)summary;
-(void)_eliminateAllForAssetType:(id)arg0 ;
-(void)_eliminateAllForSelector:(id)arg0 ;
-(void)_eliminatePromotedNeverLockedForSelector:(id)arg0 ;
-(void)_endAllPreviousLocksOfReason:(id)arg0 completion:(id)arg1 ;
-(void)_endPreviousLocksOfReason:(id)arg0 removingLockCount:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_failedCheckForNewer:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedContinueLockUsage:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedCurrentStatus:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedDetermineIfAvailable:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedEliminate:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedEndLockUsage:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedInterestInContent:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedLockContent:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedStageDetermineAllAvailable:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedStageDownloadAll:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_failedStagePurgeAll:(NSInteger)arg0 withResponseError:(id)arg1 description:(id)arg2 completion:(id)arg3 ;
-(void)_lockContentStatusProgress:(id)arg0 lockForUseError:(id)arg1 progressBlock:(id)arg2 ;
-(void)_stageDetermineAllAvailable:(id)arg0 forTargetBuildVersion:(id)arg1 completion:(id)arg2 ;
// -(void)_stageDownloadAll:(NSInteger)arg0 reportingProgress:(id)arg1 completion:(unk)arg2  ;
-(void)_stageDownloadAllStatusProgress:(id)arg0 stageProgressError:(id)arg1 progressBlock:(id)arg2 ;
-(void)_stagePurgeAll:(id)arg0 ;
-(void)_successCheckForNewer:(id)arg0 completion:(id)arg1 ;
-(void)_successContinueLockUsage:(id)arg0 completion:(id)arg1 ;
-(void)_successCurrentStatus:(id)arg0 completion:(id)arg1 ;
-(void)_successDetermineIfAvailable:(id)arg0 completion:(id)arg1 ;
-(void)_successEliminate:(id)arg0 ;
-(void)_successEndLockUsage:(id)arg0 completion:(id)arg1 ;
-(void)_successInterestInContent:(id)arg0 completion:(id)arg1 ;
-(void)_successLockContent:(id)arg0 dueToDesire:(id)arg1 completion:(id)arg2 ;
-(void)_successStageDetermineAllAvailable:(id)arg0 completion:(id)arg1 ;
-(void)_successStageDownloadAll:(id)arg0 completion:(id)arg1 ;
-(void)_successStagePurgeAll:(id)arg0 ;
-(void)checkForNewer:(id)arg0 withTimeout:(NSInteger)arg1 completion:(id)arg2 ;
-(void)checkForNewer:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 completion:(id)arg3 ;
-(void)connectToServerFrameworkCompletion:(id)arg0 ;
-(void)connectionClosed;
-(void)continueLockUsage:(id)arg0 completion:(id)arg1 ;
-(void)continueLockUsage:(id)arg0 withUsagePolicy:(id)arg1 completion:(id)arg2 ;
-(void)currentStatus:(id)arg0 ;
-(void)determineIfAvailable:(id)arg0 withTimeout:(NSInteger)arg1 completion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endLockUsage:(id)arg0 completion:(id)arg1 ;
-(void)handleMessage:(id)arg0 reply:(id)arg1 ;
-(void)handleResponse:(id)arg0 error:(id)arg1 ;
-(void)interestInContent:(id)arg0 completion:(id)arg1 ;
-(void)interestInContent:(id)arg0 withInterestPolicy:(id)arg1 completion:(id)arg2 ;
-(void)lockContent:(id)arg0 withTimeout:(NSInteger)arg1 completion:(id)arg2 ;
// -(void)lockContent:(id)arg0 withTimeout:(NSInteger)arg1 reportingProgress:(id)arg2 completion:(unk)arg3  ;
-(void)lockContent:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 completion:(id)arg3 ;
// -(void)lockContent:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 reportingProgress:(id)arg3 completion:(unk)arg4  ;


@end


#endif