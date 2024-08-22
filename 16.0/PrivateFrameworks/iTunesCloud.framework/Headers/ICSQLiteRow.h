// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSQLITEROW_H
#define ICSQLITEROW_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ICSQLiteStatement.h"

@interface ICSQLiteRow : NSObject {
    NSDictionary *_columnIndexByName;
    *sqlite3_stmt _statement;
    ICSQLiteStatement *_statementWrapper;
}


@property (readonly, nonatomic) NSInteger numberOfColumns;


-(CGFloat)doubleForColumnIndex:(int)arg0 ;
-(CGFloat)doubleForColumnName:(id)arg0 ;
-(NSInteger)int64ForColumnIndex:(int)arg0 ;
-(NSInteger)int64ForColumnName:(id)arg0 ;
-(id)dataForColumnIndex:(int)arg0 ;
-(id)dataForColumnName:(id)arg0 ;
-(id)initWithStatement:(id)arg0 ;
-(id)numberForColumnIndex:(int)arg0 ;
-(id)numberForColumnName:(id)arg0 ;
-(id)stringForColumnIndex:(int)arg0 ;
-(id)stringForColumnName:(id)arg0 ;
-(int)columnIndexForColumnName:(id)arg0 ;
-(int)intForColumnIndex:(int)arg0 ;
-(int)intForColumnName:(id)arg0 ;


@end


#endif