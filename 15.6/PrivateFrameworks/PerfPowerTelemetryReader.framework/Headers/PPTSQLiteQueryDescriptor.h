// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTSQLITEQUERYDESCRIPTOR_H
#define PPTSQLITEQUERYDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PPTSQLiteEntity.h"
#import "PPTSQLitePredicate.h"

@interface PPTSQLiteQueryDescriptor : NSObject <NSCopying>



@property (retain, nonatomic) PPTSQLiteEntity *entity; // ivar: _entity
@property (copy, nonatomic) NSArray *groupByProperties; // ivar: _groupByProperties
@property (nonatomic) NSUInteger limitCount; // ivar: _limitCount
@property (nonatomic) NSUInteger offsetCount; // ivar: _offsetCount
@property (copy, nonatomic) NSArray *orderByDirections; // ivar: _orderByDirections
@property (copy, nonatomic) NSArray *orderByProperties; // ivar: _orderByProperties
@property (copy, nonatomic) PPTSQLitePredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL returnsDistinctEntities; // ivar: _returnsDistinctEntities


-(id)_sqlForSelectWithProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEntity:(id)arg0 predicate:(id)arg1 ;
-(id)initWithEntity:(id)arg0 predicate:(id)arg1 limitCount:(NSUInteger)arg2 offsetCount:(NSUInteger)arg3 ;


@end


#endif