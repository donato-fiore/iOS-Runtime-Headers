// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFACEFEATURE_H
#define CIFACEFEATURE_H

@class NSDictionary;


#import "CIFeature.h"

@interface CIFaceFeature : CIFeature

@property (readonly) CGRect bounds; // ivar: bounds
@property (readonly) float faceAngle; // ivar: faceAngle
@property (readonly) BOOL hasFaceAngle; // ivar: hasFaceAngle
@property (readonly) BOOL hasLeftEyePosition; // ivar: hasLeftEyePosition
@property (readonly) BOOL hasMouthPosition; // ivar: hasMouthPosition
@property (readonly) BOOL hasRightEyePosition; // ivar: hasRightEyePosition
@property (readonly) BOOL hasSmile; // ivar: hasSmile
@property (readonly) BOOL hasTrackingFrameCount; // ivar: hasTrackingFrameCount
@property (readonly) BOOL hasTrackingID; // ivar: hasTrackingID
@property (readonly) NSDictionary *landmarks; // ivar: landmarks
@property (readonly) BOOL leftEyeClosed; // ivar: leftEyeClosed
@property (readonly) CGPoint leftEyePosition; // ivar: leftEyePosition
@property (readonly) CGPoint mouthPosition; // ivar: mouthPosition
@property (readonly) BOOL rightEyeClosed; // ivar: rightEyeClosed
@property (readonly) CGPoint rightEyePosition; // ivar: rightEyePosition
@property (readonly) int trackingFrameCount; // ivar: trackingFrameCount
@property (readonly) int trackingID; // ivar: trackingID


-(id)debugDescription;
-(id)initWithBounds:(struct CGRect )arg0 hasLeftEyePosition:(BOOL)arg1 leftEyePosition:(struct CGPoint )arg2 hasRightEyePosition:(BOOL)arg3 rightEyePosition:(struct CGPoint )arg4 hasMouthPosition:(BOOL)arg5 mouthPosition:(struct CGPoint )arg6 hasFaceAngle:(BOOL)arg7 faceAngle:(float)arg8 hasTrackingID:(BOOL)arg9 trackingID:(int)arg10 hasTrackingFrameCount:(BOOL)arg11 trackingFrameCount:(int)arg12 hasSmile:(BOOL)arg13 leftEyeClosed:(BOOL)arg14 rightEyeClosed:(BOOL)arg15 landmarks:(id)arg16 ;
-(id)type;
-(void)dealloc;


@end


#endif