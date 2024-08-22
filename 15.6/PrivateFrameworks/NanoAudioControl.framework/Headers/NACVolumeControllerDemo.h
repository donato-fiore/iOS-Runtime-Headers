// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NACVOLUMECONTROLLERDEMO_H
#define NACVOLUMECONTROLLERDEMO_H

@class NSString, NSNumber, NSOrderedSet;
@protocol NACVolumeController, NACVolumeControllerDelegate;

#import <Foundation/Foundation.h>

#import "NACEventThrottler.h"

@interface NACVolumeControllerDemo : NSObject <NACVolumeController>

 {
    NSString *_audioCategory;
    NACEventThrottler *_defaultsThrottler;
    NSNumber *_volumeValue;
    BOOL _allowUserToExceedEUVolumeLimit;
    NSString *_currentListeningMode;
    BOOL _observingListeningModes;
}


@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity; // ivar: _hapticIntensity
@property (nonatomic) NSInteger hapticState; // ivar: _hapticState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isProminentHapticEnabled) BOOL prominentHapticEnabled; // ivar: _prominentHapticEnabled
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemMuted) BOOL systemMuted; // ivar: _systemMuted
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) float volumeValue;
@property (readonly, nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) NSInteger volumeWarningState;


-(id)_volumeDictionary;
-(id)init;
-(id)initWithAudioCategory:(id)arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_persistVolumeValue:(id)arg0 ;
-(void)_setNeedsVolumeReload;
-(void)beginObservingListeningModes;
-(void)beginObservingVolume;
-(void)dealloc;
-(void)endObservingListeningModes;
-(void)endObservingVolume;


@end


#endif