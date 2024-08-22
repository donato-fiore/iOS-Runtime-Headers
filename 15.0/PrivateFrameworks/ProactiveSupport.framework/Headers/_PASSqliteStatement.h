// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASSQLITESTATEMENT_H
#define _PASSQLITESTATEMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_PASSQLColumnMapping.h"

@interface _PASSqliteStatement : NSObject <NSCopying>

 {
    _PASSQLColumnMapping *_columnMapping;
}


@property (readonly, nonatomic) *sqlite3_stmt stmt; // ivar: _stmt


-(BOOL)isColumnNull:(int)arg0 ;
-(BOOL)isNullForColumnAlias:(char *)arg0 ;
-(BOOL)isNullForColumnName:(char *)arg0 table:(char *)arg1 ;
-(CGFloat)getDoubleForColumn:(int)arg0 ;
-(CGFloat)getDoubleForColumnAlias:(char *)arg0 ;
-(CGFloat)getDoubleForColumnName:(char *)arg0 table:(char *)arg1 ;
-(NSInteger)getInt64ForColumn:(int)arg0 ;
-(NSInteger)getInt64ForColumnAlias:(char *)arg0 ;
-(NSInteger)getInt64ForColumnName:(char *)arg0 table:(char *)arg1 ;
-(NSInteger)getIntegerForColumn:(int)arg0 ;
-(NSInteger)getIntegerForColumnAlias:(char *)arg0 ;
-(NSInteger)getIntegerForColumnName:(char *)arg0 table:(char *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getDoubleAsNSNumberForColumn:(int)arg0 ;
-(id)getDoubleAsNSNumberForColumnAlias:(char *)arg0 ;
-(id)getDoubleAsNSNumberForColumnName:(char *)arg0 table:(char *)arg1 ;
-(id)getInt64AsNSNumberForColumn:(int)arg0 ;
-(id)getInt64AsNSNumberForColumnAlias:(char *)arg0 ;
-(id)getInt64AsNSNumberForColumnName:(char *)arg0 table:(char *)arg1 ;
-(id)getNSDataForColumn:(int)arg0 ;
-(id)getNSDataForColumnAlias:(char *)arg0 ;
-(id)getNSDataForColumnName:(char *)arg0 table:(char *)arg1 ;
-(id)getNSStringForColumn:(int)arg0 ;
-(id)getNSStringForColumnAlias:(char *)arg0 ;
-(id)getNSStringForColumnName:(char *)arg0 table:(char *)arg1 ;
-(id)init;
-(id)initWithStatementPointer:(struct sqlite3_stmt *)arg0 ;
-(int)_bindParam:(int)arg0 toObjcObject:(id)arg1 sqliteMethodName:(char *)arg2 ;
-(int)bindNamedParam:(char *)arg0 toBlock:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toDouble:(CGFloat)arg1 ;
-(int)bindNamedParam:(char *)arg0 toDoubleAsNSNumber:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toInt64:(NSInteger)arg1 ;
-(int)bindNamedParam:(char *)arg0 toInt64AsNSNumber:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toInteger:(NSInteger)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSArray:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSData:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSDictionary:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSIndexSet:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSOrderedSet:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSSet:(id)arg1 ;
-(int)bindNamedParam:(char *)arg0 toNSString:(id)arg1 ;
-(int)bindNamedParamToNull:(char *)arg0 ;
-(int)bindParam:(int)arg0 toBlock:(id)arg1 ;
-(int)bindParam:(int)arg0 toDouble:(CGFloat)arg1 ;
-(int)bindParam:(int)arg0 toDoubleAsNSNumber:(id)arg1 ;
-(int)bindParam:(int)arg0 toInt64:(NSInteger)arg1 ;
-(int)bindParam:(int)arg0 toInt64AsNSNumber:(id)arg1 ;
-(int)bindParam:(int)arg0 toInteger:(NSInteger)arg1 ;
-(int)bindParam:(int)arg0 toNSArray:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSData:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSDictionary:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSIndexSet:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSOrderedSet:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSSet:(id)arg1 ;
-(int)bindParam:(int)arg0 toNSString:(id)arg1 ;
-(int)bindParamToNull:(int)arg0 ;
-(void)prepareForRowDeserialization;


@end


#endif