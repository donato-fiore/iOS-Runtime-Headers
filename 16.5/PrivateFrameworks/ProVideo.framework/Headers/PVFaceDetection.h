// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVFACEDETECTION_H
#define PVFACEDETECTION_H

@class AVMetadataFaceObject;

#import <Foundation/Foundation.h>


@interface PVFaceDetection : NSObject

@property (readonly, nonatomic) NSInteger ID; // ivar: _ID
@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) NSInteger detectionOrientation; // ivar: _detectionOrientation
@property (readonly, retain, nonatomic) AVMetadataFaceObject *faceObject; // ivar: _faceObject
@property (readonly, nonatomic) BOOL hasRollAngle; // ivar: _hasRollAngle
@property (readonly, nonatomic) BOOL hasYawAngle; // ivar: _hasYawAngle
@property (readonly, nonatomic) CGFloat rollAngleInDegrees; // ivar: _rollAngleInDegrees
@property (readonly, nonatomic) ? time; // ivar: _time
@property (readonly, nonatomic) CGFloat yawAngleInDegrees; // ivar: _yawAngleInDegrees


+(id)faceDetection:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFaceDetection:(id)arg0 ;
-(id)debugDescription;
-(id)description;


@end


#endif