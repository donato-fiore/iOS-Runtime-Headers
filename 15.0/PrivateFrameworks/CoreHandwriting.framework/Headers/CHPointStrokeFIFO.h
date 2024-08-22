// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPOINTSTROKEFIFO_H
#define CHPOINTSTROKEFIFO_H



#import "CHPointFIFO.h"
#import "CHDrawing.h"

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *drawing; // ivar: _drawing
@property (retain, nonatomic) CHDrawing *strokes; // ivar: _strokes


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint;
-(void)clear;
-(void)dealloc;
-(void)flush;


@end


#endif