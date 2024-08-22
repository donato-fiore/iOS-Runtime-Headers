// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFACE_H
#define VCPFACE_H

@class VNFaceObservation;

#import <Foundation/Foundation.h>


@interface VCPFace : NSObject

@property CGRect bounds; // ivar: _bounds
@property float confidence; // ivar: _confidence
@property float faceQuality; // ivar: _faceQuality
@property BOOL leftEyeClosed; // ivar: _leftEyeClosed
@property (retain) VNFaceObservation *observation; // ivar: _observation
@property BOOL rightEyeClosed; // ivar: _rightEyeClosed
@property BOOL smile; // ivar: _smile
@property int trackID; // ivar: _trackID
@property NSInteger yaw; // ivar: _yaw


-(NSUInteger)flagsForOrientation:(BOOL)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(id)init;
-(struct CGRect )faceBounds:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(struct CGRect )faceBoundsWithTransform:(NSUInteger)arg0 height:(NSUInteger)arg1 transform:(struct CGAffineTransform )arg2 ;


@end


#endif