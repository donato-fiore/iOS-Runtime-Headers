// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSSQLITEQUERYDESCRIPTOR_H
#define AMSSQLITEQUERYDESCRIPTOR_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AMSSQLitePredicate.h"

@interface AMSSQLiteQueryDescriptor : NSObject <NSCopying>



@property (nonatomic) Class entityClass; // ivar: _entityClass
@property (nonatomic) NSInteger limitCount; // ivar: _limitCount
@property (nonatomic) Class memoryEntityClass; // ivar: _memoryEntityClass
@property (copy, nonatomic) NSString *orderingClause; // ivar: _orderingClause
@property (copy, nonatomic) NSArray *orderingDirections; // ivar: _orderingDirections
@property (copy, nonatomic) NSArray *orderingProperties; // ivar: _orderingProperties
@property (copy, nonatomic) AMSSQLitePredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL returnsDistinctEntities; // ivar: _returnsDistinctEntities


-(id)_newSelectSQLWithProperties:(id)arg0 columns:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif