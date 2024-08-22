// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCLOUDSTORESERVICE_H
#define PKCLOUDSTORESERVICE_H

@class NSString;
@protocol PKCloudStoreCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate>

 {
    PKXPCService *_remoteService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)errorHandlerForMethod:(SEL)arg0 completion:(SEL)arg1 ;
-(id)init;
-(void)allItemsOfItemType:(NSUInteger)arg0 storeLocally:(BOOL)arg1 completion:(id)arg2 ;
-(void)applePayContainerItemsFromDate:(id)arg0 toDate:(id)arg1 completion:(id)arg2 ;
-(void)checkTLKsMissingWithCompletion:(id)arg0 ;
-(void)cloudStoreRecordArrayWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)cloudStoreStatusForContainer:(id)arg0 completion:(id)arg1 ;
-(void)createInvitationForRecipientHandle:(id)arg0 zoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(NSInteger)arg3 completion:(id)arg4 ;
-(void)createZone:(id)arg0 containerName:(id)arg1 completion:(id)arg2 ;
-(void)declineInvitationForRecipientHandle:(id)arg0 zoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(NSInteger)arg3 completion:(id)arg4 ;
-(void)deleteZone:(id)arg0 containerName:(id)arg1 completion:(id)arg2 ;
-(void)diagnosticInfoForContainerWithName:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticSnapshotForContainerWithName:(id)arg0 completion:(id)arg1 ;
-(void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)itemOfItemType:(NSUInteger)arg0 recordName:(id)arg1 completion:(id)arg2 ;
-(void)itemOfItemType:(NSUInteger)arg0 recordName:(id)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)itemOfItemTypeFromAllZones:(NSUInteger)arg0 recordName:(id)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)performAction:(NSInteger)arg0 inContainerWithName:(id)arg1 completion:(id)arg2 ;
-(void)performBackgroundTransactionSyncFromDate:(id)arg0 completion:(id)arg1 ;
-(void)populateEvents:(id)arg0 forAccountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)removeAllItems:(NSUInteger)arg0 inZoneName:(id)arg1 containerName:(id)arg2 storeLocally:(BOOL)arg3 completion:(id)arg4 ;
-(void)removeRecordWithRecordName:(id)arg0 zoneName:(id)arg1 containerName:(id)arg2 completion:(id)arg3 ;
-(void)resetApplePayManateeViewWithCompletion:(id)arg0 ;
-(void)resetContainerWithIdentifier:(id)arg0 zoneNames:(id)arg1 completion:(id)arg2 ;
-(void)setupCloudDatabaseForContainerName:(id)arg0 completion:(id)arg1 ;
-(void)shareForZoneName:(id)arg0 containerName:(id)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg0 completion:(id)arg1 ;
-(void)uploadTransaction:(id)arg0 forTransactionSourceIdentifier:(id)arg1 includeServerData:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif