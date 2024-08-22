// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLSQLITEDATABASESTATEMENTWRAPPER_H
#define QLSQLITEDATABASESTATEMENTWRAPPER_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>


@interface QLSqliteDatabaseStatementWrapper : NSObject {
    NSMapTable *_inUseTable;
}


@property (nonatomic, getter=isInUse) BOOL inUse;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) *sqlite3_stmt stmt; // ivar: _stmt


-(id)initWithStatement:(struct sqlite3_stmt *)arg0 key:(id)arg1 inUseTable:(id)arg2 ;
-(void)dealloc;


@end


#endif