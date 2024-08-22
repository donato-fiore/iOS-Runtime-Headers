// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCRFACE_H
#define FCRFACE_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface FCRFace : NSObject

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