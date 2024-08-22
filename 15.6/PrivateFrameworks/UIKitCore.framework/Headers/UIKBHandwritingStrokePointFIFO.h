// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBHANDWRITINGSTROKEPOINTFIFO_H
#define UIKBHANDWRITINGSTROKEPOINTFIFO_H

@class TIHandwritingStrokes;


#import "UIKBHandwritingPointFIFO.h"

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) TIHandwritingStrokes *strokes; // ivar: _strokes


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)flush;


@end


#endif