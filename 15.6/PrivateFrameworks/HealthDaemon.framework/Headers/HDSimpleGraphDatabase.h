// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHDATABASE_H
#define HDSIMPLEGRAPHDATABASE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"

@interface HDSimpleGraphDatabase : NSObject {
    HDSQLiteDatabase *_database;
}


@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (copy, nonatomic) id *unitTesting_didCreateDatabaseConnectionHandler; // ivar: _unitTesting_didCreateDatabaseConnectionHandler
@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;


+(id)graphDatabaseWithURL:(id)arg0 error:(*id)arg1 ;
+(id)unitTesting_didInitGraphDatabaseHandler:(SEL)arg0 ;
+(void)setUnitTesting_didInitGraphDatabaseHandler:(id)arg0 ;
-(BOOL)addAttributeWithID:(NSInteger)arg0 value:(id)arg1 nodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)addRelationshipWithID:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteNodeWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteNodesWithIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)enumerateAttributesForNodeWithID:(NSInteger)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateNodesContainingAttributeWithID:(NSInteger)arg0 value:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)enumerateNodesForPredicate:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateNodesWithIDs:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateRelationshipsForNodeWithID:(NSInteger)arg0 fetchType:(NSInteger)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)enumerateRelationshipsForPredicate:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)foreignKeysEnable:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)insertRawAttributeWithRowID:(NSInteger)arg0 nodeID:(NSInteger)arg1 keyID:(NSInteger)arg2 value:(id)arg3 valueTypeID:(NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)insertRawOntologyValueWithRowID:(NSInteger)arg0 value:(id)arg1 table:(id)arg2 error:(*id)arg3 ;
-(BOOL)insertRawRelationshipWithRowID:(NSInteger)arg0 subjectID:(NSInteger)arg1 nameID:(NSInteger)arg2 objectID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)performTransactionWithError:(*id)arg0 write:(BOOL)arg1 block:(id)arg2 ;
-(BOOL)setMetadataValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)unitTesting_addRelationshipTypeWithName:(id)arg0 nameID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)unitTesting_removeRelationshipWithID:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)firstNodeWithName:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)insertNodeWithName:(id)arg0 error:(*id)arg1 ;
-(id)metadataValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)nodeForID:(NSInteger)arg0 error:(*id)arg1 ;
-(id)schemaVersionWithError:(*id)arg0 ;
-(id)unitTesting_countOfNodesWithError:(*id)arg0 ;
-(id)unitTesting_countOfNodesWithRelationshipID:(NSInteger)arg0 error:(*id)arg1 ;
-(void)close;
-(void)dealloc;
// -(void)onCommit:(id)arg0 orRollback:(unk)arg1  ;


@end


#endif