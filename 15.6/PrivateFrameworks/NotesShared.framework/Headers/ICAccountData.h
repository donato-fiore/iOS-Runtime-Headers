// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICACCOUNTDATA_H
#define ICACCOUNTDATA_H

@class NSString, NSData;
@protocol ICCloudObject;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>



@property (retain, nonatomic) ICAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *mergeableData;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly) Class superclass;


+(id)accountDataWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newAccountDataForAccount:(id)arg0 ;
+(id)newAccountDataWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
-(BOOL)isDeletable;
-(BOOL)isInICloudAccount;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(id)cloudAccount;
-(id)newlyCreatedRecord;
-(id)recordName;
-(id)recordType;
-(id)recordZoneName;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)saveMergeableDataIfNeeded;


@end


#endif