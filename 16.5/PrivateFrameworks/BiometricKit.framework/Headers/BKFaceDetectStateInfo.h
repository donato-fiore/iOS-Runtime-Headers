// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKFACEDETECTSTATEINFO_H
#define BKFACEDETECTSTATEINFO_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface BKFaceDetectStateInfo : NSObject

@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (nonatomic) BOOL faceDetected; // ivar: _faceDetected
@property (nonatomic) BOOL flare; // ivar: _flare
@property (readonly, nonatomic) NSNumber *frameNumber; // ivar: _frameNumber
@property (readonly, nonatomic) BOOL glassesMismatch; // ivar: _glassesMismatch
@property (nonatomic) BOOL multipleFaces; // ivar: _multipleFaces
@property (nonatomic) BOOL occlusion; // ivar: _occlusion
@property (nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) BOOL partiallyOutOfView; // ivar: _partiallyOutOfView
@property (retain, nonatomic) NSNumber *pitch; // ivar: _pitch
@property (retain, nonatomic) NSNumber *roll; // ivar: _roll
@property (nonatomic) BOOL tooCloseToCamera; // ivar: _tooCloseToCamera
@property (nonatomic) BOOL tooFarFromCamera; // ivar: _tooFarFromCamera
@property (readonly, nonatomic) BOOL unsupportedGlasses; // ivar: _unsupportedGlasses
@property (retain, nonatomic) NSNumber *yaw; // ivar: _yaw


-(?)initFromFaceInfo;
-(id)dictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithPresenceState:(BOOL)arg0 ;
-(id)initWithPresenceState:(BOOL)arg0 details:(id)arg1 ;


@end


#endif