// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFACETRACKINGDATA_H
#define ARFACETRACKINGDATA_H

@class NSUUID, NSString, NSDictionary, NSError;
@protocol ARFaceTrackingDataProtocol, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ARFaceTrackingData : NSObject <ARFaceTrackingDataProtocol>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _meshVertices;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _verticesImageSpace;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _normals;
    vector<float, std::allocator<float>> _blendShapeCoefficients;
    ? _transform;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
    NSObject<OS_dispatch_semaphore> *_imageVerticesSemaphore;
    NSUUID *_anchorIdentifier;
    ? _gazePoint;
}


@property (readonly, nonatomic) *float blendShapeCoefficients;
@property (readonly, nonatomic) NSUInteger blendShapeCoefficientsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? gazePoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property ? imageVertices;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) ? leftEyeTransform; // ivar: _leftEyeTransform
@property (readonly, nonatomic) NSUInteger normalCount;
@property ? normals;
@property (nonatomic) ? rightEyeTransform; // ivar: _rightEyeTransform
@property (readonly) Class superclass;
@property (readonly, nonatomic) float tongueOut; // ivar: _tongueOut
@property (retain, nonatomic) NSDictionary *trackingData; // ivar: _trackingData
@property (readonly, nonatomic) NSError *trackingError; // ivar: _trackingError
@property (readonly, nonatomic) ? transform;
@property (readonly, nonatomic) NSUInteger vertexCount;
@property ? vertices;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrackingData:(id)arg0 anchorIdentifier:(id)arg1 ;
-(id)initWithTrackingData:(id)arg0 transformToMirrored:(BOOL)arg1 anchorIdentifier:(id)arg2 ;
-(void)_extractMetaDataAndTransformToMirrored:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif