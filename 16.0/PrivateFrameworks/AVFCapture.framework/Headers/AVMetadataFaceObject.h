// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAFACEOBJECT_H
#define AVMETADATAFACEOBJECT_H

@protocol NSCopying;


#import "AVMetadataObject.h"
#import "AVMetadataFaceObjectInternal.h"

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying>

 {
    AVMetadataFaceObjectInternal *_internal;
}


@property (readonly) NSInteger faceID;
@property (readonly) BOOL hasRollAngle;
@property (readonly) BOOL hasYawAngle;
@property (readonly) CGFloat rollAngle;
@property (readonly) CGFloat yawAngle;


+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasLeftEyeClosedConfidence;
-(BOOL)hasRightEyeBounds;
-(BOOL)hasRightEyeClosedConfidence;
-(BOOL)hasSmileConfidence;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithFaceID:(NSInteger)arg0 hasRollAngle:(BOOL)arg1 rollAngle:(CGFloat)arg2 hasYawAngle:(BOOL)arg3 yawAngle:(CGFloat)arg4 time:(struct ? )arg5 duration:(struct ? )arg6 bounds:(struct CGRect )arg7 ;
-(id)initWithFaceID:(NSInteger)arg0 hasRollAngle:(BOOL)arg1 rollAngle:(CGFloat)arg2 hasYawAngle:(BOOL)arg3 yawAngle:(CGFloat)arg4 time:(struct ? )arg5 duration:(struct ? )arg6 bounds:(struct CGRect )arg7 optionalInfoDict:(id)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(id)initWithType:(id)arg0 time:(struct ? )arg1 duration:(struct ? )arg2 bounds:(struct CGRect )arg3 optionalInfoDict:(id)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(int)leftEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(int)smileConfidence;
-(struct CGRect )leftEyeBounds;
-(struct CGRect )rightEyeBounds;
-(void)dealloc;


@end


#endif