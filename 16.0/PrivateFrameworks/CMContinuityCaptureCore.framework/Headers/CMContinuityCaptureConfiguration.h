// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTURECONFIGURATION_H
#define CMCONTINUITYCAPTURECONFIGURATION_H

@class NSDictionary, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureStreamFormat.h"

@interface CMContinuityCaptureConfiguration : NSObject <NSSecureCoding>



@property (retain) NSDictionary *asyncStillCaptureConfigs; // ivar: _asyncStillCaptureConfigs
@property BOOL asyncStillCaptureEnabled; // ivar: _asyncStillCaptureEnabled
@property BOOL centerStageEnabled; // ivar: _centerStageEnabled
@property (nonatomic) NSInteger deskViewCameraMode; // ivar: _deskViewCameraMode
@property NSInteger entity; // ivar: _entity
@property BOOL faceDetectionEnabled; // ivar: _faceDetectionEnabled
@property BOOL forceEnableCenterStage; // ivar: _forceEnableCenterStage
@property (retain) CMContinuityCaptureStreamFormat *format; // ivar: _format
@property NSUInteger generationID; // ivar: _generationID
@property BOOL humanBodyDetectionEnabled; // ivar: _humanBodyDetectionEnabled
@property unsigned int maxFrameRate; // ivar: _maxFrameRate
@property (readonly) int maxPhotoQualityPrioritization;
@property unsigned int minFrameRate; // ivar: _minFrameRate
@property BOOL portraitEffectEnabled; // ivar: _portraitEffectEnabled
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property BOOL studioLightingEnabled; // ivar: _studioLightingEnabled
@property CGFloat videoZoomFactor; // ivar: _videoZoomFactor


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif