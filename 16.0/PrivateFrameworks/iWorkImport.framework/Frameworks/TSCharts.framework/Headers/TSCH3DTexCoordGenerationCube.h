// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DTEXCOORDGENERATIONCUBE_H
#define TSCH3DTEXCOORDGENERATIONCUBE_H



#import "TSCH3DTexCoordGeneration.h"

@interface TSCH3DTexCoordGenerationCube : TSCH3DTexCoordGeneration {
    box<glm::detail::tvec3<float>> _bbox;
}




+(id)generatorWithBBox:(*void)arg0 ;
+(id)generatorWithBBox:(*void)arg0 transform:(*void)arg1 ;
-(id)initWithBBox:(*void)arg0 ;
-(id)initWithBBox:(*void)arg0 transform:(*void)arg1 ;
-(void)generateFromVertexArray:(*void)arg0 normalArray:(*void)arg1 numVertices:(NSInteger)arg2 destination4D:(*void)arg3 ;


@end


#endif