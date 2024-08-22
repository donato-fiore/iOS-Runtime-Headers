// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITEDATABASE_H
#define SIRICORESQLITEDATABASE_H

@class NSCache, NSString;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteDatabase : NSObject {
    *sqlite3 _handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
}


@property (readonly, nonatomic) NSInteger dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path


-(BOOL)alterTableWithName:(id)arg0 addColumn:(id)arg1 error:(*id)arg2 ;
-(BOOL)alterTableWithName:(id)arg0 renameTo:(id)arg1 error:(*id)arg2 ;
-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)checkpointWriteAheadLogWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)createIndex:(id)arg0 error:(*id)arg1 ;
-(BOOL)createTable:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteFromTableWithName:(id)arg0 indexedBy:(id)arg1 criterion:(id)arg2 error:(*id)arg3 ;
-(BOOL)dropIndexWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)dropTableWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeQueryString:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertIntoTableWithName:(id)arg0 record:(id)arg1 error:(*id)arg2 ;
-(BOOL)insertIntoTableWithName:(id)arg0 valueMap:(id)arg1 error:(*id)arg2 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)performForeignKeyCheckWithError:(*id)arg0 ;
-(BOOL)performIntegrityCheckWithError:(*id)arg0 ;
-(BOOL)performQuickCheckWithError:(*id)arg0 ;
-(BOOL)releaseSavepointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackToSavepointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(BOOL)savepointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateTableWithName:(id)arg0 columnName:(id)arg1 columnValue:(id)arg2 criterion:(id)arg3 error:(*id)arg4 ;
-(BOOL)updateTableWithName:(id)arg0 valueMap:(id)arg1 criterion:(id)arg2 error:(*id)arg3 ;
-(BOOL)vacuumWithError:(*id)arg0 ;
-(NSUInteger)countValuesInTableWithName:(id)arg0 columnName:(id)arg1 behavior:(NSInteger)arg2 indexedBy:(id)arg3 criterion:(id)arg4 range:(id)arg5 error:(*id)arg6 ;
-(id)executeQuery:(id)arg0 ;
-(id)fetchTableNamesWithError:(*id)arg0 ;
-(id)fetchTableWithName:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 dataProtectionClass:(NSInteger)arg1 options:(NSInteger)arg2 ;
-(id)selectRecordsFromTableWithName:(id)arg0 columnNames:(id)arg1 behavior:(NSInteger)arg2 indexedBy:(id)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 recordBuilder:(id)arg7 error:(*id)arg8 ;
-(id)selectValueMapsFromTableWithName:(id)arg0 columnNames:(id)arg1 behavior:(NSInteger)arg2 indexedBy:(id)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(*id)arg7 ;
-(id)selectValueTuplesFromTableWithName:(id)arg0 columnNames:(id)arg1 behavior:(NSInteger)arg2 indexedBy:(id)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(*id)arg7 ;
-(id)selectValuesFromTableWithName:(id)arg0 columnName:(id)arg1 behavior:(NSInteger)arg2 indexedBy:(id)arg3 criterion:(id)arg4 order:(id)arg5 range:(id)arg6 error:(*id)arg7 ;


@end


#endif