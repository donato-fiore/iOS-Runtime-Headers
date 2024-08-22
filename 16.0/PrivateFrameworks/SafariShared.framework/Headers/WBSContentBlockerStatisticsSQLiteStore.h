// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCONTENTBLOCKERSTATISTICSSQLITESTORE_H
#define WBSCONTENTBLOCKERSTATISTICSSQLITESTORE_H

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}




+(id)_defaultDatabaseURL;
+(id)standardStore;
-(BOOL)_createDatabaseSchemaIfNeeded;
-(BOOL)_openDatabaseIfNeeded;
-(BOOL)_tryOpenDatabase:(*id)arg0 ;
-(NSInteger)_idForFirstPartyWithHighLevelDomain:(id)arg0 ;
-(NSInteger)_idForThirdPartyWithHighLevelDomain:(id)arg0 ;
-(NSInteger)_schemaVersion;
-(id)initWithDatabaseURL:(id)arg0 ;
-(void)_clearStatisticsAfter:(id)arg0 before:(id)arg1 ;
-(void)_clearStatisticsForDomain:(id)arg0 ;
-(void)_closeDatabaseOnDatabaseQueue;
-(void)_deleteDatabase;
-(void)_deleteUnusedDomains;
-(void)blockedThirdPartiesAfter:(id)arg0 before:(id)arg1 completionHandler:(id)arg2 ;
-(void)blockedThirdPartiesAfter:(id)arg0 before:(id)arg1 onFirstParty:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearAllStatisticsWithCompletionHandler:(id)arg0 ;
-(void)clearStatisticsAfter:(id)arg0 before:(id)arg1 ;
-(void)clearStatisticsForDomains:(id)arg0 ;
-(void)closeDatabase;
-(void)recordThirdPartyResourceBlocked:(id)arg0 onFirstParty:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif