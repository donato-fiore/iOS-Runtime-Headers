// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITESTATEMENT_H
#define CKSQLITESTATEMENT_H

@class NSString, NSError, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKSQLite.h"

@interface CKSQLiteStatement : NSObject {
    BOOL _reset;
    CKSQLite *_SQLite;
    NSString *_SQL;
    *sqlite3_stmt _handle;
    NSError *_error;
    NSMutableArray *_temporaryBoundObjects;
}




-(void)bindText:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidate:(id)arg0 ;


@end


#endif