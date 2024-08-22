// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILMESSAGELIBRARYMAILBOXURLMIGRATIONSTEP_H
#define MFMAILMESSAGELIBRARYMAILBOXURLMIGRATIONSTEP_H

@class EDPersistenceDatabaseConnection;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *sqliteConnection; // ivar: _sqliteConnection


-(BOOL)_renameMailboxDataFolders:(struct sqlite3 *)arg0 ;
-(BOOL)_renameMailboxURLsForMailAccount:(id)arg0 inSQLiteDB:(struct sqlite3 *)arg1 ;
-(BOOL)_updateMailboxURLsInSQLitedb:(struct sqlite3 *)arg0 withOldURLToNewURLMap:(id)arg1 ;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg0 ;
-(void)_purgeFoldersMatchingPatterns:(id)arg0 ;


@end


#endif