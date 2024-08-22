// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DPIEWEDGEGEOMETRY_H
#define TSCH3DPIEWEDGEGEOMETRY_H



#import "TSCH3DGeometry.h"
#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry

@property (nonatomic) NSInteger angleSteps; // ivar: _angleSteps
@property (nonatomic) NSInteger bevelEdgeSteps; // ivar: _bevelEdgeSteps
@property (nonatomic) float bottomZ; // ivar: _bottomZ
@property (readonly, nonatomic) unsigned int capCount; // ivar: _capCount
@property (readonly, nonatomic) unsigned int capOffset; // ivar: _capOffset
@property (nonatomic) float endAngle; // ivar: _endAngle
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // ivar: _normalDirectionMapper
@property (nonatomic) float radius; // ivar: _radius
@property (nonatomic) NSInteger radiusSteps; // ivar: _radiusSteps
@property (nonatomic) float startAngle; // ivar: _startAngle
@property (nonatomic) float topZ; // ivar: _topZ


-(BOOL)isFullCircle;
-(float)bevelHeight;
-(id)init;
-(id)selectionKnobPositions;
-(int)geometryCount;
-(void)generateArrays;
-(void)generateRoundedTop:(*void)arg0 radiusArray:(*void)arg1 ;
-(void)p_generateAngles:(*void)arg0 ;
-(void)p_generateBevelCoordinates:(*void)arg0 andAngles:(*void)arg1 radiusArray:(*void)arg2 topArray:(*void)arg3 ;


@end


#endif