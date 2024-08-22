// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLSUBQUERYEXPRESSIONINTERMEDIATE_H
#define NSSQLSUBQUERYEXPRESSIONINTERMEDIATE_H

@class NSExpression, NSMutableString, NSString, NSMutableArray;


#import "NSSQLExpressionIntermediate.h"
#import "NSSQLFetchIntermediate.h"
#import "NSSQLEntity.h"
#import "NSSQLColumn.h"

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    BOOL _useDistinct;
    BOOL _isCount;
    BOOL _hasTrailingFunction;
    BOOL _onlyTrailIsCount;
    BOOL _subqueryHasTruePredicate;
}




-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg0 ;
-(id)_generateSQLForVariableExpression:(id)arg0 allowToMany:(BOOL)arg1 inContext:(id)arg2 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg0 ;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)governingAliasForKeypathExpression:(id)arg0 ;
-(id)governingEntityForKeypathExpression:(id)arg0 ;
-(id)initWithExpression:(id)arg0 trailingKeypath:(id)arg1 inScope:(id)arg2 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg0 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(void)dealloc;


@end


#endif