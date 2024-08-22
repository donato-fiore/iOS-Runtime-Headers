// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSQLITECACHEDSTATEMENT_H
#define CKVSQLITECACHEDSTATEMENT_H


#import <Foundation/Foundation.h>


@interface CKVSQLiteCachedStatement : NSObject {
    *sqlite3_stmt _stmt;
}




-(id)init;
-(id)initWithStmt:(struct sqlite3_stmt *)arg0 ;
-(struct sqlite3_stmt *)stmt;
-(void)dealloc;


@end


#endif