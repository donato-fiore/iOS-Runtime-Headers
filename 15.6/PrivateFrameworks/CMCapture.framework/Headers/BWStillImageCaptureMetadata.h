// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGECAPTUREMETADATA_H
#define BWSTILLIMAGECAPTUREMETADATA_H

@class NSString, NSNumber, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding>



@property (nonatomic) int alsLuxLevel; // ivar: _alsLuxLevel
@property (nonatomic) int cameraControlsStatisticsMaster; // ivar: _cameraControlsStatisticsMaster
@property (nonatomic) int deepZoomVersion; // ivar: _deepZoomVersion
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // ivar: _geometricDistortionCorrectionEnabled
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled; // ivar: _intelligentDistortionCorrectionEnabled
@property (nonatomic) int intelligentDistortionCorrectionVersion; // ivar: _intelligentDistortionCorrectionVersion
@property (nonatomic) BOOL isPreviewSmartCamInferences; // ivar: _isPreviewSmartCamInferences
@property (nonatomic) int semanticStyleSceneType; // ivar: _semanticStyleSceneType
@property (readonly, nonatomic) NSString *semanticStyleSceneTypeAsSmartCameraSceneType;
@property (retain, nonatomic) NSNumber *shallowDepthOfFieldEffectSceneStatus; // ivar: _shallowDepthOfFieldEffectSceneStatus
@property (retain, nonatomic) NSArray *slaveFocalLengths; // ivar: _slaveFocalLengths
@property (retain, nonatomic) NSArray *slaveLensFNumbers; // ivar: _slaveLensFNumbers
@property (retain, nonatomic) NSDictionary *smartCamInferences; // ivar: _smartCamInferences
@property (nonatomic) ? smartCamTimestamp; // ivar: _smartCamTimestamp
@property (nonatomic) int smartCamVersion; // ivar: _smartCamVersion
@property (nonatomic) float snr; // ivar: _snr
@property (nonatomic) int snrType; // ivar: _snrType
@property (nonatomic) int systemPressureLevel; // ivar: _systemPressureLevel
@property (nonatomic) float totalZoomFactor; // ivar: _totalZoomFactor
@property (nonatomic) float uiZoomFactor; // ivar: _uiZoomFactor
@property (nonatomic) int zeroShutterLagFailureReason; // ivar: _zeroShutterLagFailureReason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)calculateSemanticStyleSceneType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif