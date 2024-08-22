// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALSQLQUERYTABLE_H
#define HMBLOCALSQLQUERYTABLE_H

@class HMFObject, NSArray, NSString, NSHashTable;


#import "HMBLocalSQLContext.h"
#import "HMBSQLStatement.h"
#import "HMBSQLQueryStatement.h"

@interface HMBLocalSQLQueryTable : HMFObject

@property (readonly, nonatomic) NSArray *columnFields; // ivar: _columnFields
@property (readonly, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (readonly, weak, nonatomic) HMBLocalSQLContext *context; // ivar: _context
@property (readonly, nonatomic) HMBSQLStatement *deleteAll; // ivar: _deleteAll
@property (readonly, nonatomic) HMBSQLStatement *deleteRecord; // ivar: _deleteRecord
@property (readonly, nonatomic) NSString *dropTableSQL; // ivar: _dropTableSQL
@property (nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly, nonatomic) Class modelClass; // ivar: _modelClass
@property (readonly, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, nonatomic) HMBSQLQueryStatement *selectAll; // ivar: _selectAll
@property (readonly, nonatomic) HMBSQLStatement *updateRecord; // ivar: _updateRecord
@property (readonly, nonatomic) NSHashTable *userQueries; // ivar: _userQueries


-(NSUInteger)_deleteAllQueriesForZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)_deleteQueryForRecordRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)_updateQueryForZoneRow:(NSUInteger)arg0 recordRow:(NSUInteger)arg1 encodedColumns:(id)arg2 error:(*id)arg3 ;
-(id)buildQueriableFieldsForModel:(id)arg0 ;
-(id)initWithContext:(id)arg0 queryModel:(Class)arg1 prepareOnly:(BOOL)arg2 ;
-(id)performQueryOn:(id)arg0 properties:(id)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(void)finalize;


@end


#endif