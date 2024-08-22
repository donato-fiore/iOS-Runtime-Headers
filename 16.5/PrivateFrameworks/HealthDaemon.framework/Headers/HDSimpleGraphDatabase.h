// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (readonly, nonatomic) HDSQLiteDatabase *underlyingDatabase;
@property (copy, nonatomic) id *unitTesting_didCreateDatabaseConnectionHandler; // ivar: _unitTesting_didCreateDatabaseConnectionHandler
@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;


+(id)graphDatabaseWithURL:(id)arg0 error:(*id)arg1 ;
+(id)unitTesting_didInitGraphDatabaseHandler:(SEL)arg0 ;
+(void)setUnitTesting_didInitGraphDatabaseHandler:(id)arg0 ;
-(BOOL)addAttributeForNodeID:(NSInteger)arg0 type:(NSInteger)arg1 value:(id)arg2 version:(NSInteger)arg3 slots:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)addRelationshipWithSubjectNodeID:(NSInteger)arg0 type:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 version:(NSInteger)arg3 slots:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteNodeWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)enumerateAttributesForNodeWithID:(NSInteger)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateAttributesForNodeWithID:(NSInteger)arg0 includeDeleted:(BOOL)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)enumerateNodesForPredicate:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateNodesForPredicate:(id)arg0 includeDeleted:(BOOL)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
-(BOOL)enumerateRelationshipsForPredicate:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateRelationshipsForPredicate:(id)arg0 includeDeleted:(BOOL)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)enumerateRelationshipsWithSubjectID:(NSInteger)arg0 includeDeleted:(BOOL)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)foreignKeysEnable:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)insertNodeWithID:(NSInteger)arg0 version:(NSInteger)arg1 slots:(NSUInteger)arg2 deleted:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)metadataValueForKey:(id)arg0 valueOut:(*id)arg1 error:(*id)arg2 ;
-(BOOL)performTransactionWithError:(*id)arg0 write:(BOOL)arg1 block:(id)arg2 ;
-(BOOL)setMetadataValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)unitTesting_addAttributeWithType:(NSInteger)arg0 value:(id)arg1 nodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)unitTesting_addRelationshipWithType:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)unitTesting_removeRelationshipWithID:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)init;
-(id)nodeForID:(NSInteger)arg0 error:(*id)arg1 ;
-(id)schemaVersionWithError:(*id)arg0 ;
-(id)unitTesting_countOfNodesWithError:(*id)arg0 ;
-(id)unitTesting_countOfNodesWithRelationshipType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)unitTesting_insertNodeWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(void)close;
-(void)dealloc;
// -(void)onCommit:(id)arg0 orRollback:(unk)arg1  ;


@end


#endif