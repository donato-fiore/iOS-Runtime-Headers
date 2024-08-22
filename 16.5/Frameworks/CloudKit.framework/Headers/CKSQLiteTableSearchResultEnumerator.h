// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITETABLESEARCHRESULTENUMERATOR_H
#define CKSQLITETABLESEARCHRESULTENUMERATOR_H

@class NSEnumerator, NSError;


#import "CKSQLiteTable.h"
#import "CKSQLiteCompiledStatement.h"

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    CKSQLiteTable *_table;
    id *_entry;
    BOOL _enumerationStarted;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (retain, nonatomic) CKSQLiteCompiledStatement *statement; // ivar: _statement


-(id)cksqlcs_appendSQLConstantValueToString:(id)arg0 ;
-(id)initWithTable:(id)arg0 statement:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;
-(void)invalidate;


@end


#endif