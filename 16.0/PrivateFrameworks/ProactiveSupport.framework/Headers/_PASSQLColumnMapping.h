// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLCOLUMNMAPPING_H
#define _PASSQLCOLUMNMAPPING_H


#import <Foundation/Foundation.h>


@interface _PASSQLColumnMapping : NSObject {
    *sqlite3_stmt _stmt;
    int _stmtReprepareCounter;
    *_PASCompactStringArray _tableColumnNamesFromSchema;
    *_PASCompactStringArray _columnAliases;
    char * _uniqueTableName;
}




-(id)initWithStatementPtr:(struct sqlite3_stmt *)arg0 ;
-(int)indexForColumnAlias:(char *)arg0 ;
-(int)indexForColumnName:(char *)arg0 table:(char *)arg1 ;
-(void)_deallocState;
-(void)_ensureColumnMappingExists;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateIfNeeded;
-(void)resetSearchHint;


@end


#endif