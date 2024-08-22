// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITEQUERYDESCRIPTOR_H
#define HDSQLITEQUERYDESCRIPTOR_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDSQLitePredicate.h"

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying>



@property (nonatomic) Class entityClass; // ivar: _entityClass
@property (copy, nonatomic) NSString *groupBy; // ivar: _groupBy
@property (nonatomic) NSInteger limitCount; // ivar: _limitCount
@property (copy, nonatomic) NSArray *orderingTerms; // ivar: _orderingTerms
@property (copy, nonatomic) HDSQLitePredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSArray *preferredEntityJoinOrder; // ivar: _preferredEntityJoinOrder
@property (nonatomic) BOOL returnsDistinctEntities; // ivar: _returnsDistinctEntities
@property (nonatomic) BOOL shouldExpandLastSQLStatement; // ivar: _shouldExpandLastSQLStatement


-(id)_SQLForDeleteWithError:(*id)arg0 ;
-(id)_SQLForSelectWithProperties:(id)arg0 columns:(id)arg1 ;
-(id)_joinClauseForProperties:(id)arg0 ;
-(id)_sortedJoinClauses:(id)arg0 preferredOrder:(id)arg1 baseTables:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)selectSQLForProperties:(id)arg0 ;
-(void)bindToDeleteStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;
-(void)bindToSelectStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif