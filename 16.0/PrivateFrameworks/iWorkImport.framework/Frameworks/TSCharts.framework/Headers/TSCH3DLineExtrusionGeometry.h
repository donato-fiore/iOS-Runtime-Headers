// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DLINEEXTRUSIONGEOMETRY_H
#define TSCH3DLINEEXTRUSIONGEOMETRY_H



#import "TSCH3DExtrusionGeometry.h"

@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry

@property (nonatomic) tvec2<float> xlimits; // ivar: _xlimits
@property (nonatomic) tvec2<float> ylimits; // ivar: _ylimits


+(id)lineFromXValues:(*void)arg0 yValues:(*void)arg1 ;
-(id)elementsBoundsPositions;
-(id)init;
-(id)selectionKnobPositions;
-(struct tmat3x3<float> )p_rotationMatrixForCrossSectionIndex:(NSUInteger)arg0 ;
-(struct tmat4x4<float> )matrixAtXPosition:(float)arg0 returningXRangeInfo:(*void)arg1 ;
-(void)generateArrays;
-(void)setSpine:(*void)arg0 ;


@end


#endif