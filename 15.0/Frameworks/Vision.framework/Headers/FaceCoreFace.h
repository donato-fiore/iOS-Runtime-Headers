// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FACECOREFACE_H
#define FACECOREFACE_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface FaceCoreFace : NSObject

@property (retain) NSDictionary *additionalInfo; // ivar: additionalInfo
@property (retain) NSDictionary *expressionFeatures; // ivar: expressionFeatures
@property ? face; // ivar: face
@property CGFloat faceAngle; // ivar: faceAngle
@property (retain) NSDictionary *faceLandmarkPoints; // ivar: faceLandmarkPoints
@property CGFloat faceSize; // ivar: faceSize
@property int faceType; // ivar: faceType
@property (retain) NSData *faceprint; // ivar: faceprint
@property (readonly) BOOL hasLeftEyeBounds;
@property (readonly) BOOL hasMouthBounds;
@property (readonly) BOOL hasRightEyeBounds;
@property ? leftEye; // ivar: leftEye
@property ? mouth; // ivar: mouth
@property ? rightEye; // ivar: rightEye
@property NSUInteger trackDuration; // ivar: trackDuration
@property NSInteger trackID; // ivar: trackID


-(void)dealloc;


@end


#endif