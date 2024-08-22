// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACCOUNTDATA_H
#define ICACCOUNTDATA_H

@class NSString, NSData, NSManagedObjectID, CKRecordID;
@protocol ICCloudObject;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>



@property (retain, nonatomic) ICAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (nonatomic) short lockedNotesMode;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (retain, nonatomic) NSData *mergeableData;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(id)accountDataWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newAccountDataForAccount:(id)arg0 ;
+(id)newAccountDataWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(BOOL)isDeletable;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(id)cloudAccount;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)recordName;
-(id)recordZoneName;
-(void)saveMergeableDataIfNeeded;
-(void)updateChangeCount;


@end


#endif