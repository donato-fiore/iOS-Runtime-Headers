// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DEXTRUSIONGEOMETRY_H
#define TSCH3DEXTRUSIONGEOMETRY_H



#import "TSCH3DGeometry.h"

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {
    vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> _crossSection;
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _spine;
    vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> _scale;
    unsigned int _beginCapOffset;
    int _beginCapCount;
}


@property (nonatomic) BOOL beginCap; // ivar: _beginCap
@property (readonly, nonatomic) unsigned int capCount; // ivar: _endCapCount
@property (readonly, nonatomic) unsigned int capOffset; // ivar: _endCapOffset
@property (nonatomic) float crossSectionCreaseAngle; // ivar: _crossSectionCreaseAngle
@property (nonatomic) BOOL endCap; // ivar: _endCap
@property (nonatomic) tvec3<float> normalBias; // ivar: _normalBias
@property (nonatomic) float spineCreaseAngle; // ivar: _spineCreaseAngle
@property (nonatomic) tvec3<float> spineDirectionBias; // ivar: _spineDirectionBias


-(*void)crossSection;
-(*void)scale;
-(*void)spine;
-(id)init;
-(void)debug_dumpGeometryBounds;
-(void)generateArrays;
-(void)setCrossSection:(*void)arg0 ;
-(void)setScale:(*void)arg0 ;
-(void)setSpine:(*void)arg0 ;


@end


#endif