// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXFACEANCHOR_H
#define JFXFACEANCHOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface JFXFaceAnchor : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (nonatomic) NSInteger captureInterfaceOrientation; // ivar: _captureInterfaceOrientation
@property (nonatomic) CGRect faceRect; // ivar: _faceRect
@property (nonatomic) CGFloat focalLength; // ivar: _focalLength
@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (nonatomic) CGRect normalizedFaceRect; // ivar: _normalizedFaceRect
@property (nonatomic) NSInteger preferredAnchorOrientation; // ivar: _preferredAnchorOrientation
@property (readonly, nonatomic) CGFloat rollAngle;
@property ? screenRelativePosition;
@property (nonatomic) ? transform; // ivar: _transform


+(id)faceAnchorWithARFrame:(id)arg0 captureInterfaceOrientation:(NSInteger)arg1 withFaceRectScaleFactor:(struct CGSize )arg2 ;
+(struct ? )CFX_mirrorPoseTransformLeftRight:(struct ? )arg0 ;
-(CGFloat)focalLengthForViewport:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransform:(struct ? )arg0 forFaceRect:(struct CGRect )arg1 needsMirroring:(BOOL)arg2 withFaceRectScaleFactor:(struct CGSize )arg3 frameImageResolution:(struct CGSize )arg4 captureInterfaceOrientation:(NSInteger)arg5 preferredAnchorOrientation:(NSInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif