// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSRUNSTORAGE_H
#define NSRUNSTORAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSRunStorage : NSObject <NSCopying>

 {
    NSUInteger _count;
    NSUInteger _elementSize;
    NSUInteger _numBlocks;
    NSUInteger _maxBlocks;
    NSUInteger _indexDeltaStartBlock;
    NSInteger _indexDelta;
    *_NSRunBlock _runs;
    NSUInteger _cachedBlock;
    _NSRange _cachedBlockRange;
    NSUInteger _gapBlockIndex;
}




+(void)_setConsistencyCheckingEnabled:(BOOL)arg0 superCheckEnabled:(BOOL)arg1 ;
+(void)initialize;
-(*void)elementAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(NSUInteger)count;
-(NSUInteger)elementSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithElementSize:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithRunStorage:(id)arg0 ;
-(void)_allocData:(NSUInteger)arg0 ;
-(void)_consistencyCheck:(NSInteger)arg0 ;
-(void)_consistencyError:(NSInteger)arg0 startAtZeroError:(BOOL)arg1 cacheError:(BOOL)arg2 inconsistentBlockError:(BOOL)arg3 ;
-(void)_deallocData;
-(void)_ensureCapacity:(NSUInteger)arg0 ;
-(void)_moveGapAndMergeWithBlockRange:(struct _NSRange )arg0 ;
-(void)_moveGapToBlockIndex:(NSUInteger)arg0 ;
-(void)_reallocData:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)insertElement:(*void)arg0 range:(struct _NSRange )arg1 coalesceRuns:(BOOL)arg2 ;
-(void)removeElementsInRange:(struct _NSRange )arg0 coalesceRuns:(BOOL)arg1 ;
-(void)replaceElementsInRange:(struct _NSRange )arg0 withElement:(*void)arg1 coalesceRuns:(BOOL)arg2 ;


@end


#endif