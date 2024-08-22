// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGEOMETRY_H
#define TSCH3DGEOMETRY_H


#import <Foundation/Foundation.h>

#import "TSCH3Dvec3DataBuffer.h"

@interface TSCH3DGeometry : NSObject {
    TSCH3Dvec3DataBuffer *_vertexBuffer;
    TSCH3Dvec3DataBuffer *_normalBuffer;
    int _numVertices;
    box<glm::detail::tvec3<float>> _geometryBounds;
}


@property (readonly, nonatomic) box<glm::detail::tvec3<float>> geometryBounds;


+(id)geometry;
-(*void)normalArray;
-(*void)normalArrayPointer;
-(*void)vertexArray;
-(*void)vertexArrayPointer;
-(id)elementsBoundsPositions;
-(id)init;
-(id)normalBuffer;
-(id)selectionKnobPositions;
-(id)vertexBuffer;
-(int)geometryCount;
-(int)numVertices;
-(unsigned int)capCount;
-(unsigned int)capOffset;
-(unsigned int)geometryOffset;
-(void)allocateArrays:(int)arg0 ;
-(void)reset;
-(void)transformArrays:(*void)arg0 ;


@end


#endif