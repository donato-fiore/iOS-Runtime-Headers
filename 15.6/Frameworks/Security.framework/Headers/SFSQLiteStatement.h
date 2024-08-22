// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSQLITESTATEMENT_H
#define SFSQLITESTATEMENT_H

@class NSString, NSDictionary, NSMutableArray;
@protocol SFSQLiteRow;

#import <Foundation/Foundation.h>

#import "SFSQLite.h"

@interface SFSQLiteStatement : NSObject <SFSQLiteRow>



@property (readonly, nonatomic) NSString *SQL; // ivar: _SQL
@property (readonly, weak, nonatomic) SFSQLite *SQLite; // ivar: _SQLite
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *sqlite3_stmt handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *indexesByColumnName; // ivar: _indexesByColumnName
@property (nonatomic, getter=isReset) BOOL reset; // ivar: _reset
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects; // ivar: _temporaryBoundObjects


-(BOOL)step;
-(CGFloat)doubleAtIndex:(NSUInteger)arg0 ;
-(NSInteger)int64AtIndex:(NSUInteger)arg0 ;
-(NSUInteger)columnCount;
-(NSUInteger)indexForColumnName:(id)arg0 ;
-(id)allObjects;
-(id)allObjectsByColumnName;
-(id)blobAtIndex:(NSUInteger)arg0 ;
-(id)columnNameAtIndex:(NSUInteger)arg0 ;
-(id)initWithSQLite:(id)arg0 SQL:(id)arg1 handle:(struct sqlite3_stmt *)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retainedTemporaryBoundObject:(id)arg0 ;
-(id)textAtIndex:(NSUInteger)arg0 ;
-(int)columnTypeAtIndex:(NSUInteger)arg0 ;
-(int)intAtIndex:(NSUInteger)arg0 ;
-(void)bindBlob:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindDouble:(CGFloat)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindInt:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindNullAtIndex:(NSUInteger)arg0 ;
-(void)bindText:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindValues:(id)arg0 ;
-(void)enumerateColumnsUsingBlock:(id)arg0 ;
-(void)finalizeStatement;
-(void)reset;
-(void)resetAfterStepError;


@end


#endif