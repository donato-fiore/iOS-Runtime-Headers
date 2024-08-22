// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCMIGRATIONQUERYOPERATION_H
#define BRCMIGRATIONQUERYOPERATION_H

@class NSString, CKQueryCursor, NSMutableArray;


#import "BRCSyncDownOperation.h"

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}




+(id)allMigrationKeysOrdered;
+(id)documentSharesMigrationKey;
+(id)folderShareAliasesMigrationKey;
+(id)folderSharesMigrationKey;
-(BOOL)_saveFetchedRecords:(id)arg0 cursor:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updatedContinuationCursor:(id)arg0 fetchedRecords:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithServerZone:(id)arg0 migrationKey:(id)arg1 continuationCursor:(id)arg2 ;
-(void)_performAfterQueryingForShareAliasesWithCompletion:(id)arg0 ;
-(void)_performAfterQueryingForShareIDsOfFolders:(BOOL)arg0 completion:(id)arg1 ;
// -(void)_performQuery:(id)arg0 recordFetchedBlock:(id)arg1 cursorUpdatedBlock:(unk)arg2 desiredKeys:(id)arg3 completion:(unk)arg4  ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif