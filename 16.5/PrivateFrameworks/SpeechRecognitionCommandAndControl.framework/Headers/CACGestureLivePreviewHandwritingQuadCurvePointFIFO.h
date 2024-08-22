// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACGESTURELIVEPREVIEWHANDWRITINGQUADCURVEPOINTFIFO_H
#define CACGESTURELIVEPREVIEWHANDWRITINGQUADCURVEPOINTFIFO_H

@class NSMutableArray;


#import "CACGestureLivePreviewHandwritingPointFIFO.h"

@interface CACGestureLivePreviewHandwritingQuadCurvePointFIFO : CACGestureLivePreviewHandwritingPointFIFO

@property (copy) id *emissionHandler; // ivar: _emissionHandler
@property (nonatomic) ? lastPoint; // ivar: _lastPoint
@property (retain, nonatomic) NSMutableArray *prevPoints; // ivar: _prevPoints
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithFIFO:(id)arg0 scale:(CGFloat)arg1 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)flush;


@end


#endif