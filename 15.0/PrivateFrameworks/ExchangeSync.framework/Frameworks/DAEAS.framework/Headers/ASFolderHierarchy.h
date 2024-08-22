// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFOLDERHIERARCHY_H
#define ASFOLDERHIERARCHY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ASAccount.h"

@interface ASFolderHierarchy : NSObject {
    ASAccount *_account;
    NSMutableDictionary *_folderCache;
    NSMutableDictionary *_folderByIdCache;
    id *_delegate;
}




+(id)_dataDirectoryPath;
+(id)_folderCacheFilenameWithId:(id)arg0 ;
+(void)cleanUpFilesForAccountWithId:(id)arg0 ;
-(id)_deviceIdInCache;
-(id)_folderCacheFilename;
-(id)_pathForFolder:(id)arg0 usingCache:(id)arg1 foldersById:(id)arg2 ;
-(id)_savedFolderPathsThatExternalClientsCareAbout;
-(id)description;
-(id)folderCache;
-(id)folderForID:(id)arg0 ;
-(id)folderIdsForPersistentPush;
-(id)folderIdsForPersistentPushForClientID:(id)arg0 ;
-(id)folderIdsForPersistentPushForDataclasses:(NSInteger)arg0 clientID:(id)arg1 ;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(NSInteger)arg0 ;
-(id)folders;
-(id)foldersTag;
-(id)foldersUnderFolderWithID:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
-(void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg0 ;
-(void)_pruneBadFolderIdsThatExternalClientsCareAbout;
-(void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
-(void)_setFolderByIdCacheFromCurrentCache;
-(void)_setFolderCache:(id)arg0 ;
-(void)_setFolderPathsFromCurrentCache;
-(void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg0 ;
-(void)blowAwayFolderCache;
-(void)clearLocalCache;
-(void)setDelegate:(id)arg0 ;
-(void)setFolderCache:(id)arg0 ;
-(void)setFolderIdsForPersistentPush:(id)arg0 clientID:(id)arg1 ;
-(void)setFolderIdsThatExternalClientsCareAbout:(id)arg0 ;


@end


#endif