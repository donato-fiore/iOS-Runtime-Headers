// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DBAREXTRUSIONGEOMETRY_H
#define TSCH3DBAREXTRUSIONGEOMETRY_H



#import "TSCH3DExtrusionGeometry.h"
#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _normalizedSpine;
}


@property (readonly, nonatomic) float bottomCapScale; // ivar: _bottomCapScale
@property (nonatomic) BarExtrusionSetting extrusionSetting; // ivar: _extrusionSetting
@property (readonly, nonatomic) BOOL hasBottomBevel;
@property (readonly, nonatomic) BOOL hasTopBevel;
@property (readonly, nonatomic) BOOL isCylindrical;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // ivar: _normalDirectionMapper
@property (readonly, nonatomic) float scaleMappingStartingHeight; // ivar: _scaleMappingStartingHeight
@property (readonly, nonatomic) float size;


+(id)namedBevelInterpolationShaderFunction;
-(id)init;
-(id)selectionKnobPositions;
-(int)geometryCount;
-(unsigned int)capCount;
-(unsigned int)capOffset;
-(unsigned int)geometryOffset;
-(void)debug_printDataPoints;
-(void)generateArrays;
-(void)p_insertCrossPointsIntoVector:(*void)arg0 ;
-(void)p_updateNormalizedSpineScaleMappingsUsingTransform:(*void)arg0 forSpineGenerator:(id)arg1 ;


@end


#endif