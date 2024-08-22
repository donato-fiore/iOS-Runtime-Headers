// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)recordType;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;


@end


#endif