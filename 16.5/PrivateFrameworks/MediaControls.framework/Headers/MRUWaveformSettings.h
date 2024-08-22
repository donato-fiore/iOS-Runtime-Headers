// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUWAVEFORMSETTINGS_H
#define MRUWAVEFORMSETTINGS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MRUWaveformSettings : NSObject

@property (retain, nonatomic) NSArray *adjustmentCoefficients; // ivar: _adjustmentCoefficients
@property (nonatomic) float amplitudeGain; // ivar: _amplitudeGain
@property (nonatomic) float animationDuration; // ivar: _animationDuration
@property (nonatomic) float artworkBlur; // ivar: _artworkBlur
@property (nonatomic) float artworkSaturation; // ivar: _artworkSaturation
@property (nonatomic) float exponentialGain; // ivar: _exponentialGain
@property (nonatomic) float framerateThreshold; // ivar: _framerateThreshold
@property (nonatomic) float frequencyExponent; // ivar: _frequencyExponent
@property (nonatomic) float maxArtworkLuminance; // ivar: _maxArtworkLuminance
@property (nonatomic) int maximumFramerate; // ivar: _maximumFramerate
@property (nonatomic) float minArtworkLuminance; // ivar: _minArtworkLuminance
@property (nonatomic) int minimumFramerate; // ivar: _minimumFramerate
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) float pausedAnimationDuration; // ivar: _pausedAnimationDuration
@property (nonatomic) float pausedSpringDamping; // ivar: _pausedSpringDamping
@property (nonatomic) float samplingRefreshRate; // ivar: _samplingRefreshRate
@property (nonatomic) float springDamping; // ivar: _springDamping
@property (retain, nonatomic) NSArray *stops; // ivar: _stops
@property (nonatomic) float xScaleMultiplier; // ivar: _xScaleMultiplier


+(id)currentSettings;
-(id)init;


@end


#endif