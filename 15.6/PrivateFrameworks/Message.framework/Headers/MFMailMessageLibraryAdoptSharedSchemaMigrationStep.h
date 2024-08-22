// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILMESSAGELIBRARYADOPTSHAREDSCHEMAMIGRATIONSTEP_H
#define MFMAILMESSAGELIBRARYADOPTSHAREDSCHEMAMIGRATIONSTEP_H

@class EDPersistenceDatabaseConnection, NSString, EFSQLSchema;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) NSString *protectedDatabaseName; // ivar: _protectedDatabaseName
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (readonly, nonatomic) EFSQLSchema *schema;


+(void)cleanUpAfterMigrationWithConnection:(id)arg0 ;
-(BOOL)_cleanupOldSchema;
-(BOOL)_createIndexes;
-(BOOL)_createTemporaryTables;
-(BOOL)_dropTemporaryTables;
-(BOOL)_initializeOldProtectedSchema;
-(BOOL)_migrateData;
-(BOOL)_migrateMessages;
-(BOOL)_migrateNonMessages;
-(BOOL)_migrateSendersAndRecipients;
-(BOOL)_migrateSubjects;
-(BOOL)_migrateSummaries;
-(BOOL)_transformProtectedSchema;
-(BOOL)_transformSchema;
-(BOOL)performMigrationStep;
-(id)_accountsTableSchema;
-(id)_addressesTableSchema;
-(id)_conversationIDMessageIDTableSchema;
-(id)_conversationsTableSchema;
-(id)_mailboxesTableSchema;
-(id)_messageDataDeletedTableSchema;
-(id)_messageDataTableSchema;
-(id)_messageReferencesTableSchema;
-(id)_messagesTableSchema;
-(id)_popUIDsTableSchema;
-(id)_propertiesTableSchema;
-(id)_protectedMessageDataTableSchema;
-(id)_recipientsTableSchema;
-(id)_spotlightMessageReindexTableSchema;
-(id)_spotlightTombstonesTableSchema;
-(id)_subjectsTableSchema;
-(id)_summariesTableSchema;
-(id)initWithSQLiteConnection:(id)arg0 protectedDatabaseName:(id)arg1 ;


@end


#endif