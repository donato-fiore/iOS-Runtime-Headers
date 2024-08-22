// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BSSQLITEFROZENRESULTROW_H
#define _BSSQLITEFROZENRESULTROW_H

@class NSArray;


#import "BSSqliteResultRow.h"

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {
    NSUInteger _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}




-(BOOL)isValid;
-(CGFloat)doubleAtIndex:(NSUInteger)arg0 ;
-(NSInteger)integerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataAtIndex:(NSUInteger)arg0 ;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)stringAtIndex:(NSUInteger)arg0 ;


@end


#endif