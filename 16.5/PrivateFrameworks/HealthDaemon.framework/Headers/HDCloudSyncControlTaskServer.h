// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCCONTROLTASKSERVER_H
#define HDCLOUDSYNCCONTROLTASKSERVER_H

@class NSString;
@protocol HKCloudSyncControlServerInterface;


#import "HDStandardTaskServer.h"

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer <HKCloudSyncControlServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id)arg0 ;
-(id)remote_fetchCloudDescriptionWithCompletion:(id)arg0 ;
-(id)remote_fetchCloudSyncProgressWithCompletion:(id)arg0 ;
-(id)remote_forceCloudResetWithCompletion:(id)arg0 ;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id)arg0 ;
-(id)remote_forceCloudSyncWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)connectionInvalidated;
-(void)remote_accountConfigurationDidChangeWithCompletion:(id)arg0 ;
-(void)remote_disableCloudSyncWithCompletion:(id)arg0 ;
-(void)remote_enableCloudSyncWithCompletion:(id)arg0 ;
-(void)remote_fetchCloudSyncStatusWithCompletion:(id)arg0 ;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id)arg0 ;
-(void)remote_requestDataRefreshWithCompletion:(id)arg0 ;


@end


#endif