// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXARMETADATA_H
#define JFXARMETADATA_H

@class NSDictionary, ARFrame;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "JFXFaceAnchor.h"

@interface JFXARMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) ? anchorTransform; // ivar: _anchorTransform
@property (copy, nonatomic) NSDictionary *animojiPhysicsBlendShapes; // ivar: _animojiPhysicsBlendShapes
@property (readonly, nonatomic) ARFrame *arFrame; // ivar: _arFrame
@property (readonly, nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (readonly, nonatomic) JFXFaceAnchor *faceAnchor; // ivar: _faceAnchor
@property (readonly, nonatomic) BOOL hasTrackedFace;
@property (readonly, nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (readonly, nonatomic) NSInteger pvTransformOrientation; // ivar: _pvTransformOrientation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithARFrame:(id)arg0 faceAnchor:(id)arg1 ;
-(id)initWithAnchorTransform:(struct ? )arg0 cameraTransform:(struct ? )arg1 cameraIntrinsics:(struct ? )arg2 cameraImageResolution:(struct CGSize )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceAnchor:(id)arg0 cameraIntrinsics:(struct ? )arg1 ;
-(struct ? )cameraProjectionForOutputSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 zNear:(CGFloat)arg2 zFar:(CGFloat)arg3 ;
-(struct ? )cameraTransformForInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif