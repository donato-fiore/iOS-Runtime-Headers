// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILMESSAGELIBRARYMODIFYCOLUMNDEFINITIONSMIGRATIONSTEP_H
#define MFMAILMESSAGELIBRARYMODIFYCOLUMNDEFINITIONSMIGRATIONSTEP_H

@class EDPersistenceDatabaseConnection, EFSQLSchema;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection
@property (readonly, nonatomic) EFSQLSchema *schema;


-(BOOL)performMigrationStep;
-(id)actionFlagsTableSchema;
-(id)actionLabelsTableSchema;
-(id)actionMessagesTableSchema;
-(id)initWithSQLiteConnection:(id)arg0 ;
-(id)localMessageActionsTableSchema;
-(id)mailboxesTableStubSchema;
-(id)messagesTableStubSchema;
-(id)serverLabelsTableSchema;
-(id)serverMessagesTableSchema;


@end


#endif