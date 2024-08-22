// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DETECTEDFACE_H
#define DETECTEDFACE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface DetectedFace : NSObject

@property (nonatomic) CGRect approximateFaceRect; // ivar: _approximateFaceRect
@property (retain, nonatomic) NSNumber *confidence; // ivar: _confidence
@property (nonatomic) CGPoint faceCenter; // ivar: _faceCenter
@property (nonatomic) CGRect faceRect; // ivar: _faceRect
@property (nonatomic) int frames; // ivar: _frames
@property (nonatomic) CGPoint leftEye; // ivar: _leftEye
@property (nonatomic) CGPoint mouthCenter; // ivar: _mouthCenter
@property (nonatomic) CGPoint rightEye; // ivar: _rightEye
@property (retain, nonatomic) NSNumber *size; // ivar: _size
@property (nonatomic) int trackID; // ivar: _trackID


-(id)description;
-(id)initWithFaceFeature:(id)arg0 withImageSize:(struct CGSize )arg1 ;
-(id)initWithFaceSize:(id)arg0 leftEye:(struct CGPoint )arg1 rightEye:(struct CGPoint )arg2 mouthCenter:(struct CGPoint )arg3 faceCenter:(struct CGPoint )arg4 confidence:(id)arg5 trackID:(int)arg6 frames:(int)arg7 ;


@end


#endif