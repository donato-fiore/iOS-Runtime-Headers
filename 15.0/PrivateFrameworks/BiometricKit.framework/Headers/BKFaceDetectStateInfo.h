// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKFACEDETECTSTATEINFO_H
#define BKFACEDETECTSTATEINFO_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface BKFaceDetectStateInfo : NSObject

@property (nonatomic) BOOL faceDetected; // ivar: _faceDetected
@property (nonatomic) BOOL flare; // ivar: _flare
@property (nonatomic) BOOL multipleFaces; // ivar: _multipleFaces
@property (nonatomic) BOOL occlusion; // ivar: _occlusion
@property (nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) BOOL partiallyOutOfView; // ivar: _partiallyOutOfView
@property (retain, nonatomic) NSNumber *pitch; // ivar: _pitch
@property (retain, nonatomic) NSNumber *roll; // ivar: _roll
@property (nonatomic) BOOL tooCloseToCamera; // ivar: _tooCloseToCamera
@property (nonatomic) BOOL tooFarFromCamera; // ivar: _tooFarFromCamera
@property (retain, nonatomic) NSNumber *yaw; // ivar: _yaw


-(?)initFromFaceInfo;
-(id)dictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithPresenceState:(BOOL)arg0 ;
-(id)initWithPresenceState:(BOOL)arg0 details:(id)arg1 ;


@end


#endif