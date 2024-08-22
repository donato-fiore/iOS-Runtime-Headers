// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMAGEMODULATIONSETTINGS_H
#define PXIMAGEMODULATIONSETTINGS_H

@class NSString;


#import "PXSettings.h"

@interface PXImageModulationSettings : PXSettings

@property (nonatomic) CGFloat EDRHeadroomRequestHDRThreshold; // ivar: _EDRHeadroomRequestHDRThreshold
@property (nonatomic) NSInteger EDRHeadroomRequestScheme; // ivar: _EDRHeadroomRequestScheme
@property (nonatomic) CGFloat EDRHeadroomRequestSustainDuration; // ivar: _EDRHeadroomRequestSustainDuration
@property (nonatomic) NSInteger EDRHeadroomUsageScheme; // ivar: _EDRHeadroomUsageScheme
@property (nonatomic) NSInteger HDRConsideration; // ivar: _HDRConsideration
@property (nonatomic) CGFloat HDRModulationIntensity; // ivar: _HDRModulationIntensity
@property (nonatomic) CGFloat SDRModulationIntensity; // ivar: _SDRModulationIntensity
@property (nonatomic) BOOL animateGainMapAppearance; // ivar: _animateGainMapAppearance
@property (nonatomic) CGFloat deviceMaximumEDRHeadroomStops; // ivar: _deviceMaximumEDRHeadroomStops
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger filterType; // ivar: _filterType
@property (nonatomic) BOOL forceCurrentScreenSupportsHDR; // ivar: _forceCurrentScreenSupportsHDR
@property (nonatomic) CGFloat gainMapAnimationActivationThreshold; // ivar: _gainMapAnimationActivationThreshold
@property (nonatomic) CGFloat gainMapAnimationDuration; // ivar: _gainMapAnimationDuration
@property (copy, nonatomic) NSString *gainMapAnimationTimingFunction; // ivar: _gainMapAnimationTimingFunction
@property (nonatomic) BOOL gainMapEnabled; // ivar: _gainMapEnabled
@property (nonatomic) float gainMapFaceKnee; // ivar: _gainMapFaceKnee
@property (nonatomic) float gainMapFaceKneeStops; // ivar: _gainMapFaceKneeStops
@property (nonatomic) float gainMapFaceMaxStops; // ivar: _gainMapFaceMaxStops
@property (nonatomic) float gainMapFaceMinStops; // ivar: _gainMapFaceMinStops
@property (nonatomic) float gainMapKnee; // ivar: _gainMapKnee
@property (nonatomic) float gainMapKneeStops; // ivar: _gainMapKneeStops
@property (nonatomic) float gainMapMaxStops; // ivar: _gainMapMaxStops
@property (nonatomic) float gainMapMinStops; // ivar: _gainMapMinStops
@property (nonatomic) CGFloat highEDRRequestedHeadroomStops; // ivar: _highEDRRequestedHeadroomStops
@property (nonatomic) CGFloat lowEDRRequestedHeadroomStops; // ivar: _lowEDRRequestedHeadroomStops
@property (nonatomic) CGFloat manualEDRHeadroomRequestStops; // ivar: _manualEDRHeadroomRequestStops
@property (nonatomic) BOOL showGainMapBorder; // ivar: _showGainMapBorder
@property (nonatomic) BOOL useThresholdForVideos; // ivar: _useThresholdForVideos
@property (nonatomic) CGFloat videoComplementModulationIntensity; // ivar: _videoComplementModulationIntensity


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif