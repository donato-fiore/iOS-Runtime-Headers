// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSCNFACEGEOMETRY_H
#define ARSCNFACEGEOMETRY_H

@class SCNGeometry;
@protocol MTLBuffer;



@interface ARSCNFaceGeometry : SCNGeometry

@property (retain, nonatomic) NSObject<MTLBuffer> *normalBuffer; // ivar: _normalBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *textureBuffer; // ivar: _textureBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *vertexBuffer; // ivar: _vertexBuffer


+(id)faceGeometryWithDevice:(id)arg0 ;
+(id)faceGeometryWithDevice:(id)arg0 eyesFilled:(BOOL)arg1 mouthFilled:(BOOL)arg2 ;
+(id)faceGeometryWithDevice:(id)arg0 fillMesh:(BOOL)arg1 ;
-(void)updateFromFaceGeometry:(id)arg0 ;


@end


#endif