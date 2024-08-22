// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTHIDDENSTATEINDEXSET_H
#define TSTHIDDENSTATEINDEXSET_H

@class NSMutableIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTHiddenStateIndexSet : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // ivar: _visibleIndexSet


-(BOOL)anyHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(BOOL)isIndexHidden:(NSUInteger)arg0 ;
-(NSUInteger)findNthNextVisibleIndex:(NSUInteger)arg0 fromIndex:(NSUInteger)arg1 ;
-(NSUInteger)findNthPreviousVisibleIndex:(NSUInteger)arg0 fromIndex:(NSUInteger)arg1 ;
-(NSUInteger)numberHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(NSUInteger)numberVisibleIndicesInRange:(struct _NSRange )arg0 ;
-(NSUInteger)visibleIndexAfterAndIncludingIndex:(NSUInteger)arg0 ;
-(NSUInteger)visibleIndexAfterIndex:(NSUInteger)arg0 ;
-(NSUInteger)visibleIndexBeforeAndIncludingIndex:(NSUInteger)arg0 ;
-(NSUInteger)visibleIndexBeforeIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)visibleIndices;
-(void)deleteRange:(struct _NSRange )arg0 ;
-(void)enumerateVisibleIndexesInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)insertRange:(struct _NSRange )arg0 ;
-(void)moveRangeFrom:(struct _NSRange )arg0 toIndex:(NSUInteger)arg1 ;
-(void)setCount:(NSUInteger)arg0 ;
-(void)setHidden:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setHidden:(BOOL)arg0 atIndexes:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 inRange:(struct _NSRange )arg1 ;
-(void)swapIndex:(NSUInteger)arg0 withIndex:(NSUInteger)arg1 ;


@end


#endif