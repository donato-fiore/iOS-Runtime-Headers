// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBHANDWRITINGBOXCARFILTERPOINTFIFO_H
#define UIKBHANDWRITINGBOXCARFILTERPOINTFIFO_H

@class NSMutableArray;


#import "UIKBHandwritingPointFIFO.h"

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO

@property (retain, nonatomic) NSMutableArray *prevPoints; // ivar: _prevPoints
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)emitAveragedPoint;
-(void)flush;


@end


#endif