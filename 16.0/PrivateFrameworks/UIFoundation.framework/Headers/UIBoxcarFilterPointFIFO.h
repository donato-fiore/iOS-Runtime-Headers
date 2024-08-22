// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBOXCARFILTERPOINTFIFO_H
#define UIBOXCARFILTERPOINTFIFO_H



#import "UIPointFIFO.h"
#import "_UIPointVector.h"

@interface UIBoxcarFilterPointFIFO : UIPointFIFO

@property (retain, nonatomic) _UIPointVector *prevPoints; // ivar: _prevPoints
@property (nonatomic) float spacing; // ivar: _spacing
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 ;
-(id)initWithFIFO:(id)arg0 width:(NSUInteger)arg1 spacing:(float)arg2 ;
-(void)addPoint;
-(void)clear;
-(void)dealloc;
-(void)emitAveragedPoint;
-(void)flush;


@end


#endif