// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICHASHTAG_H
#define ICHASHTAG_H

@class NSDate, NSString, NSManagedObjectID, CKRecordID;
@protocol ICCloudObject;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"

@interface ICHashtag : ICCloudSyncingObject <ICCloudObject>



@property (retain, nonatomic) ICAccount *account;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSString *standardizedContent;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(BOOL)regenerateStandardizedContentForAllHashtagsInContext:(id)arg0 hasChanges:(*BOOL)arg1 ;
+(id)allVisibleHashtagsForAccount:(id)arg0 ;
+(id)allVisibleHashtagsInContext:(id)arg0 ;
+(id)canonicalHashtagsInContext:(id)arg0 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)hashtagObjectIDWithStandardizedContent:(id)arg0 context:(id)arg1 ;
+(id)hashtagObjectIDsWithStandardizedContents:(id)arg0 context:(id)arg1 ;
+(id)hashtagWithDisplayText:(id)arg0 account:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)hashtagWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)hashtagWithStandardizedContent:(id)arg0 account:(id)arg1 ;
+(id)hashtagWithStandardizedContent:(id)arg0 onlyVisible:(BOOL)arg1 account:(id)arg2 ;
+(id)hashtagsWithStandardizedContent:(id)arg0 context:(id)arg1 ;
+(id)hashtagsWithStandardizedContent:(id)arg0 onlyVisible:(BOOL)arg1 account:(id)arg2 context:(id)arg3 ;
+(id)localizedSectionTitle;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newHashtagWithIdentifier:(id)arg0 displayText:(id)arg1 account:(id)arg2 ;
+(id)predicateForHashtagWithStandardizedContent:(id)arg0 onlyVisible:(BOOL)arg1 account:(id)arg2 ;
+(id)renameHashtagsWithStandardizedContent:(id)arg0 newDisplayText:(id)arg1 context:(id)arg2 ;
+(id)standardizedHashtagRepresentationForDisplayText:(id)arg0 ;
+(void)dedupeHashtagsInAccount:(id)arg0 ;
+(void)dedupeHashtagsInAccount:(id)arg0 atomicityExploitationCallback:(id)arg1 ;
+(void)enumerateHashtagsInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)purgeHashtag:(id)arg0 ;
-(BOOL)canRenameTagWithNewDisplayText:(id)arg0 ;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsDeletionByTTL;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)recordZoneName;
-(void)deleteFromLocalDatabase;


@end


#endif