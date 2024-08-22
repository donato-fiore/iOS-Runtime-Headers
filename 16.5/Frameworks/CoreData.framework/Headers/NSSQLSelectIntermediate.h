// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLSELECTINTERMEDIATE_H
#define NSSQLSELECTINTERMEDIATE_H

@class NSString, NSArray;


#import "NSSQLIntermediate.h"
#import "NSSQLEntity.h"

@interface NSSQLSelectIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    BOOL _useDistinct;
    NSString *_columnAlias;
    BOOL _isCount;
}




-(BOOL)isTargetColumnsScoped;
-(BOOL)onlyFetchesAggregates;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initForCorrelationTarget:(id)arg0 alias:(id)arg1 fetchColumns:(id)arg2 inScope:(id)arg3 ;
-(id)initWithEntity:(id)arg0 alias:(id)arg1 fetchColumns:(id)arg2 inScope:(id)arg3 ;
-(id)resolveVariableExpression:(id)arg0 inContext:(id)arg1 ;
-(void)dealloc;


@end


#endif