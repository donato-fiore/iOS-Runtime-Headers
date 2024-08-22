// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDEVICEMIGRATIONSTATE_H
#define ICDEVICEMIGRATIONSTATE_H

@class NSString, NSDate;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;


+(id)allDeviceMigrationStatesInContext:(id)arg0 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg0 ;
+(id)currentDeviceMigrationStateForAccount:(id)arg0 createIfNecessary:(BOOL)arg1 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg0 account:(id)arg1 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg0 context:(id)arg1 ;
+(id)deviceMigrationStatesByAccountIDInContext:(id)arg0 ;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)identifierForDeviceIdentifier:(id)arg0 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg0 account:(id)arg1 ;
+(id)stringFromMigrationState:(short)arg0 ;
-(BOOL)isInICloudAccount;
-(BOOL)isMigrating;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(id)newlyCreatedRecord;
-(id)recordName;
-(id)recordType;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;


@end


#endif