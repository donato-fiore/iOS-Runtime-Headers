// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSFERAGENTNICKNAMECONTROLLER_H
#define IMTRANSFERAGENTNICKNAMECONTROLLER_H

@class CKContainer;

#import <Foundation/Foundation.h>


@interface IMTransferAgentNicknameController : NSObject

@property (readonly, nonatomic) CKContainer *nickNameContainer; // ivar: _nickNameContainer


+(id)ckQueue;
+(id)sharedInstance;
-(BOOL)_serverSaysToUseOldContainer;
-(BOOL)shouldUseDevNickNameContainer;
-(CGFloat)_retryIntervalForRetryCount:(NSUInteger)arg0 ;
-(id)_nickNameFetchConfiguration;
-(id)_nickNamePublicDB;
-(id)_nickNameSaveConfiguration;
-(id)lockdownManager;
-(id)nickNamePublicDatabase;
-(void)_handleSaveNicknameError:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg0 deletingRecordID:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg0 deletingRecordIDs:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)cloudKitOperationWithRetryCount:(NSUInteger)arg0 withError:(id)arg1 operation:(id)arg2 ;
-(void)deleteAllPersonalNicknamesWithCompletion:(id)arg0 ;
-(void)fetchAllNicknamesForCurrentUser:(id)arg0 ;
-(void)fetchCurrentUserForNicknameContainer:(id)arg0 ;
-(void)getNicknameWithRecordID:(id)arg0 decryptionKey:(id)arg1 completionBlock:(id)arg2 ;
// -(void)performCloudKitOperation:(id)arg0 withError:(unk)arg1  ;
-(void)setPersonalNickname:(id)arg0 oldRecordID:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif