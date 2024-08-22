// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLEGACYTOMBSTONE_H
#define ICLEGACYTOMBSTONE_H

@class NSString, NSDate;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *contentHashAtImport;
@property (retain, nonatomic) NSDate *modificationDateAtImport;
@property (nonatomic) short type;


+(BOOL)hasTombstonePrefix:(id)arg0 ;
+(id)addLegacyTombstoneWithObjectIdentifier:(id)arg0 type:(short)arg1 account:(id)arg2 ;
+(id)allLegacyTombstonesInContext:(id)arg0 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)legacyTombstoneWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)legacyTombstonesMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newLegacyTombstoneWithIdentifier:(id)arg0 type:(short)arg1 account:(id)arg2 ;
+(id)tombstoneIdentifierForObjectIdentifier:(id)arg0 type:(short)arg1 ;
+(short)tombstoneTypeFromRecordName:(id)arg0 ;
+(void)addLegacyTombstoneForFolder:(id)arg0 ;
+(void)addLegacyTombstoneForNote:(id)arg0 ;
+(void)removeLegacyTombstoneForFolder:(id)arg0 ;
+(void)removeLegacyTombstoneForNote:(id)arg0 ;
+(void)removeLegacyTombstoneWithObjectIdentifier:(id)arg0 type:(short)arg1 context:(id)arg2 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isInICloudAccount;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(id)newlyCreatedRecord;
-(id)recordType;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;


@end


#endif