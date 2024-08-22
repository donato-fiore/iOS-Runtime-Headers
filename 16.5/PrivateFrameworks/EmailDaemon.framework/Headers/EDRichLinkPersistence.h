// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDRICHLINKPERSISTENCE_H
#define EDRICHLINKPERSISTENCE_H

@protocol EDPersistenceDatabaseSchemaProvider;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDRichLinkPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>



@property (retain, nonatomic) EDPersistenceDatabase *database; // ivar: _database


+(id)messageRichLinksTableName;
+(id)messagesRichLinksTableSchema;
+(id)richLinksTableName;
+(id)richLinksTableSchema;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)verifyFileExistsForRichLinkID:(id)arg0 basePath:(id)arg1 ;
-(id)_hashForRichLinkData:(id)arg0 ;
-(id)_richLinkDirectoryURLWithBasePath:(id)arg0 ;
-(id)_richLinkFileURLWithID:(id)arg0 basePath:(id)arg1 ;
-(id)datasForPersistentIDs:(id)arg0 basePath:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)richLinkDataForPersistentID:(id)arg0 basePath:(id)arg1 ;
-(id)richLinkFileURLWithID:(id)arg0 basePath:(id)arg1 ;
-(id)richLinkMetadataDataForPersistentID:(id)arg0 basePath:(id)arg1 ;
-(id)richLinkPersistentIDsForGlobalMessageID:(NSInteger)arg0 ;
-(id)saveRichLinkData:(id)arg0 globalMessageID:(NSInteger)arg1 basePath:(id)arg2 ;
-(id)saveRichLinkData:(id)arg0 url:(id)arg1 title:(id)arg2 globalMessageID:(NSInteger)arg3 basePath:(id)arg4 ;


@end


#endif