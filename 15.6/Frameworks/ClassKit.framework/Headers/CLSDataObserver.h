// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSDATAOBSERVER_H
#define CLSDATAOBSERVER_H

@class NSString, NSPredicate, NSArray;
@protocol CLSPredicateValueNormalizer, CLSChangeNotifiable;

#import <Foundation/Foundation.h>

#import "CLSDataStore.h"
#import "CLSQuerySpecification.h"

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable>



@property NSUInteger changeTag; // ivar: _changeTag
@property (readonly, nonatomic) NSString *className;
@property (copy, nonatomic) id *dataChanged; // ivar: _dataChanged
@property (weak, nonatomic) CLSDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
-(void)clientRemote_invalidate;
-(void)clientRemote_itemChanged:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif