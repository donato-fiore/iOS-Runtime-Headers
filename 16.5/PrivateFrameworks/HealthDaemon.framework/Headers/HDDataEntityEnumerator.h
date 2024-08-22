// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATAENTITYENUMERATOR_H
#define HDDATAENTITYENUMERATOR_H

@class NSMutableDictionary, NSNumber, _HKFilter, NSString, NSSet, NSArray;


#import "HDSQLiteQueryDescriptor.h"
#import "HDProfile.h"
#import "HDDatabaseTransactionContext.h"
#import "HDSQLitePredicate.h"

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    BOOL _useLeftJoin;
}


@property (retain, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (copy, nonatomic) id *authorizationFilter; // ivar: _authorizationFilter
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // ivar: _databaseTransactionContext
@property (retain, nonatomic) NSNumber *deletedObjectsAnchor; // ivar: _deletedObjectsAnchor
@property (copy, nonatomic) HDSQLitePredicate *deletedObjectsPredicate; // ivar: _deletedObjectsPredicate
@property (retain, nonatomic) _HKFilter *filter; // ivar: _filter
@property (nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration; // ivar: _ignoreEntityClassAdditionalPredicateForEnumeration
@property (nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection; // ivar: _improveJoinOrderingForStartDateIndexSelection
@property (readonly, copy, nonatomic) NSString *lastSQL; // ivar: _lastSQL
@property (readonly, nonatomic) NSSet *objectTypes; // ivar: _objectTypes
@property (retain, nonatomic) NSSet *restrictedSourceEntities; // ivar: _restrictedSourceEntities
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


-(BOOL)enumerateInTransaction:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateSampleTimesIncludingDeletedObjects:(BOOL)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateWithError:(*id)arg0 handler:(id)arg1 ;
-(id)_initWithEntityClass:(Class)arg0 profile:(id)arg1 ;
-(id)_initWithObjectType:(id)arg0 entityClass:(Class)arg1 profile:(id)arg2 ;
-(id)_initWithObjectTypes:(id)arg0 entityClass:(Class)arg1 profile:(id)arg2 ;
-(id)_joinClauseForProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodingOptionForKey:(id)arg0 ;
-(void)addEncodingOptionsFromDictionary:(id)arg0 ;
-(void)setEncodingOption:(id)arg0 forKey:(id)arg1 ;


@end


#endif