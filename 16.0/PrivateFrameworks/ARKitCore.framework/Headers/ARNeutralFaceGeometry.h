// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARNEUTRALFACEGEOMETRY_H
#define ARNEUTRALFACEGEOMETRY_H


#import <Foundation/Foundation.h>


@interface ARNeutralFaceGeometry : NSObject {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _verticesVector;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _texCoordinatesVector;
    vector<short, std::allocator<short>> _trianglesIndicesVector;
}




+(id)sharedNeutralGeometry;
-(*id)textureCoordinates;
-(*id)vertices;
-(*short)triangleIndices;
-(NSUInteger)textureCoordinateCount;
-(NSUInteger)triangleCount;
-(NSUInteger)vertexCount;
-(id)initFromCVAFaceTrackingSemantics;


@end


#endif