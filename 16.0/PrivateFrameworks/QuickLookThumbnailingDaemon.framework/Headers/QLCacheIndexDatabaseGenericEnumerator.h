// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEINDEXDATABASEGENERICENUMERATOR_H
#define QLCACHEINDEXDATABASEGENERICENUMERATOR_H


#import <Foundation/Foundation.h>

#import "QLSqliteDatabase.h"

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {
    QLSqliteDatabase *_sqliteDatabase;
    *sqlite3_stmt _stmt;
}




-(id)initWithSqliteDatabase:(id)arg0 ;
-(void)dealloc;


@end


#endif