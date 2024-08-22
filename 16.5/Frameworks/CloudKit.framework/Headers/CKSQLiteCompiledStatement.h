// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITECOMPILEDSTATEMENT_H
#define CKSQLITECOMPILEDSTATEMENT_H

@class NSMutableString, NSArray, NSPredicate, NSMutableDictionary, NSDictionary, NSMutableArray, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "CKSQLiteDatabase.h"
#import "CKSQLiteTable.h"

@interface CKSQLiteCompiledStatement : NSObject {
    CKSQLiteDatabase *_db;
    *sqlite3_stmt _handle;
    NSMutableString *_sql;
    NSArray *_resultColumns;
    NSArray *_resultColumnTypes;
    NSPredicate *_wherePredicate;
    Class _tableClass;
    NSMutableDictionary *_bindingTypesByVariable;
    NSDictionary *_searchValues;
    BOOL _needsSearchBinding;
    BOOL _sqlLoggingEnabled;
    NSMutableString *_orderBySQL;
    NSMutableArray *_boundObjects;
    NSArray *_updatedColumns;
}


@property (weak, nonatomic) CKSQLiteTable *cachingTable; // ivar: _cachingTable
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSNumber *limit; // ivar: _limit
@property (retain, nonatomic) NSNumber *offset; // ivar: _offset
@property (retain, nonatomic) NSArray *searchProperties; // ivar: _searchProperties


+(id)_statementForFetchingMinMax:(id)arg0 forColumn:(id)arg1 inTable:(id)arg2 error:(*id)arg3 ;
+(id)statementForCountingRowsInTable:(id)arg0 ;
+(id)statementForDeletingInTable:(id)arg0 ;
+(id)statementForEmptyCheckInTable:(id)arg0 ;
+(id)statementForFetchingAllTableNamesInDatabase:(id)arg0 ;
+(id)statementForFetchingColumns:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
+(id)statementForFetchingMaximumValueForColumn:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
+(id)statementForFetchingMinimumValueForColumn:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
+(id)statementForInserting:(id)arg0 inTable:(id)arg1 ;
+(id)statementForInserting:(id)arg0 orUpdating:(id)arg1 inTable:(id)arg2 ;
+(id)statementForSizingColumn:(id)arg0 inTable:(id)arg1 ;
+(id)statementForSummingColumn:(id)arg0 inTable:(id)arg1 ;
+(id)statementForUpdatingColumns:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
-(BOOL)step:(*id)arg0 ;
-(id)addBindingVariable:(id)arg0 withAssociatedProperty:(id)arg1 ;
-(id)bindSearchValues:(id)arg0 ;
-(id)bindValue:(id)arg0 ofType:(unsigned int)arg1 atIndex:(int)arg2 ;
-(id)bindValueColumn:(id)arg0 type:(unsigned int)arg1 value:(id)arg2 ;
-(id)boundObjects;
-(id)cksqlcs_appendSQLConstantValueToString:(id)arg0 ;
-(id)compile;
-(id)description;
-(id)doSearchValueBinding;
-(id)fetchedColumns;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithTable:(id)arg0 ;
-(id)searchBindingsDescription;
-(id)setSearchPredicate:(id)arg0 forProperties:(id)arg1 tableClass:(Class)arg2 ;
-(id)sqlValueForVariable:(id)arg0 ;
-(id)updatedColumns;
-(void)dealloc;
-(void)enumerateResultColumnsWithBlock:(id)arg0 ;
-(void)invalidate;
-(void)orderByProperty:(id)arg0 ascending:(BOOL)arg1 ;
-(void)resetAndClearBindings;


@end


#endif