// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEDATABASETABLE_H
#define CKSQLITEDATABASETABLE_H



#import "CKSQLiteTable.h"
#import "CKSQLiteDatabase.h"

@interface CKSQLiteDatabaseTable : CKSQLiteTable {
    CKSQLiteDatabase *_unsafeUnretainedDb;
}


@property (nonatomic) CKSQLiteDatabase *db;




@end


#endif