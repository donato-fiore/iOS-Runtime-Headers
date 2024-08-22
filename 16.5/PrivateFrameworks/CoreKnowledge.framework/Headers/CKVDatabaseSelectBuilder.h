// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDATABASESELECTBUILDER_H
#define CKVDATABASESELECTBUILDER_H

@class NSArray, NSNumber;


#import "CKVDatabaseCommandBuilder.h"
#import "CKVSQLCommandOrder.h"

@interface CKVDatabaseSelectBuilder : CKVDatabaseCommandBuilder {
    CKVSQLCommandOrder *_order;
    NSArray *_columns;
    BOOL _count;
    NSNumber *_limit;
    NSNumber *_offset;
}




-(id)build;
-(id)initWithTableName:(id)arg0 ;
-(void)setColumns:(id)arg0 ;
-(void)setCommandCriterion:(id)arg0 ;
-(void)setCommandOrder:(id)arg0 ;
-(void)setCount:(BOOL)arg0 ;
-(void)setLimit:(id)arg0 ;
-(void)setOffset:(id)arg0 ;


@end


#endif