// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKPOINTSMOOTHING_H
#define DKPOINTSMOOTHING_H

@class UIBoxcarFilterPointFIFO, UIQuadCurvePointFIFO, UIPointFIFO;

#import <Foundation/Foundation.h>


@interface DKPointSmoothing : NSObject

@property (retain, nonatomic) UIBoxcarFilterPointFIFO *boxcarFIFO; // ivar: _boxcarFIFO
@property (copy, nonatomic) id *emissionHandler;
@property (nonatomic) BOOL emitInterpolatedPoints; // ivar: _emitInterpolatedPoints
@property (retain, nonatomic) UIQuadCurvePointFIFO *interpolatingFIFO; // ivar: _interpolatingFIFO
@property (nonatomic) float spacing; // ivar: _spacing
@property (retain, nonatomic) UIPointFIFO *strokeFIFO; // ivar: _strokeFIFO
@property (nonatomic) float unitScale; // ivar: _unitScale
@property (nonatomic) NSUInteger width; // ivar: _width


+(id)interpolateFromPointtoPointcontrolPointtime;
// +(void)_interpolateFromPoint:(float)arg0 toPoint:(id)arg1 withControlPoint:(unk)arg2 atUnitScaleemissionHandler ;
-(id)init;
-(id)initWithWidth:(NSUInteger)arg0 spacing:(float)arg1 ;
-(void)addPoint;
-(void)clear;
-(void)emitPoint;
-(void)flush;


@end


#endif