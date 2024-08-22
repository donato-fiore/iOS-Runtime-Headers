// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSONINFOMANAGER_H
#define PLPERSONINFOMANAGER_H

@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

#import <Foundation/Foundation.h>


@interface PLPersonInfoManager : NSObject {
    NSMutableDictionary *_personDictsForPersonID;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}




-(id)assetsdClient;
-(id)emailForPersonID:(id)arg0 ;
-(id)emailsForInvitationRecordGUID:(id)arg0 ;
-(id)firstNameForPersonID:(id)arg0 ;
-(id)fullNameForPersonID:(id)arg0 ;
-(id)initWithPathManager:(id)arg0 lazyAssetsdClient:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg0 ;
-(id)personInfoForPersonID:(id)arg0 ;
-(id)phonesForInvitationRecordGUID:(id)arg0 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;
-(void)clearCacheForPersonID:(id)arg0 ;
-(void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg0 ;
-(void)removePersistedInfo;
-(void)setEmails:(id)arg0 phones:(id)arg1 forInvitationRecordGUID:(id)arg2 ;
-(void)setFirstName:(id)arg0 lastName:(id)arg1 fullName:(id)arg2 email:(id)arg3 forPersonID:(id)arg4 ;
-(void)setPersonInfo:(id)arg0 forPersonID:(id)arg1 ;


@end


#endif