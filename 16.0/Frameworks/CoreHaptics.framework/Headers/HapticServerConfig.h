// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPTICSERVERCONFIG_H
#define HAPTICSERVERCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HapticServerConfig : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _hapticTransientIDs;
    vector<unsigned long, std::allocator<unsigned long>> _hapticContinuousSustainedIDs;
    vector<unsigned long, std::allocator<unsigned long>> _hapticContinuousNonsustainedIDs;
}


@property (readonly) NSString *currentLocality; // ivar: _currentLocality
@property (readonly) float defaultHapticContinuousEventIntensity; // ivar: _defaultHapticContinuousEventIntensity
@property (readonly) float defaultHapticContinuousEventSharpness; // ivar: _defaultHapticContinuousEventSharpness
@property (readonly) float defaultHapticTransientEventIntensity; // ivar: _defaultHapticTransientEventIntensity
@property (readonly) float defaultHapticTransientEventSharpness; // ivar: _defaultHapticTransientEventSharpness
@property ? hapticContinuousNonsustainedIDs;
@property ? hapticContinuousSustainedIDs;
@property (readonly) float hapticContinuousTimeLimit; // ivar: _hapticContinuousTimeLimit
@property ? hapticTransientIDs;
@property (readonly) BOOL supportsAdvancedPatternPlayers; // ivar: _supportsAdvancedPatternPlayers
@property (readonly) BOOL supportsAudioPlayback; // ivar: _supportsAudioPlayback
@property (readonly) BOOL supportsHapticPlayback; // ivar: _supportsHapticPlayback
@property (readonly) BOOL usingInternalHaptics; // ivar: _usingInternalHaptics


-(id)initWithHapticPlayer:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;


@end


#endif