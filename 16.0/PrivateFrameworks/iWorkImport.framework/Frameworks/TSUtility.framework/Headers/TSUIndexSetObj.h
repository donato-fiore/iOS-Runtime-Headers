// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUINDEXSETOBJ_H
#define TSUINDEXSETOBJ_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUIndexSetObj : NSObject <NSCopying>

 {
    ? _indexSet;
}




-(?)indexSet;
-(?)initWithIndexSetCpp;
-(BOOL)containsIndex:(NSInteger)arg0 ;
-(BOOL)containsIndexes:(id)arg0 ;
-(BOOL)containsIndexesInRange:(struct TSUIndexRangeStruct )arg0 ;
-(BOOL)intersectsIndexesInRange:(struct TSUIndexRangeStruct )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)firstIndex;
-(NSInteger)indexGreaterThanIndex:(NSInteger)arg0 ;
-(NSInteger)indexGreaterThanOrEqualToIndex:(NSInteger)arg0 ;
-(NSInteger)indexLessThanIndex:(NSInteger)arg0 ;
-(NSInteger)indexLessThanOrEqualToIndex:(NSInteger)arg0 ;
-(NSInteger)lastIndex;
-(NSInteger)nthIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countOfIndexesInRange:(struct TSUIndexRangeStruct )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIndexSet:(id)arg0 ;
-(id)initWithNSIndexSet:(id)arg0 ;
-(void)addIndex:(NSInteger)arg0 ;
-(void)addIndexes:(id)arg0 ;
-(void)addIndexesInRange:(struct TSUIndexRangeStruct )arg0 ;
-(void)enumerateIndexesInRange:(struct TSUIndexRangeStruct )arg0 usingBlock:(id)arg1 ;
-(void)enumerateIndexesUsingBlock:(id)arg0 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;
-(void)removeAllIndexes;
-(void)removeIndex:(NSInteger)arg0 ;
-(void)removeIndexes:(id)arg0 ;
-(void)removeIndexesInRange:(struct TSUIndexRangeStruct )arg0 ;


@end


#endif