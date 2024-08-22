// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDCONTAINER_H
#define CKDCONTAINER_H

@class NSRecursiveLock, CKAccountOverrideInfo, NSString, NSURL, NSOperationQueue, NSArray, NSMutableSet, CKContainerID, CKEntitlements, NSMutableDictionary, CKContainerOptions;
@protocol CKXPCContainerScopedDaemonAPI, CKDContainerScopedUserIDProvider, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDMMCS.h"
#import "CKDAccount.h"
#import "CKDAnonymousSharingManager.h"
#import "CKDAppContainerAccountTuple.h"
#import "CKDAppContainerTuple.h"
#import "CKDApplicationID.h"
#import "CKDPublicIdentityLookupService.h"
#import "CKDLogicalDeviceContext.h"
#import "CKDDirectoryContext.h"
#import "CKDPCSFetchAggregator.h"
#import "CKDZoneGatekeeper.h"
#import "CKDLogicalDeviceScopedClientProxy.h"
#import "CKDPCSCache.h"
#import "CKDPCSManager.h"
#import "CKDProcessScopedClientProxy.h"
#import "CKDIdentityCache.h"
#import "CKDRecordCache.h"
#import "CKDServerConfiguration.h"

@interface CKDContainer : NSObject <CKXPCContainerScopedDaemonAPI, CKDContainerScopedUserIDProvider>



@property (retain, nonatomic) CKDMMCS *MMCS; // ivar: _MMCS
@property (retain, nonatomic) NSObject<NSObject> *TCCDatabaseChangedNotificationObserver; // ivar: _TCCDatabaseChangedNotificationObserver
@property (readonly, nonatomic) CKDAccount *account; // ivar: _account
@property (retain, nonatomic) NSRecursiveLock *accountLock; // ivar: _accountLock
@property (readonly, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, nonatomic) NSInteger adopterProcessType; // ivar: _adopterProcessType
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (retain, nonatomic) CKDAnonymousSharingManager *anonymousSharingManager; // ivar: _anonymousSharingManager
@property (retain, nonatomic) NSRecursiveLock *anonymousSharingManagerLock; // ivar: _anonymousSharingManagerLock
@property (readonly, nonatomic) CKDAppContainerAccountTuple *appContainerAccountTuple;
@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple; // ivar: _appContainerTuple
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForPush;
@property (retain, nonatomic) NSString *applicationDisplayName; // ivar: _applicationDisplayName
@property (readonly) CKDApplicationID *applicationID;
@property (retain, nonatomic) NSURL *applicationIcon; // ivar: _applicationIcon
@property (readonly, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (readonly, nonatomic) NSString *apsEnvironmentString;
@property (readonly, nonatomic) NSString *associatedApplicationBundleID;
@property (retain, nonatomic) NSOperationQueue *backgroundOperationThrottleQueue; // ivar: _backgroundOperationThrottleQueue
@property (retain, nonatomic) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService; // ivar: _backgroundPublicIdentityLookupService
@property NSInteger cachedEnvironment; // ivar: _cachedEnvironment
@property (retain, nonatomic) NSArray *cachedSandboxExtensions; // ivar: _cachedSandboxExtensions
@property (readonly, nonatomic) BOOL canAccessAccount;
@property (readonly, nonatomic) BOOL canAuthWithCloudKit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQueue; // ivar: _cancellationQueue
@property (retain, nonatomic) NSOperationQueue *cleanupOperationQueue; // ivar: _cleanupOperationQueue
@property (retain, nonatomic) NSMutableSet *clientContainers; // ivar: _clientContainers
@property (nonatomic) unsigned int clientSDKVersion; // ivar: _clientSDKVersion
@property (retain, nonatomic) NSOperationQueue *cloudKitSupportOperationThrottleQueue; // ivar: _cloudKitSupportOperationThrottleQueue
@property (readonly, nonatomic) CKContainerID *containerID;
@property (copy) NSString *containerScopedUserID; // ivar: _containerScopedUserID
@property (retain, nonatomic) NSString *containingBundleID; // ivar: _containingBundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (retain, nonatomic) NSRecursiveLock *deviceContextLock; // ivar: _deviceContextLock
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *deviceName;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext; // ivar: _directoryContext
@property (readonly, nonatomic) NSString *encryptionServiceName;
@property (retain, nonatomic) CKEntitlements *entitlements; // ivar: _entitlements
@property (retain, nonatomic) NSMutableDictionary *fakeErrorsByClassName; // ivar: _fakeErrorsByClassName
@property (retain, nonatomic) NSMutableDictionary *fakeResponseOperationLifetimeByClassName; // ivar: _fakeResponseOperationLifetimeByClassName
@property (retain, nonatomic) NSMutableDictionary *fakeResponseOperationResultByClassNameByItemID; // ivar: _fakeResponseOperationResultByClassNameByItemID
@property (retain, nonatomic) CKDPCSFetchAggregator *fetchAggregator; // ivar: _fetchAggregator
@property (retain, nonatomic) NSRecursiveLock *fetchAggregatorLock; // ivar: _fetchAggregatorLock
@property (retain, nonatomic) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService; // ivar: _foregroundPublicIdentityLookupService
@property (retain, nonatomic) CKDZoneGatekeeper *gatekeeper; // ivar: _gatekeeper
@property (retain, nonatomic) NSString *hardwareID; // ivar: _hardwareID
@property (nonatomic) BOOL hasDataContainer; // ivar: _hasDataContainer
@property (readonly, nonatomic) BOOL hasTCCAuthorization;
@property (nonatomic) NSInteger hasTCCAuthorizationTernary; // ivar: _hasTCCAuthorizationTernary
@property (readonly, nonatomic) BOOL hasValidatedEntitlements;
@property (nonatomic) NSInteger hasValidatedEntitlementsTernary; // ivar: _hasValidatedEntitlementsTernary
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable; // ivar: _isClientMainBundleAppleExecutable
@property (nonatomic) BOOL isForClouddInternalUse; // ivar: _isForClouddInternalUse
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, weak, nonatomic) CKDLogicalDeviceScopedClientProxy *logicalDeviceScopedClientProxy; // ivar: _logicalDeviceScopedClientProxy
@property (retain, nonatomic) NSRecursiveLock *mmcsLock; // ivar: _mmcsLock
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSMutableDictionary *operationStatisticsByClassName; // ivar: _operationStatisticsByClassName
@property (retain, nonatomic) CKContainerOptions *options; // ivar: _options
@property (copy) NSString *orgAdminUserID; // ivar: _orgAdminUserID
@property (retain, nonatomic) CKDPCSCache *pcsCache; // ivar: _pcsCache
@property (retain, nonatomic) CKDPCSManager *pcsManager; // ivar: _pcsManager
@property (retain, nonatomic) NSMutableSet *pendingOperationIDs; // ivar: _pendingOperationIDs
@property (readonly, nonatomic) NSString *personaID;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, weak, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy; // ivar: _processScopedClientProxy
@property (copy) NSURL *publicCloudDBURL; // ivar: _publicCloudDBURL
@property (copy) NSURL *publicCodeServiceURL; // ivar: _publicCodeServiceURL
@property (copy) NSURL *publicDeviceServiceURL; // ivar: _publicDeviceServiceURL
@property (retain, nonatomic) CKDIdentityCache *publicIdentitiesDiskCache; // ivar: _publicIdentitiesDiskCache
@property (copy) NSURL *publicMetricsServiceURL; // ivar: _publicMetricsServiceURL
@property (copy) NSURL *publicShareServiceURL; // ivar: _publicShareServiceURL
@property (retain, nonatomic) CKDRecordCache *recordCache; // ivar: _recordCache
@property (readonly, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSString *resolvedAPSEnvironmentString; // ivar: _resolvedAPSEnvironmentString
@property (retain, nonatomic) NSRecursiveLock *sandboxExtensionsLock; // ivar: _sandboxExtensionsLock
@property (retain, nonatomic) CKDServerConfiguration *serverConfig; // ivar: _serverConfig
@property (retain, nonatomic) NSRecursiveLock *serverConfigLock; // ivar: _serverConfigLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // ivar: _statusQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSOperationQueue *tccAuthOpQueue; // ivar: _tccAuthOpQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tccAuthQueue; // ivar: _tccAuthQueue
@property (retain, nonatomic) NSOperationQueue *uncancellableOperationQueue; // ivar: _uncancellableOperationQueue


+(id)applicationDataContainerDirectoryForBundleID:(id)arg0 outApplicationBinaryBundleURL:(*id)arg1 outAdopterProcessType:(*NSInteger)arg2 ;
+(id)containerWithAppContainerAccountTuple:(id)arg0 deviceContext:(id)arg1 sharedContainerTable:(id)arg2 ;
+(id)containerWithAppContainerTuple:(id)arg0 processScopedClientProxy:(id)arg1 logicalDeviceScopedClientProxy:(id)arg2 containerEntitlements:(id)arg3 containerOptions:(id)arg4 sharedContainerTable:(id)arg5 ;
+(id)operationStatusReport:(id)arg0 ;
+(id)sharedClientThrottlingOperationQueue;
+(id)sharedDetachedContainers;
+(id)sharedInternalUseContainers;
+(void)initialize;
-(BOOL)_cloudKitEnabledForCurrentClient;
-(BOOL)_isAdopterAppleInternal;
-(BOOL)_isContainerAuthorizedForOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)_lockedHasTCCAuthorization;
-(BOOL)canOpenFileAtURL:(id)arg0 ;
-(BOOL)isEligibleForBroadcastingToContainer:(id)arg0 ;
-(BOOL)setupAssetTransfers:(*id)arg0 ;
-(BOOL)setupMMCSWrapper:(*id)arg0 ;
-(BOOL)shouldUsePCSEncryption;
-(CGFloat)publicIdentitiesExpirationTimeout;
-(NSInteger)_applicationPermissionStatusFromUserPrivacySetting:(NSInteger)arg0 ;
-(NSUInteger)countAssetCacheItems;
-(NSUInteger)countAssetCacheItemsWithDatabaseScope:(NSInteger)arg0 ;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(id)CKStatusReportArrayIncludingSharedOperations:(BOOL)arg0 ;
-(id)_eligibleConnectedContainersForOOPUIContainer;
-(id)_initWithAppContainerTuple:(id)arg0 processScopedClientProxy:(id)arg1 logicalDeviceScopedClientProxy:(id)arg2 containerEntitlements:(id)arg3 containerOptions:(id)arg4 ;
-(id)_urlBySettingCustomBaseURL:(id)arg0 onURL:(id)arg1 ;
-(id)baseURLForServerType:(NSInteger)arg0 partitionType:(NSInteger)arg1 ;
-(id)callbackProxyForOperation:(id)arg0 clientProvidedCallbackProxy:(id)arg1 ;
-(id)containerForOperationInfo:(id)arg0 ;
-(id)getFileMetadataWithFileHandle:(id)arg0 openInfo:(id)arg1 error:(*id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)openFileWithOpenInfo:(id)arg0 error:(*id)arg1 ;
-(id)possiblyWrappedAuthTokenErrorGivenError:(id)arg0 ;
-(id)readBytesOfInMemoryAssetContentWithUUID:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)sandboxExtensions;
-(void)_broadcastUpdateIfNeededForRecord:(id)arg0 recordXPCMetadata:(id)arg1 recordID:(id)arg2 isDeleted:(BOOL)arg3 error:(id)arg4 ;
-(void)_clearCaches;
-(void)_determineHardwareInfo;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg0 ;
-(void)_fetchContainerServerInfoForOperation:(id)arg0 requireUserIDs:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_globalStatusForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_handleCompletionForOperation:(id)arg0 initialMessageReplyBlock:(id)arg1 ;
// -(void)_handleCompletionForOperation:(id)arg0 initialMessageReplyBlock:(id)arg1 customCompletionBlock:(unk)arg2  ;
-(void)_loadApplicationContainerPathAndType;
-(void)_lockedSetHasTCCAuthorizationTernary:(NSInteger)arg0 ;
-(void)_performCodeFunctionInvokeOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 block:(id)arg2 ;
-(void)_performFetchCurrentUserRecordOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)_reallyPerformFetchRecordsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)_reloadAccount:(BOOL)arg0 ;
-(void)_setApplicationPermission:(NSUInteger)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_setupOperationQueues;
-(void)_writeAdopterMetadataToCache;
-(void)accountInfoWithCompletionHandler:(id)arg0 ;
-(void)addOperation:(id)arg0 clientProvidedCallbackProxy:(id)arg1 ;
-(void)addThrottle:(id)arg0 ;
-(void)cancelAllOperations;
-(void)cancelOperationWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearAssetCache;
-(void)clearRecordCache;
-(void)dealloc;
-(void)displayInfoOnAccountWithCompletionHandler:(id)arg0 ;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)enqueueOperation:(id)arg0 clientProvidedCallbackProxy:(id)arg1 initialMessageReplyBlock:(id)arg2 ;
-(void)enumerateClientContainers:(id)arg0 ;
-(void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id)arg0 ;
-(void)fetchConfigurationForOperation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchImportantUserIDsForOperation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchLongLivedOperationsWithIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchPrivateURLForServerType:(NSInteger)arg0 operation:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchPublicURLForServerType:(NSInteger)arg0 operation:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchServerEnvironmentForOperation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchXPCCriteriaWithCompletionHandler:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)handleSignificantIssueBehavior:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)importantUserIDsWithCompletionHandler:(id)arg0 ;
-(void)linkWithClientContainer:(id)arg0 ;
-(void)performAcceptSharesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performCodeFunctionInvokeOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performCodeOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performDiscoverAllUserIdentitiesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performDiscoverUserIdentitiesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchDatabaseChangesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchNotificationChangesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRecordChangesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRecordZoneChangesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRecordZonesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRecordsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchShareMetadataOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchShareParticipantsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchSubscriptionsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchWebAuthTokenOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performMapShareURLsToInstalledBundleIDsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performMarkNotificationsReadOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifyBadgeOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifyRecordZonesOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifyRecordsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifySubscriptionsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performMovePhotosOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performQueryOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performRequest:(id)arg0 ;
-(void)reloadAccountWithCompletionHandler:(id)arg0 ;
-(void)requestApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetThrottles;
-(void)setContainerAvailable:(BOOL)arg0 ;
-(void)showAssetCache;
-(void)statusForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)submitClientEventMetric:(id)arg0 completeWhenQueued:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)suggestedMergeableDeltaSizeWithCompletionHandler:(id)arg0 ;
-(void)tearDown;
-(void)tearDownAssetTransfers;


@end


#endif