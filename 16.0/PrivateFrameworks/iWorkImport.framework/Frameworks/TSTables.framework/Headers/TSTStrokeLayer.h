// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTROKELAYER_H
#define TSTSTROKELAYER_H

@class TSPObject;
@protocol NSCopying, NSMutableCopying, TSTStrokeLayerEnumerating;



@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying, TSTStrokeLayerEnumerating>

 {
    vector<TSTStrokeLayerRun, std::allocator<TSTStrokeLayerRun>> _strokeRuns;
}


@property (nonatomic) unsigned int columnOrRowIndex; // ivar: _columnOrRowIndex
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) NSUInteger strokeLayerCount;


+(id)strokeLayer;
-(NSInteger)startingIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findStrokeAndRangeAtIndex:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 columnOrRowIndex:(unsigned int)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nextStrokeAndRange:(id)arg0 ;
-(id)strokeLayerAtIndex:(NSUInteger)arg0 ;
-(id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange )arg0 ;
-(id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange )arg0 ;
-(int)startingStrokeOrder;
-(struct ? )findWidthAndRangeAtIndex:(NSInteger)arg0 ;
-(struct ? )nextWidthAndRange:(struct ? )arg0 ;
-(void)enumerateStrokesInRange:(struct TSTSimpleRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateStrokesUsingBlock:(id)arg0 ;
-(void)enumerateWidthsInRange:(struct TSTSimpleRange )arg0 usingBlock:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_appendStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)p_flattenStrokeOrder;
-(void)p_insertSpaceAtRange:(struct TSTSimpleRange )arg0 ;
-(void)p_invalidate;
-(void)p_invalidateRange:(struct TSTSimpleRange )arg0 ;
-(void)p_mergeStrokeRunsAtPosition:(NSUInteger)arg0 ;
-(void)p_removeRange:(struct TSTSimpleRange )arg0 ;
-(void)p_setStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif