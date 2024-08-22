// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3CONTAINERQUERY_H
#define ML3CONTAINERQUERY_H

@class NSArray;


#import "ML3Query.h"
#import "ML3Predicate.h"
#import "ML3Container.h"

@interface ML3ContainerQuery : ML3Query {
    ML3Predicate *_containerPredicate;
}


@property (readonly, nonatomic) ML3Container *container; // ivar: _container
@property (readonly, nonatomic) NSArray *limitedPersistentIDs; // ivar: _limitedPersistentIDs
@property (readonly, nonatomic) BOOL requiresSmartLimiting;


+(BOOL)supportsSecureCoding;
-(BOOL)hasEntities;
-(NSUInteger)countOfDistinctRowsForColumn:(id)arg0 ;
-(NSUInteger)countOfEntities;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)enumerationDatabaseResultForSQL:(id)arg0 onConnection:(id)arg1 withParameters:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityClass:(Class)arg0 container:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg0 ordered:(BOOL)arg1 ;
-(id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg0 ordered:(BOOL)arg1 ;
-(id)valueForAggregateFunction:(id)arg0 onEntitiesForProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif