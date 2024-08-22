// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTROKEORDEREDLAYER_H
#define TSTSTROKEORDEREDLAYER_H



#import "TSTStrokeLayer.h"

@interface TSTStrokeOrderedLayer : TSTStrokeLayer

@property (retain, nonatomic) TSTStrokeLayer *majorStrokeLayer; // ivar: _majorStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *minorStrokeLayer; // ivar: _minorStrokeLayer


-(NSInteger)startingIndex;
-(id)findStrokeAndRangeAtIndex:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 majorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2 ;
-(id)nextStrokeAndRange:(id)arg0 ;
-(id)p_findStrokeAndRangeAtIndex:(NSInteger)arg0 highOrderToken:(id)arg1 updatingLowOrderToken:(*id)arg2 lowOrderLayer:(id)arg3 ;
-(struct ? )findWidthAndRangeAtIndex:(NSInteger)arg0 ;
-(struct ? )nextWidthAndRange:(struct ? )arg0 ;
-(void)appendStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)enumerateRawStrokesSegmentsUsingBlock:(id)arg0 ;
-(void)enumerateStrokesUsingBlock:(id)arg0 ;
-(void)insertStroke:(id)arg0 inRange:(struct TSTSimpleRange )arg1 order:(int)arg2 ;
-(void)invalidate;
-(void)invalidateRange:(struct TSTSimpleRange )arg0 ;


@end


#endif