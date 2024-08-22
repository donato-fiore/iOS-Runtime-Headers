// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXDATABASE_H
#define CXDATABASE_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface CXDatabase : NSObject

@property (readonly, nonatomic) int countOfRecordsModifiedByLastQuery;
@property (nonatomic) *sqlite3 database; // ivar: _database
@property (readonly, nonatomic) NSInteger lastInsertedRowID;
@property (retain, nonatomic) NSMutableDictionary *sqlQueryToStatements; // ivar: _sqlQueryToStatements
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)enableForeignKeysWithError:(*id)arg0 ;
-(BOOL)executeSQL:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSQL:(id)arg0 withBindings:(id)arg1 error:(*id)arg2 ;
-(BOOL)executeSQL:(id)arg0 withBindings:(id)arg1 transient:(BOOL)arg2 error:(*id)arg3 ;
// -(BOOL)executeSQL:(id)arg0 withStatementPreparationBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)executeSQL:(id)arg0 withStatementPreparationBlock:(id)arg1 transient:(unk)arg2 error:(BOOL)arg3  ;
// -(BOOL)performTransactionWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
// -(BOOL)selectSQL:(id)arg0 withBindings:(id)arg1 expectedColumnCount:(NSInteger)arg2 resultRowHandler:(id)arg3 error:(unk)arg4  ;
// -(BOOL)selectSQL:(id)arg0 withBindings:(id)arg1 expectedColumnCount:(NSInteger)arg2 transient:(BOOL)arg3 resultRowHandler:(id)arg4 error:(unk)arg5  ;
-(BOOL)setBusyTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)vacuumWithError:(*id)arg0 ;
-(id)_statementForSQL:(id)arg0 transient:(BOOL)arg1 error:(*id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 readOnly:(BOOL)arg1 error:(*id)arg2 ;
-(id)namesOfColumnsInTableWithName:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif