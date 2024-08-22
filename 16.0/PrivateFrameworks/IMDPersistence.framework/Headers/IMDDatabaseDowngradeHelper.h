// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDDATABASEDOWNGRADEHELPER_H
#define IMDDATABASEDOWNGRADEHELPER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface IMDDatabaseDowngradeHelper : NSObject {
    BOOL _inTransaction;
}


@property (retain, nonatomic) NSArray *createIndexesSQL; // ivar: _createIndexesSQL
@property (retain, nonatomic) NSArray *createTablesSQL; // ivar: _createTablesSQL
@property (retain, nonatomic) NSArray *createTriggersSQL; // ivar: _createTriggersSQL
@property (readonly, nonatomic) *sqlite3 database; // ivar: _database
@property (readonly, nonatomic) NSInteger downgradesToVersion; // ivar: _downgradesToVersion
@property (readonly, nonatomic) BOOL isOpen;
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSArray *tableNames; // ivar: _tableNames


-(BOOL)_readIntegerFromQuery:(id)arg0 resultBlock:(id)arg1 ;
-(BOOL)beginTransaction:(id)arg0 ;
-(BOOL)cloneTableContents:(id)arg0 withOperation:(struct IMDSqlOperation *)arg1 resultBlock:(id)arg2 ;
-(BOOL)close:(id)arg0 ;
-(BOOL)commitTransaction:(id)arg0 ;
-(BOOL)createIndexes:(id)arg0 ;
-(BOOL)createTables:(id)arg0 ;
-(BOOL)createTriggers:(id)arg0 ;
-(BOOL)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation *)arg0 resultBlock:(id)arg1 ;
-(BOOL)open:(id)arg0 ;
-(BOOL)readDatabaseVersion:(id)arg0 ;
-(BOOL)readRowCountForTable:(id)arg0 resultBlock:(id)arg1 ;
-(BOOL)revertTransaction:(id)arg0 ;
-(BOOL)runArrayOfQueries:(id)arg0 resultBlock:(id)arg1 ;
-(BOOL)runSimpleQuery:(id)arg0 resultBlock:(id)arg1 ;
-(BOOL)writeDatabaseVersion:(NSInteger)arg0 resultBlock:(id)arg1 ;
-(id)errorFromResult:(int)arg0 query:(id)arg1 ;
-(id)initWithPath:(id)arg0 tableNames:(id)arg1 createTablesSQL:(id)arg2 createIndexesSQL:(id)arg3 createTriggersSQL:(id)arg4 downgradesToVersion:(NSInteger)arg5 ;
-(void)dealloc;


@end


#endif