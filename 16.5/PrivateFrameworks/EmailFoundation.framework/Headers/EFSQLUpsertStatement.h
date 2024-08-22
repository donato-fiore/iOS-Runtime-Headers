// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLUPSERTSTATEMENT_H
#define EFSQLUPSERTSTATEMENT_H

@class NSArray, NSString;
@protocol EFSQLInsertStatementValue, EFSQLUpdateStatementValue, EFSQLValueExpressable;

#import <Foundation/Foundation.h>

#import "EFSQLInsertStatement.h"
#import "EFSQLUpdateStatement.h"

@interface EFSQLUpsertStatement : NSObject {
    EFSQLInsertStatement *_insertStatement;
    EFSQLUpdateStatement *_updateStatement;
    NSArray *_conflictTarget;
}


@property (readonly, nonatomic) NSObject<EFSQLInsertStatementValue> *insertValue;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSObject<EFSQLUpdateStatementValue> *updateValue;
@property (retain, nonatomic) NSObject<EFSQLValueExpressable> *whereClause;


-(id)excludedColumnExpressionForColumnName:(id)arg0 ;
-(id)initWithTable:(id)arg0 conflictTarget:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif