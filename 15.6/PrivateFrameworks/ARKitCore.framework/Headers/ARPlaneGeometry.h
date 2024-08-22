// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPLANEGEOMETRY_H
#define ARPLANEGEOMETRY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPlaneGeometry : NSObject <NSSecureCoding>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _vertices;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _textureCoordinates;
    vector<short, std::allocator<short>> _triangleIndices;
    ? _center;
    ? _extent;
}


@property (readonly, nonatomic) NSUInteger boundaryVertexCount; // ivar: _boundaryVertexCount
@property ? boundaryVertices;
@property ? center;
@property ? extent;
@property (readonly, nonatomic) NSUInteger textureCoordinateCount;
@property ? textureCoordinates;
@property (readonly, nonatomic) NSUInteger triangleCount;
@property (readonly, nonatomic) *short triangleIndices;
@property (readonly, nonatomic) NSUInteger vertexCount;
@property ? vertices;


-(id)initWithBoundaryVertices:(*void)arg0 centerextent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertices:(*void)arg0 triangleIndices:(*void)arg1 boundaryVertexCount:(NSUInteger)arg2 centerextent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif