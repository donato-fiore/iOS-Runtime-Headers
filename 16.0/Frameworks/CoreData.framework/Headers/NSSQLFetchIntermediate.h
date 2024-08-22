// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLFETCHINTERMEDIATE_H
#define NSSQLFETCHINTERMEDIATE_H

@class NSMutableArray, NSMutableDictionary;


#import "NSSQLStatementIntermediate.h"
#import "NSSQLSelectIntermediate.h"
#import "NSSQLGroupByIntermediate.h"
#import "NSSQLHavingIntermediate.h"
#import "NSSQLOffsetIntermediate.h"

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}




-(BOOL)isFunctionScoped;
-(id)fetchIntermediate;
-(id)fetchIntermediateForKeypathExpression:(id)arg0 ;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithScope:(id)arg0 ;
-(id)selectIntermediate;
-(void)dealloc;


@end


#endif