// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVDCACHEDBWRITER_H
#define GEONAVDCACHEDBWRITER_H



#import "GEODBWriter.h"

@interface GEONavdCacheDBWriter : GEODBWriter {
    *sqlite3_stmt _sqlInsertCache;
    *sqlite3_stmt _sqlDeleteRowForRowID;
    *sqlite3_stmt _sqlUpdateCache;
    *sqlite3_stmt _sqlDeleteAllRows;
}




-(BOOL)_updateRowId:(NSInteger)arg0 withKey:(id)arg1 value:(id)arg2 ;
-(NSInteger)_insertWithKey:(id)arg0 value:(id)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(void)_createCacheTable;
-(void)_deleteAllRows;
-(void)_deleteRowsWithRowIDs:(id)arg0 ;
-(void)_openIfNecessary;
-(void)dealloc;
-(void)performStatementPreparationTasks;
-(void)performTableCreationTasks;


@end


#endif