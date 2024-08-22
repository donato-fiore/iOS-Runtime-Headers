// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSQLROW_H
#define CRSQLROW_H


#import <Foundation/Foundation.h>


@interface CRSQLRow : NSObject {
    *sqlite3_stmt _stmt;
}




+(id)dataAtIndex:(int)arg0 copyBytes:(BOOL)arg1 statement:(struct sqlite3_stmt *)arg2 ;
+(id)numberWithDoubleAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1 ;
+(id)numberWithIntegerAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1 ;
+(id)objectAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1 ;
+(id)rowWithStatement:(struct sqlite3_stmt *)arg0 ;
+(id)stringAtIndex:(int)arg0 statement:(struct sqlite3_stmt *)arg1 ;
+(int)enumerateRowsInStatement:(struct sqlite3_stmt *)arg0 usingBlock:(id)arg1 ;
+(int)step:(struct sqlite3_stmt *)arg0 ;
-(id)dataAtIndex:(int)arg0 copyBytes:(BOOL)arg1 ;
-(id)initWithStatement:(struct sqlite3_stmt *)arg0 ;
-(id)numberWithDoubleAtIndex:(int)arg0 ;
-(id)numberWithIntegerAtIndex:(int)arg0 ;
-(id)objectAtIndex:(int)arg0 ;
-(id)stringAtIndex:(int)arg0 ;


@end


#endif