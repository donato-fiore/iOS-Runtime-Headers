// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVFACEDETECTIONDEPR_H
#define PVFACEDETECTIONDEPR_H

@class AVMetadataFaceObject;

#import <Foundation/Foundation.h>


@interface PVFaceDetectionDepr : NSObject

@property (nonatomic) NSInteger ID; // ivar: _ID
@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) NSInteger detectionOrientation; // ivar: _detectionOrientation
@property (retain) AVMetadataFaceObject *faceObject; // ivar: _faceObject
@property (nonatomic) BOOL hasRollAngle; // ivar: _hasRollAngle
@property (nonatomic) BOOL hasYawAngle; // ivar: _hasYawAngle
@property (nonatomic) CGFloat rollAngleInDegrees; // ivar: _rollAngleInDegrees
@property (nonatomic) ? time; // ivar: _time
@property (nonatomic) CGFloat yawAngleInDegrees; // ivar: _yawAngleInDegrees


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFaceDetection:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithFaceObject:(id)arg0 ;


@end


#endif