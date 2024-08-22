// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTMUTABLESTROKELAYER_H
#define TSTMUTABLESTROKELAYER_H



#import "TSTStrokeLayer.h"

@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (nonatomic) unsigned int columnOrRowIndex;


-(BOOL)hasStrokeInRange:(struct TSTSimpleRange )arg0 ;
-(void)appendStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)applyStroke:(id)arg0 atIndexes:(id)arg1 order:(int)arg2 applyStroke:(id)arg3 atIndexes:(id)arg4 order:(int)arg5 applyStroke:(id)arg6 atIndexes:(id)arg7 order:(int)arg8 applyStroke:(id)arg9 atIndexes:(id)arg10 order:(int)arg11 applyStroke:(id)arg12 atIndexes:(id)arg13 order:(int)arg14 ;
-(void)flattenStrokeOrder;
-(void)insertSpaceAtRange:(struct TSTSimpleRange )arg0 ;
-(void)invalidate;
-(void)invalidateRange:(struct TSTSimpleRange )arg0 ;
-(void)moveRange:(struct _NSRange )arg0 toIndex:(NSInteger)arg1 ;
-(void)removeRange:(struct TSTSimpleRange )arg0 ;
-(void)setStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)swapSegmentAtIndex:(NSInteger)arg0 withSegmentAtIndex:(NSInteger)arg1 ;


@end


#endif