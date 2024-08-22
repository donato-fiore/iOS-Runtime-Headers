// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATAENTITYDELETIONCONTEXT_H
#define HDDATAENTITYDELETIONCONTEXT_H

@class NSMutableDictionary, NSString, NSSet, NSNumber;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseTransaction.h"

@interface HDDataEntityDeletionContext : NSObject {
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSString *_startAndEndDatesSQL;
    NSString *_deleteInfoSQL;
}


@property (nonatomic) BOOL callWillDeleteWithTransaction; // ivar: _callWillDeleteWithTransaction
@property (readonly, nonatomic) NSUInteger deletedObjectCount; // ivar: _deletedObjectCount
@property (readonly, copy, nonatomic) NSSet *deletedObjectTypeSet; // ivar: _deletedObjectTypeSet
@property (nonatomic) BOOL insertDeletedObjects; // ivar: _insertDeletedObjects
@property (readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID; // ivar: _lastInsertedDeletedObjectPersistentID
@property (nonatomic) BOOL preserveExactStartAndEndDates; // ivar: _preserveExactStartAndEndDates
@property (copy, nonatomic) id *recursiveDeleteAuthorizationBlock; // ivar: _recursiveDeleteAuthorizationBlock
@property (readonly, nonatomic) HDDatabaseTransaction *transaction; // ivar: _transaction


-(BOOL)deleteObjectWithPersistentID:(NSInteger)arg0 entityClass:(Class)arg1 error:(*id)arg2 ;
-(BOOL)deleteObjectWithPersistentID:(NSInteger)arg0 objectUUID:(id)arg1 entityClass:(Class)arg2 objectType:(id)arg3 provenanceIdentifier:(id)arg4 deletionDate:(id)arg5 deletedSampleIntervals:(id)arg6 error:(*id)arg7 ;
-(id)initWithProfile:(id)arg0 transaction:(id)arg1 ;
-(struct _HDObjectDeletionInfo )deleteInfoForObjectWithUUID:(id)arg0 error:(*id)arg1 ;
-(void)finish;


@end


#endif