// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETCONTROL_H
#define MAAUTOASSETCONTROL_H

@class SUCoreConnectClient, NSString;
@protocol SUCoreConnectClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MAAutoAssetControl : NSObject <SUCoreConnectClientDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (retain, nonatomic) SUCoreConnectClient *connectionClient; // ivar: _connectionClient
@property (readonly, nonatomic) NSString *controlClientName; // ivar: _controlClientName
@property (readonly, nonatomic) NSInteger controlClientProcessID; // ivar: _controlClientProcessID
@property (readonly, nonatomic) NSString *controlClientProcessName; // ivar: _controlClientProcessName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)simulateCacheDeleteDetermineReclaimableSpace:(id)arg0 withUrgency:(int)arg1 error:(*id)arg2 ;
+(NSInteger)simulateCacheDeleteReclaimSpace:(id)arg0 withUrgency:(int)arg1 targetingPurgeAmount:(NSInteger)arg2 error:(*id)arg3 ;
+(NSInteger)waitOnSemaphore:(id)arg0 withTimeout:(NSInteger)arg1 ;
+(id)activeJobSummary:(BOOL)arg0 error:(*id)arg1 ;
+(id)activeJobSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 error:(*id)arg2 ;
+(id)assetSelectorOrAllSelector:(id)arg0 ;
+(id)autoAssetControl;
+(id)controlStatistics:(BOOL)arg0 error:(*id)arg1 ;
+(id)defaultDispatchQueue;
+(id)forceGlobalAbandon:(id)arg0 ;
+(id)forceGlobalForget:(id)arg0 ;
+(id)forceGlobalPurge:(id)arg0 forcingUnlock:(BOOL)arg1 ;
+(id)forceGlobalUnlock:(id)arg0 ;
+(id)frameworkDispatchQueue;
+(id)frameworkInstanceUUID;
+(id)knownAssetSummary:(BOOL)arg0 error:(*id)arg1 ;
+(id)knownAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 error:(*id)arg2 ;
+(id)lockedAssetSummary:(BOOL)arg0 error:(*id)arg1 ;
+(id)lockedAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 error:(*id)arg2 ;
+(id)pushNotificationHistory:(BOOL)arg0 error:(*id)arg1 ;
+(id)scheduledJobSummary:(BOOL)arg0 error:(*id)arg1 ;
+(id)scheduledJobSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 error:(*id)arg2 ;
+(id)simulateSetJobOperation:(NSInteger)arg0 withEndEvent:(NSInteger)arg1 forSelector:(id)arg2 ;
+(id)stagedAssetSummary:(BOOL)arg0 error:(*id)arg1 ;
+(id)stagedAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 error:(*id)arg2 ;
+(void)frameworkInstanceSetLogDomain;
-(id)init;
-(void)_activeJobSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 completion:(id)arg2 ;
-(void)_controlStatistics:(BOOL)arg0 completion:(id)arg1 ;
-(void)_failedControl:(id)arg0 withErrorCode:(NSInteger)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id)arg4 ;
-(void)_failedControlLockSummary:(id)arg0 withErrorCode:(NSInteger)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id)arg4 ;
-(void)_failedControlStatistics:(id)arg0 withErrorCode:(NSInteger)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id)arg4 ;
-(void)_failedControlSummary:(id)arg0 withErrorCode:(NSInteger)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id)arg4 ;
-(void)_failedSimulateCacheDeleteOperation:(id)arg0 withErrorCode:(NSInteger)arg1 withResponseError:(id)arg2 description:(id)arg3 completion:(id)arg4 ;
-(void)_forceGlobalAbandon:(id)arg0 completion:(id)arg1 ;
-(void)_forceGlobalForget:(id)arg0 completion:(id)arg1 ;
-(void)_forceGlobalPurge:(id)arg0 forcingUnlock:(BOOL)arg1 completion:(id)arg2 ;
-(void)_forceGlobalUnlock:(id)arg0 completion:(id)arg1 ;
-(void)_knownAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 completion:(id)arg2 ;
-(void)_lockedAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 completion:(id)arg2 ;
-(void)_scheduledJobSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 completion:(id)arg2 ;
-(void)_simulateCacheDeleteDetermineReclaimableSpace:(id)arg0 withUrgency:(int)arg1 error:(*id)arg2 completion:(id)arg3 ;
-(void)_simulateCacheDeleteReclaimSpace:(id)arg0 withUrgency:(int)arg1 targetingPurgeAmount:(NSInteger)arg2 error:(*id)arg3 completion:(id)arg4 ;
-(void)_simulateSetJobOperation:(NSInteger)arg0 withEndEvent:(NSInteger)arg1 forSelector:(id)arg2 completion:(id)arg3 ;
-(void)_stagedAssetSummary:(BOOL)arg0 limitedToAssetTypes:(id)arg1 completion:(id)arg2 ;
-(void)_successControl:(id)arg0 completion:(id)arg1 ;
-(void)_successControlLockSummary:(id)arg0 withLockSummaryEntries:(id)arg1 completion:(id)arg2 ;
-(void)_successControlStatistics:(id)arg0 withControlStatistics:(id)arg1 completion:(id)arg2 ;
-(void)_successControlSummary:(id)arg0 withJobSummaryEntries:(id)arg1 completion:(id)arg2 ;
-(void)_successSimulateCacheDeleteOperation:(id)arg0 withReclaimableSpace:(NSInteger)arg1 completion:(id)arg2 ;
-(void)connectToServerFrameworkCompletion:(id)arg0 ;
-(void)connectionClosed;
-(void)handleMessage:(id)arg0 reply:(id)arg1 ;
-(void)handleResponse:(id)arg0 error:(id)arg1 ;


@end


#endif