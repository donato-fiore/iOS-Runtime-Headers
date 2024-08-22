// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMFACEPOSE_H
#define CMFACEPOSE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CMFacePose : NSObject {
    ? _translation;
    ? _gaze;
    ? _leftEyePosition;
    ? _rightEyePosition;
}


@property (retain, nonatomic) NSArray *blendShapeWeights; // ivar: _blendShapeWeights
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) int failureCode; // ivar: _failureCode
@property (nonatomic) NSString *failureDescription; // ivar: _failureDescription
@property ? gaze;
@property (nonatomic) CGFloat globalMachtime; // ivar: _globalMachtime
@property ? leftEyePosition;
@property (nonatomic) CGFloat localMachtime; // ivar: _localMachtime
@property ? rightEyePosition;
@property (nonatomic) CGFloat roll; // ivar: _roll
@property (nonatomic) ? rotation; // ivar: _rotation
@property (nonatomic) BOOL sensorCovered; // ivar: _sensorCovered
@property (nonatomic) BOOL tooDark; // ivar: _tooDark
@property ? translation;




@end


#endif