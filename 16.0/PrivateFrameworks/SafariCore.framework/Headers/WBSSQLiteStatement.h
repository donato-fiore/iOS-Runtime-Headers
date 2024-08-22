// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSQLITESTATEMENT_H
#define WBSSQLITESTATEMENT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "WBSSQLiteDatabase.h"

@interface WBSSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}


@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) WBSSQLiteDatabase *database; // ivar: _database
@property (readonly, nonatomic) *sqlite3_stmt handle; // ivar: _handle


-(BOOL)_isValid;
-(BOOL)execute:(*id)arg0 ;
// -(BOOL)fetchWithEnumerationBlock:(id)arg0 error:(unk)arg1  ;
-(id)fetch;
-(id)init;
-(id)initWithDatabase:(id)arg0 query:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 query:(id)arg1 error:(*id)arg2 ;
-(int)execute;
-(void)bindData:(id)arg0 atParameterIndex:(NSUInteger)arg1 ;
-(void)bindDouble:(CGFloat)arg0 atParameterIndex:(NSUInteger)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atParameterIndex:(NSUInteger)arg1 ;
-(void)bindInt:(int)arg0 atParameterIndex:(NSUInteger)arg1 ;
-(void)bindNullAtParameterIndex:(NSUInteger)arg0 ;
-(void)bindString:(id)arg0 atParameterIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)reset;


@end


#endif