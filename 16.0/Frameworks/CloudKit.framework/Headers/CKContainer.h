// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTAINER_H
#define CKCONTAINER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "CKContainerID.h"
#import "CKConvenienceConfiguration.h"
#import "CKContainerImplementation.h"
#import "CKContainerOptions.h"
#import "CKDatabase.h"
#import "CKContainerSetupInfo.h"

@interface CKContainer : NSObject

@property (retain, nonatomic) NSMutableArray *codeServices; // ivar: _codeServices
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) CKConvenienceConfiguration *convenienceConfiguration; // ivar: _convenienceConfiguration
@property (readonly, nonatomic) CKContainerImplementation *implementation; // ivar: _implementation
@property (readonly, copy, nonatomic) CKContainerOptions *options;
@property (readonly, nonatomic) CKDatabase *organizationCloudDatabase; // ivar: _organizationCloudDatabase
@property (retain, nonatomic) CKDatabase *privateCloudDatabase; // ivar: _privateCloudDatabase
@property (retain, nonatomic) CKDatabase *publicCloudDatabase; // ivar: _publicCloudDatabase
@property (nonatomic) int scopedIdentityUpdateToken; // ivar: _scopedIdentityUpdateToken
@property (readonly, copy, nonatomic) CKContainerSetupInfo *setupInfo;
@property (retain, nonatomic) CKDatabase *sharedCloudDatabase; // ivar: _sharedCloudDatabase
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;


+(BOOL)currentProcessCanUseCloudKit;
+(NSInteger)containerEnvironmentForContainerID:(id)arg0 entitlements:(id)arg1 ;
+(id)_CKXPCClientToDiscretionaryDaemonInterface;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)containerIDForContainerIdentifier:(id)arg0 ;
+(id)containerIDForContainerIdentifier:(id)arg0 environment:(NSInteger)arg1 ;
+(id)containerWithIdentifier:(id)arg0 ;
+(id)containersByIdentifier;
+(id)defaultContainer;
+(id)importantUserRecordAccessQueue;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)matterhornName;
+(id)uploadRequestFetchAllNotificationName;
+(void)removeIdentifierFromContainersWithIdentifier:(id)arg0 ;
-(id)_initUnconfiguredContainerWithImplementation:(id)arg0 ;
-(id)_initWithContainerIdentifier:(id)arg0 ;
-(id)codeServiceWithName:(id)arg0 ;
-(id)codeServiceWithName:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(id)codeServiceWithName:(id)arg0 databaseScope:(NSInteger)arg1 serviceInstanceURL:(id)arg2 ;
-(id)codeServiceWithName:(id)arg0 serviceInstanceURL:(id)arg1 ;
-(id)databaseWithDatabaseScope:(NSInteger)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 options:(id)arg1 ;
-(id)initWithContainerSetupInfo:(id)arg0 ;
-(id)initWithImplementation:(id)arg0 convenienceConfiguration:(id)arg1 ;
-(id)serverPreferredPushEnvironmentWithError:(*id)arg0 ;
-(void)acceptShareMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)accountInfoWithCompletionHandler:(id)arg0 ;
-(void)accountStatusWithCompletionHandler:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)cancelUploadRequests;
-(void)dealloc;
-(void)discoverAllContactUserInfosWithCompletionHandler:(id)arg0 ;
-(void)discoverAllIdentitiesWithCompletionHandler:(id)arg0 ;
-(void)discoverUserIdentityWithEmailAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverUserIdentityWithPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverUserIdentityWithUserRecordID:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverUserInfoWithEmailAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverUserInfoWithUserRecordID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id)arg0 ;
-(void)fetchCurrentDeviceIDWithCompletionHandler:(id)arg0 ;
-(void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id)arg0 ;
-(void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id)arg0 ;
-(void)fetchLongLivedOperationWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id)arg0 ;
-(void)fetchShareMetadataWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchShareParticipantWithEmailAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchShareParticipantWithLookupInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchShareParticipantWithPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchShareParticipantWithUserRecordID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchUserRecordIDWithCompletionHandler:(id)arg0 ;
-(void)getNewWebSharingIdentityDataWithCompletionHandler:(id)arg0 ;
// -(void)getSynchronousContainerScopedDaemonProxyWithErrorHandler:(id)arg0 daemonProxyHandler:(unk)arg1  ;
-(void)manuallyTriggerUploadRequests;
-(void)registerForAssetUploadRequests:(id)arg0 ;
// -(void)registerForAssetUploadRequests:(id)arg0 machServiceName:(unk)arg1  ;
-(void)registerForPackageUploadRequests:(id)arg0 ;
// -(void)registerForPackageUploadRequests:(id)arg0 machServiceName:(unk)arg1  ;
-(void)registerSystemSharingUIObserver:(id)arg0 ;
-(void)requestApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg0 ;
-(void)setApplicationPermission:(NSUInteger)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setFakeError:(id)arg0 forNextRequestOfClassName:(id)arg1 ;
-(void)statusForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)statusGroupsForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)submitEventMetric:(id)arg0 ;
-(void)submitEventMetric:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterFromUploadRequests;
-(void)unregisterFromUploadRequestsWithMachServiceName:(id)arg0 ;
-(void)wipeAllCachesAndDie;


@end


#endif