// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSDATAOBSERVER_H
#define CLSDATAOBSERVER_H

@class NSString, NSMutableSet, NSPredicate, NSArray;
@protocol CLSPredicateValueNormalizer, CLSEntityChangeNotifiable;

#import <Foundation/Foundation.h>

#import "CLSDataStore.h"
#import "CLSQuerySpecification.h"

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSEntityChangeNotifiable>



@property NSUInteger changeTag; // ivar: _changeTag
@property (readonly, nonatomic) NSString *className;
@property (copy, nonatomic) id *dataChanged; // ivar: _dataChanged
@property (weak, nonatomic) CLSDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *entitiesChanged; // ivar: _entitiesChanged
@property (retain, nonatomic) NSMutableSet *entitiesChangedAddedIDs; // ivar: _entitiesChangedAddedIDs
@property (retain, nonatomic) NSMutableSet *entitiesChangedDeletedIDs; // ivar: _entitiesChangedDeletedIDs
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedIDs; // ivar: _entitiesChangedUpdatedIDs
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedMatchingPredicateIDs; // ivar: _entitiesChangedUpdatedMatchingPredicateIDs
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedNotMatchingPredicateIDs; // ivar: _entitiesChangedUpdatedNotMatchingPredicateIDs
@property (retain, nonatomic) NSMutableSet *entitiesMatchingPredicate; // ivar: _entitiesMatchingPredicate
@property (readonly) NSUInteger hash;
@property (getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) Class objectType;
@property (readonly, nonatomic) NSString *observerID; // ivar: _observerID
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) CLSQuerySpecification *querySpec; // ivar: _querySpec
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (readonly) Class superclass;


+(id)predicateForCollaborationStateForObjectWithID:(id)arg0 ownerPersonID:(id)arg1 domain:(NSInteger)arg2 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg0 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg0 domain:(NSInteger)arg1 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg0 ownerPersonID:(id)arg1 ;
+(id)predicateForObjectWithObjectID:(id)arg0 ;
+(id)predicateForObjectsWithIdentifier:(id)arg0 ;
+(id)predicateForObjectsWithObjectIDs:(id)arg0 ;
+(id)predicateForObjectsWithParentObjectID:(id)arg0 ;
+(id)predicateForObjectsWithParentObjectID:(id)arg0 andRole:(NSUInteger)arg1 ;
+(id)predicateForObjectsWithPersonID:(id)arg0 andRole:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithObjectType:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)initWithObjectType:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 error:(*id)arg3 ;
-(id)initWithQuerySpecification:(id)arg0 error:(*id)arg1 ;
-(id)normalizeKeyPath:(id)arg0 forValue:(id)arg1 ;
-(id)normalizedValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)clientRemote_entitiesChangedAdded:(id)arg0 updated:(id)arg1 deleted:(id)arg2 ;
-(void)clientRemote_entitiesChangedUpdatedMatchingPredicate:(id)arg0 updatedNotMatchingPredicate:(id)arg1 ;
-(void)clientRemote_finishWithEntitiesChangedSince:(id)arg0 ;
-(void)clientRemote_invalidate;
-(void)clientRemote_itemChanged:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif