// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLCOLUMN_H
#define EFSQLCOLUMN_H

@class NSData, NSDate, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface EFSQLColumn : NSObject

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, copy, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSInteger databaseIDValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) NSInteger int64Value;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) id *objectValue;
@property (readonly, nonatomic) *sqlite3_stmt statement; // ivar: _statement
@property (readonly, copy, nonatomic) NSString *stringValue;


-(id)debugDescription;
-(id)initWithPreparedStatement:(id)arg0 index:(NSInteger)arg1 ;
-(id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 index:(NSInteger)arg1 ;


@end


#endif