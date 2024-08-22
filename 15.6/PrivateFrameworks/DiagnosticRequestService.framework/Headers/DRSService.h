// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSERVICE_H
#define DRSSERVICE_H

@class NSMutableDictionary, NSPersistentContainer;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "DRSCKConfig.h"
#import "DRSCKConfigStore.h"
#import "DRSCloudKitHelper.h"
#import "DRSDampeningManager.h"
#import "DRSTaskingManager.h"

@interface DRSService : NSObject

@property (readonly, nonatomic) DRSCKConfig *ckConfig; // ivar: _ckConfig
@property (readonly, nonatomic) DRSCKConfigStore *ckConfigStore; // ivar: _ckConfigStore
@property (readonly, nonatomic) DRSCloudKitHelper *ckHelper; // ivar: _ckHelper
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudKitQueue; // ivar: _cloudKitQueue
@property (readonly, nonatomic) NSMutableDictionary *connectionToState; // ivar: _connectionToState
@property (readonly, nonatomic) DRSDampeningManager *dampeningManager; // ivar: _dampeningManager
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSUInteger maxSingleSessionUploadSizeInBytes; // ivar: _maxSingleSessionUploadSizeInBytes
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // ivar: _messageQueue
@property (readonly, nonatomic) NSUInteger monthlyUploadQuotaBytes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *postReceiptWorkQueue; // ivar: _postReceiptWorkQueue
@property (readonly, nonatomic) NSObject<OS_xpc_object> *serviceConnection; // ivar: _serviceConnection
@property (readonly, nonatomic) NSPersistentContainer *serviceContainer; // ivar: _serviceContainer
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem; // ivar: _serviceDeactivatedSem
@property (readonly, nonatomic) unsigned char state; // ivar: _state
@property (readonly, nonatomic) DRSTaskingManager *taskingManager; // ivar: _taskingManager


+(BOOL)serviceIsEnabled;
+(NSUInteger)uploadSessionUploadCapBytes;
+(id)configurationDirectory;
+(id)databaseDirectory;
+(id)fileDirectory;
+(id)sharedInstance;
+(id)teamConfigurationDirectory;
-(BOOL)_connectionHasEntitlement:(id)arg0 ;
-(BOOL)_enableDataGatheringQueryPassesRandomRejection;
-(BOOL)_persistEnableLogGatheringResult:(id)arg0 workingContext:(id)arg1 ;
-(BOOL)_saveDampeningManagerErrorOut:(*id)arg0 ;
-(BOOL)activateService;
-(CGFloat)_resolvedEnableDataGatheringQueryAcceptanceRate;
-(NSUInteger)_remainingMonthlyUploadQuotaBytesWithContext:(id)arg0 ;
-(NSUInteger)_remainingSessionUploadQuotaBytesWithContext:(id)arg0 ;
-(id)_cachedMatchingQuery:(id)arg0 workingContext:(id)arg1 ;
-(id)_updateCKConfig:(id)arg0 ;
-(id)init;
-(void)_addCKConfigSettingsToReplyMessage:(id)arg0 ;
-(void)_addRequestToDAFileList:(id)arg0 ;
-(void)_ckQueueDownstreamOnly_uploadInFlightWithTransaction:(id)arg0 xpcActivity:(id)arg1 ckHelper:(id)arg2 isExpedited:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)_ckQueueOnly_submitOutstandingEnableDataGatheringQueriesWithTransaction:(id)arg0 xpcActivity:(id)arg1 ckHelper:(id)arg2 followupWorkBlock:(id)arg3 ;
-(void)_configureExpeditedUploadXPCActivity;
-(void)_configureReportStatsXPCActivity;
-(void)_configureUploadXPCActivity;
-(void)_configureXPCActivities;
-(void)_finishReportingStatsSessionWithActivity:(id)arg0 withState:(NSInteger)arg1 transaction:(id)arg2 endResultString:(id)arg3 ;
-(void)_finishUploadSessionWithActivity:(id)arg0 withState:(NSInteger)arg1 isExpedited:(BOOL)arg2 transaction:(id)arg3 completedSuccessfully:(BOOL)arg4 endResultString:(id)arg5 completionBlock:(id)arg6 ;
-(void)_handleCKConfigUpdate:(id)arg0 state:(id)arg1 ;
-(void)_handleCKWorkTriggerRequest:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleDRSRequestMessage:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleDampeningConfigurationDictMessage:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleDampeningConfigurationGlobalEnablementMessage:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleDampeningConfigurationReset:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleEnableLogGatheringRequest:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleGetCKConfig:(id)arg0 state:(id)arg1 ;
-(void)_handleInjectEnableLogGatheringRequestResult:(id)arg0 state:(id)arg1 ;
-(void)_handleNewEntitledConnection:(id)arg0 state:(id)arg1 ;
-(void)_handleRefreshDampeningConfigMessage:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_handleRequestCleanTrigger:(id)arg0 state:(id)arg1 ;
-(void)_handleResetCKConfig:(id)arg0 state:(id)arg1 ;
-(void)_postReceiptProcessingWork:(id)arg0 wasAccepted:(BOOL)arg1 ;
-(void)_rejectInjectRequest:(id)arg0 state:(id)arg1 reason:(char *)arg2 ;
-(void)_replyToCKConfigMessageWithCurrentCKConfig:(id)arg0 ;
-(void)_runCloudKitUploadWorkSessionWithTransaction:(id)arg0 xpcActivity:(id)arg1 isExpedited:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)_runReportingSessionWithTransaction:(id)arg0 xpcActivity:(id)arg1 ;
-(void)_sendAdminRequestReply:(BOOL)arg0 rejectionReason:(char *)arg1 requestMessage:(id)arg2 ;
-(void)_sendCurrentConfigurationToConnection:(id)arg0 ;
-(void)_sendRejectionMessage:(id)arg0 rejectionReason:(NSUInteger)arg1 state:(id)arg2 ;
-(void)_waitForDeviceUnlockAndInitializeServiceState;
-(void)deactivateService;
-(void)dealloc;
-(void)handleRequest:(id)arg0 state:(id)arg1 ;


@end


#endif