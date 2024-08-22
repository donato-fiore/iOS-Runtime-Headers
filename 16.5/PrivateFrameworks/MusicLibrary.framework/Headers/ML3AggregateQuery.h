// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3AGGREGATEQUERY_H
#define ML3AGGREGATEQUERY_H

@class NSString;
@protocol NSSecureCoding;


#import "ML3Query.h"

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>



@property (readonly, nonatomic) Class aggregateEntityClass; // ivar: _aggregateEntityClass
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty; // ivar: _foreignPersistentIDProperty
@property (nonatomic) BOOL isFastCountable; // ivar: _isFastCountable


+(BOOL)supportsSecureCoding;
-(BOOL)hasEntities;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(Class)entityClass;
-(NSUInteger)countOfEntities;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnitQuery:(id)arg0 aggregateEntityClass:(Class)arg1 foreignPersistentIDProperty:(id)arg2 ;
-(id)persistentIDProperty;
-(id)selectPersistentIDsSQLAndProperties:(id)arg0 ordered:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif