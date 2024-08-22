// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFAVICONPROVIDERDATABASECONTROLLER_H
#define WBSFAVICONPROVIDERDATABASECONTROLLER_H

@class WBSSQLiteStore;



@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore



-(BOOL)_deleteRejectedResourceForPageURLString:(id)arg0 iconURLString:(id)arg1 ;
-(BOOL)_hasPageURLsForIconUUID:(id)arg0 ;
-(BOOL)_setRejectedResourceForPageURL:(id)arg0 iconURLString:(id)arg1 ;
-(id)_fetchAllPageURLStrings;
-(id)_fetchIconInfoForIconURLString:(id)arg0 ;
-(id)_fetchIconInfoForIconUUID:(id)arg0 ;
-(id)_fetchIconInfosForRejectedResourcesWithPageURLString:(id)arg0 iconURLString:(id)arg1 ;
-(id)_fetchIconUUIDForPageURLString:(id)arg0 ;
-(id)_fetchIconUUIDsForPageURLStrings:(id)arg0 ;
-(id)_fetchPageURLStringsWithPredicate:(id)arg0 ;
-(id)_findOrphansFromIconUUIDs:(id)arg0 ;
-(id)_setIconUUID:(id)arg0 forIconURLString:(id)arg1 size:(struct CGSize )arg2 hasGeneratedResolutions:(BOOL)arg3 ;
-(id)_setTimestampToNowForIconUUID:(id)arg0 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentSchemaVersion;
-(int)_migrateToSchemaVersion:(int)arg0 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(void)_deleteAllPageAndIconEntries;
-(void)_deleteIconWithUUIDFromIconInfo:(id)arg0 ;
-(void)_deleteIconsWithUUIDsFromIconInfo:(id)arg0 ;
-(void)_deletePageURL:(id)arg0 ;
-(void)_deletePageURLs:(id)arg0 ;
-(void)_deletePageURLsWithUUIDFromPageInfo:(id)arg0 ;
-(void)_deleteRejectedResourceForPageURLString:(id)arg0 ;
-(void)_deleteRejectedResourceForPageURLStrings:(id)arg0 ;
-(void)_firstIconUUIDForPageURLStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)_generateStatementsForQuery:(id)arg0 arguments:(id)arg1 statementCallback:(id)arg2 ;
-(void)_setPageURL:(id)arg0 toIconUUID:(id)arg1 ;
-(void)fetchAllIconUUIDsWithCompletionHandler:(id)arg0 ;
-(void)fetchAllKnownPageURLStringsWithCompletionHandler:(id)arg0 ;
-(void)fetchPageURLStringsWithPrefixesIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)firstIconInfoMatchingIconURLStringIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)firstIconInfoMatchingPageURLStringIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)firstIconUUIDMatchingPageURLStringIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)iconInfoForIconURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)iconInfoForPageURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg0 iconURLString:(id)arg1 iconSize:(struct CGSize )arg2 iconHasGeneratedResolutions:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)linkPageURLString:(id)arg0 toExistingIconURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)markRejectedIconAtPageURLString:(id)arg0 iconURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)markValidIconAtPageURLString:(id)arg0 iconURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)rejectedResourceIconInfosForPageURLString:(id)arg0 iconURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeAllDataForIconUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllPageURLStringsWithCompletionHandler:(id)arg0 ;
-(void)removePageURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePageURLStrings:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif