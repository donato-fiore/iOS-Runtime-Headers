// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYDIAGNOSTICSMANAGER_H
#define HMDACCESSORYDIAGNOSTICSMANAGER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMDNetworkRouterFirewallRuleManagerClient, HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDAccessoryDiagnosticsSession.h"
#import "HMDService.h"
#import "HMDAccessoryDiagnosticsSettings.h"

@interface HMDAccessoryDiagnosticsManager : HMFObject <HMDNetworkRouterFirewallRuleManagerClient, HMFLogging, HMFMessageReceiver>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier
@property BOOL cloudFetchCompleted; // ivar: _cloudFetchCompleted
@property BOOL cloudFetchInProgress; // ivar: _cloudFetchInProgress
@property (retain) HMDAccessoryDiagnosticsSession *currentDiagnosticsSession; // ivar: _currentDiagnosticsSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) HMDService *diagnosticsService; // ivar: _diagnosticsService
@property (retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings; // ivar: _diagnosticsSettings
@property BOOL didShutDown; // ivar: _didShutDown
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isRequestSupported:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 service:(id)arg1 msgDispatcher:(id)arg2 workQueue:(id)arg3 ;
-(id)logIdentifier;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg0 ;
-(void)__fetchCloudDiagnosticsMetadataForAccessory:(id)arg0 completion:(id)arg1 ;
// -(void)_callCompletionHandler:(id)arg0 diagnostics:(unk)arg1 error:(id)arg2  ;
-(void)_clearCurrentDiagnosticsSession:(id)arg0 ;
-(void)_fetchCloudDiagnosticsMetadata;
-(void)_fetchModelDiagnosticsMetadataForAccessory:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleDiagnosticsTransferRequest:(id)arg0 ;
-(void)_handleDiagnosticsTransferRequestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)_invalidateCloudDiagnosticsMetadata;
-(void)_notifyClientsOfDiagnosticsTransferSupportUpdated;
-(void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(BOOL)arg0 completion:(id)arg1 ;
-(void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(id)arg0 ;
-(void)_registerForMessagesAndNotifications;
-(void)_shutDown;
-(void)_start;
-(void)_updateDiagnosticSettings;
-(void)dealloc;
-(void)handleAccessoryConfiguredNotification:(id)arg0 ;
-(void)handleCharacteristicValueUpdatedNotification:(id)arg0 ;
-(void)handleCharacteristicsUpdatedNotification:(id)arg0 ;
-(void)shutDown;
-(void)start;


@end


#endif