// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSBLOCKEDHIGHLIGHTSBANNERSQLITESTORE_H
#define WBSBLOCKEDHIGHLIGHTSBANNERSQLITESTORE_H

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSBlockedHighlightsBannerSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}




+(id)defaultDatabaseURL;
-(NSInteger)_schemaVersion;
-(id)initWithDatabaseURL:(id)arg0 ;
-(void)_closeDatabaseOnDatabaseQueue;
-(void)_configureDatabase;
-(void)_createDatabaseSchemaIfNeeded;
-(void)_openDatabase;
-(void)_openDatabaseIfNeeded;
-(void)clearAllBannedHighlightsWithCompletionHandler:(id)arg0 ;
-(void)clearBlockedBannerHighlightsAfterDate:(id)arg0 beforeDate:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)closeDatabase;
-(void)fetchAllBlockedHighlightsWithCompletionHandler:(id)arg0 ;
-(void)removeBlockedBannerhighlightWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)storeBlockedHighlightWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)verifyIfHighlightIsBlockedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif