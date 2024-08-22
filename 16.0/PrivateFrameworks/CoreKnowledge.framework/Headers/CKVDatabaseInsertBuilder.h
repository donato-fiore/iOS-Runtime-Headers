// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASEINSERTBUILDER_H
#define CKVDATABASEINSERTBUILDER_H

@class NSArray;


#import "CKVDatabaseCommandBuilder.h"

@interface CKVDatabaseInsertBuilder : CKVDatabaseCommandBuilder {
    NSUInteger _numberOfColumns;
    NSArray *_columnNames;
    NSArray *_columnValues;
    NSArray *_returningColumns;
}




-(BOOL)_setError:(*id)arg0 withCode:(NSInteger)arg1 ;
-(id)buildWithError:(*id)arg0 ;
-(id)initWithTableName:(id)arg0 columnNames:(id)arg1 ;
-(void)setColumnValues:(id)arg0 ;
-(void)setReturningColumns:(id)arg0 ;


@end


#endif