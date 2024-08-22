// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSQLCOMMANDGENERATOR_H
#define CKVSQLCOMMANDGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKVSQLCommandGenerator : NSObject



+(id)_generateCommaSeparatedPlaceholdersString:(NSUInteger)arg0 ;
+(id)_generateCommaSeparatedValuesString:(id)arg0 ;
+(id)_generateOrderByClause:(id)arg0 ;
+(id)_produceCriterionClause:(id)arg0 tableName:(id)arg1 ;
+(id)_produceSelectClauseWithTableName:(id)arg0 columnNames:(id)arg1 count:(BOOL)arg2 ;
+(id)_produceSetValuesClauseForColumnNames:(id)arg0 columnValues:(id)arg1 ;
+(id)deleteFromTableWithName:(id)arg0 criterion:(id)arg1 ;
+(id)insertCommandStringWithTableName:(id)arg0 columnNames:(id)arg1 returningColumns:(id)arg2 ;
+(id)selectFromTableWithName:(id)arg0 columns:(id)arg1 count:(BOOL)arg2 criterion:(id)arg3 order:(id)arg4 limit:(id)arg5 offset:(id)arg6 ;
+(id)updateWithTableName:(id)arg0 columnNames:(id)arg1 columnValues:(id)arg2 criterion:(id)arg3 ;
+(void)addLimit:(id)arg0 offset:(id)arg1 forSelect:(id)arg2 ;
+(void)replaceOffset:(id)arg0 forSelect:(id)arg1 ;
-(id)init;


@end


#endif