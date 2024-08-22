// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLROW_H
#define EFSQLROW_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "EFSQLPreparedStatement.h"

@interface EFSQLRow : NSObject

@property (nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) NSDictionary *columns; // ivar: _columns
@property (nonatomic) BOOL namedColumnsInitialized; // ivar: _namedColumnsInitialized
@property (retain, nonatomic) EFSQLPreparedStatement *preparedStatement; // ivar: _preparedStatement
@property (readonly, nonatomic) *sqlite3_stmt statement; // ivar: _statement


-(BOOL)columnExistsAtIndex:(NSUInteger)arg0 ;
-(BOOL)columnExistsWithName:(id)arg0 ;
-(id)_queryString;
-(id)columnNames;
-(id)debugDescription;
-(id)initWithColumns:(id)arg0 ;
-(id)initWithPreparedStatement:(id)arg0 ;
-(id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif