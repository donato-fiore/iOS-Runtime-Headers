// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEROW_H
#define ML3DATABASEROW_H


#import <Foundation/Foundation.h>

#import "ML3DatabaseResult.h"

@interface ML3DatabaseRow : NSObject {
    *sqlite3_stmt _stmt;
}


@property (readonly, nonatomic) ML3DatabaseResult *parentResult; // ivar: _parentResult


-(CGFloat)doubleForColumnIndex:(NSUInteger)arg0 ;
-(CGFloat)doubleForColumnName:(id)arg0 ;
-(NSInteger)int64ForColumnIndex:(NSUInteger)arg0 ;
-(NSInteger)int64ForColumnName:(id)arg0 ;
-(NSUInteger)columnCount;
-(char *)cStringForColumnIndex:(NSUInteger)arg0 ;
-(char *)cStringForColumnName:(id)arg0 ;
-(id)arrayRepresentation;
-(id)dataForColumnIndex:(NSUInteger)arg0 ;
-(id)dataForColumnName:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithParentResult:(id)arg0 ;
-(id)numberForColumnIndex:(NSUInteger)arg0 ;
-(id)numberForColumnName:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)stringForColumnIndex:(NSUInteger)arg0 ;
-(id)stringForColumnName:(id)arg0 ;
-(id)valueForColumnIndex:(NSUInteger)arg0 ;
-(id)valueForColumnName:(id)arg0 ;
-(int)intForColumnIndex:(NSUInteger)arg0 ;
-(int)intForColumnName:(id)arg0 ;
-(void)getBlobBytes:(**void)arg0 outLength:(*int)arg1 forColumnIndex:(NSUInteger)arg2 ;
-(void)getBlobBytes:(**void)arg0 outLength:(*int)arg1 forColumnName:(id)arg2 ;


@end


#endif