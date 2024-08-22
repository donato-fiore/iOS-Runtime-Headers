// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFACEGEOMETRY_H
#define ARFACEGEOMETRY_H

@protocol NSSecureCoding, NSCopying, ARFaceTrackingDataProtocol, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ARFaceGeometry : NSObject <NSSecureCoding, NSCopying>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _customVertices;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _normals;
    id<ARFaceTrackingDataProtocol> *_trackingData;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
}


@property (readonly, nonatomic) NSUInteger textureCoordinateCount;
@property ? textureCoordinates;
@property (readonly, nonatomic) NSUInteger triangleCount;
@property (readonly, nonatomic) *short triangleIndices;
@property (readonly, nonatomic) NSUInteger vertexCount;
@property ? vertices;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlendShapes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomVertices:(*NSUInteger)arg0 verticesCount;
-(id)initWithFaceTrackingData:(id)arg0 ;
-(id)initWithFaceTrackingDataProtocol:(id)arg0 ;
-(id)normalForLabeledFacePosition;
-(id)positionForLabeledFacePosition;
-(short)closestVertexIndexToLabeledFacePosition:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif