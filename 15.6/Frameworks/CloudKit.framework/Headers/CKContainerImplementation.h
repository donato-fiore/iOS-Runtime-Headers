// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTAINERIMPLEMENTATION_H
#define CKCONTAINERIMPLEMENTATION_H

@class NSString, NSOperationQueue, NSMutableArray, NSLock, NSXPCConnection, NSNumber;
@protocol CKXPCContainerScopedClient, CKXPCContainerScopedDaemon, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"
#import "CKAccountOverrideInfo.h"
#import "CKContainerSetupInfo.h"
#import "CKContainerID.h"
#import "CKOperationFlowControlManager.h"
#import "CKContainerOptions.h"
#import "CKDatabaseImplementation.h"
#import "CKEntitlements.h"
#import "CKContainer.h"
#import "CKUploadRequestManager.h"

@interface CKContainerImplementation : NSObject <CKXPCContainerScopedClient>

 {
    CKRecordID *_containerScopedUserID_locked;
    CKRecordID *_orgAdminUserID_locked;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    BOOL _hasValidContainerScopedDaemonProxyCreator;
    BOOL _hasValidDiscretionaryXPCConnection;
    NSOperationQueue *_convenienceOperationQueue;
    id<CKXPCContainerScopedDaemon> *_containerScopedDaemonProxyCreator;
    id<NSObject> *_connectionInterruptedObserver;
    NSMutableArray *_sandboxExtensionHandles;
    NSUInteger _stateHandle;
    CKAccountOverrideInfo *_accountOverrideInfo;
    NSLock *_daemonConnectionLock;
}


@property (retain, nonatomic) NSOperationQueue *backgroundThrottlingOperationQueue; // ivar: _backgroundThrottlingOperationQueue
@property (retain, nonatomic) CKContainerSetupInfo *cachedSetupInfo; // ivar: _cachedSetupInfo
@property (nonatomic) BOOL captureResponseHTTPHeaders; // ivar: _captureResponseHTTPHeaders
@property (retain, nonatomic) NSMutableArray *codeServiceImplementations; // ivar: _codeServiceImplementations
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) CKRecordID *containerScopedUserID;
@property (readonly, nonatomic) NSOperationQueue *convenienceOperationQueue;
@property (retain, nonatomic) NSOperationQueue *discretionaryThrottlingOperationQueue; // ivar: _discretionaryThrottlingOperationQueue
@property (retain, nonatomic) NSXPCConnection *discretionaryXPCConnection; // ivar: _discretionaryXPCConnection
@property (retain, nonatomic) NSNumber *fakeDeviceToDeviceEncryptionAvailability; // ivar: _fakeDeviceToDeviceEncryptionAvailability
@property (retain, nonatomic) CKOperationFlowControlManager *flowControlManager; // ivar: _flowControlManager
@property (nonatomic) BOOL hasCachedSetupInfo; // ivar: _hasCachedSetupInfo
@property (copy, nonatomic) CKContainerOptions *options; // ivar: _options
@property (retain, nonatomic) CKRecordID *orgAdminUserID;
@property (retain, nonatomic) CKDatabaseImplementation *organizationCloudDatabaseImplementation; // ivar: _organizationCloudDatabaseImplementation
@property (copy, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (retain, nonatomic) CKDatabaseImplementation *privateCloudDatabaseImplementation; // ivar: _privateCloudDatabaseImplementation
@property (retain, nonatomic) CKDatabaseImplementation *publicCloudDatabaseImplementation; // ivar: _publicCloudDatabaseImplementation
@property (retain, nonatomic) CKEntitlements *resolvedEntitlements; // ivar: _resolvedEntitlements
@property (retain, nonatomic) CKDatabaseImplementation *sharedCloudDatabaseImplementation; // ivar: _sharedCloudDatabaseImplementation
@property (nonatomic) int statusReportToken; // ivar: _statusReportToken
@property (retain, nonatomic) NSOperationQueue *throttlingOperationQueue; // ivar: _throttlingOperationQueue
@property (weak, nonatomic) CKContainer *unconfiguredWrappingContainer; // ivar: _unconfiguredWrappingContainer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue; // ivar: _underlyingDispatchQueue
@property (readonly, nonatomic) CKUploadRequestManager *uploadRequestManager; // ivar: _uploadRequestManager


+(void)initialize;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(id)_discretionaryDaemonMachServiceConnection;
-(id)applicationBundleIdentifierForPush;
-(id)codeServiceImplementationWithName:(id)arg0 ;
-(id)codeServiceImplementationWithName:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(id)codeServiceImplementationWithName:(id)arg0 databaseScope:(NSInteger)arg1 serviceInstanceURL:(id)arg2 ;
-(id)codeServiceImplementationWithName:(id)arg0 serviceInstanceURL:(id)arg1 ;
-(id)description;
-(id)deviceContext;
-(id)initWithContainerID:(id)arg0 options:(id)arg1 unconfiguredWrappingContainer:(id)arg2 ;
-(id)primaryIdentifier;
-(id)serverPreferredPushEnvironmentWithError:(*id)arg0 ;
-(id)setupInfo;
-(id)sourceApplicationBundleIdentifier;
-(id)sourceApplicationSecondaryIdentifier;
-(id)untrustedEntitlements;
-(void)_scheduleConvenienceOperation:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 ;
-(void)_submitEventMetric:(id)arg0 completionHandler:(id)arg1 ;
-(void)acceptShareMetadata:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)accountInfoWithCompletionHandler:(id)arg0 ;
-(void)accountStatusWithCompletionHandler:(id)arg0 ;
-(void)addOperation:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 ;
-(void)cancelUploadRequests;
-(void)clearContainerFromMetadataCache;
-(void)clearPILSCacheForLookupInfos:(id)arg0 ;
-(void)consumeSandboxExtensions:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)decryptPersonalInfoOnShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)discoverAllIdentitiesWithWrappingContainer:(id)arg0 convenienceConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)discoverUserIdentityWithEmailAddress:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)discoverUserIdentityWithPhoneNumber:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)discoverUserIdentityWithUserRecordID:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)dropDetachedContainersWithCompletionHandler:(id)arg0 ;
-(void)dumpDaemonStatusReport;
-(void)dumpDaemonStatusReportToFileHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id)arg0 ;
-(void)fetchCurrentDeviceIDWithCompletionHandler:(id)arg0 ;
-(void)fetchCurrentUserBoundaryKeyWithCompletionHandler:(id)arg0 ;
-(void)fetchFrameworkCachesDirectoryWithCompletionHandler:(id)arg0 ;
-(void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id)arg0 ;
-(void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id)arg0 ;
-(void)fetchLongLivedOperationWithID:(id)arg0 wrappingContainer:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id)arg0 ;
-(void)fetchServerEnvironment:(id)arg0 ;
-(void)fetchShareMetadataWithURL:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchShareParticipantWithEmailAddress:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchShareParticipantWithLookupInfo:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchShareParticipantWithPhoneNumber:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchShareParticipantWithUserRecordID:(id)arg0 wrappingContainer:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchUserRecordIDWithCompletionHandler:(id)arg0 ;
-(void)fetchXPCCriteriaWithCompletionHandler:(id)arg0 ;
-(void)getNewWebSharingIdentityDataWithCompletionHandler:(id)arg0 ;
-(void)getOutstandingOperationCountWithCompletionHandler:(id)arg0 ;
-(void)manuallyTriggerUploadRequests;
// -(void)registerForAssetRequests:(id)arg0 packageRequests:(unk)arg1 machServiceName:(id)arg2  ;
-(void)registerForAssetUploadRequests:(id)arg0 ;
// -(void)registerForAssetUploadRequests:(id)arg0 machServiceName:(unk)arg1  ;
-(void)registerForPackageUploadRequests:(id)arg0 ;
// -(void)registerForPackageUploadRequests:(id)arg0 machServiceName:(unk)arg1  ;
-(void)reloadAccountWithCompletionHandler:(id)arg0 ;
-(void)representativeDataclassEnabledWithCompletionHandler:(id)arg0 ;
-(void)requestApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetAllApplicationPermissionsWithCompletionHandler:(id)arg0 ;
-(void)serverPreferredPushEnvironmentSynchronous:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg0 ;
-(void)setApplicationPermission:(NSUInteger)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setFakeError:(id)arg0 forNextRequestOfClassName:(id)arg1 ;
-(void)setFakeResponseOperationResult:(id)arg0 forNextRequestOfClassName:(id)arg1 forItemID:(id)arg2 withLifetime:(int)arg3 ;
-(void)setSourceApplicationBundleIdentifier:(id)arg0 ;
-(void)setSourceApplicationSecondaryIdentifier:(id)arg0 ;
-(void)statusForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)statusGroupsForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)submitEventMetric:(id)arg0 ;
-(void)submitEventMetric:(id)arg0 completionHandler:(id)arg1 ;
-(void)tossConfigWithCompletionHandler:(id)arg0 ;
-(void)unregisterFromUploadRequests;
-(void)unregisterFromUploadRequestsWithMachServiceName:(id)arg0 ;
-(void)wipeAllCachesAndDie;


@end


#endif