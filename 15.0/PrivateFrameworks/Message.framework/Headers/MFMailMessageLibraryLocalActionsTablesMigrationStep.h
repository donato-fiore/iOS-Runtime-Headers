// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILMESSAGELIBRARYLOCALACTIONSTABLESMIGRATIONSTEP_H
#define MFMAILMESSAGELIBRARYLOCALACTIONSTABLESMIGRATIONSTEP_H

@class EDPersistenceDatabaseConnection;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection


+(id)log;
-(BOOL)_populateServerMessages;
-(BOOL)performMigrationStep;
-(id)_actionFlagsActionIndexDefinition;
-(id)_actionFlagsTableDefinition;
-(id)_actionLabelsActionIndexDefinition;
-(id)_actionLabelsLabelIndexDefinition;
-(id)_actionLabelsTableDefinition;
-(id)_actionMessagesActionIndexDefinition;
-(id)_actionMessagesDestinationMessageIndexDefinition;
-(id)_actionMessagesMessageIndexDefinition;
-(id)_actionMessagesTableDefinition;
-(id)_localMessageActionsMailboxRowIDIndexDefinition;
-(id)_localMessageActionsTableDefinition;
-(id)_offlineCacheOperations;
-(id)_serverLabelsTableDefinition;
-(id)_serverMessagesMessageIndexDefinition;
-(id)_serverMessagesTableDefinition;
-(id)initWithSQLiteConnection:(id)arg0 ;


@end


#endif