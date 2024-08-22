// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONANIMATIONROOTSETTINGS_H
#define SBHICONANIMATIONROOTSETTINGS_H

@class PTSettings;


#import "SBHCenterAcceleratedAppSuspendSettings.h"
#import "SBHCenterAppLaunchSettings.h"
#import "SBHCenterAppSuspendSettings.h"
#import "SBHCrossfadeAcceleratedAppSuspendSettings.h"
#import "SBHCrossfadeAppLaunchSettings.h"
#import "SBHCrossfadeAppSuspendSettings.h"
#import "SBHFolderCloseSettings.h"
#import "SBHFolderOpenSettings.h"
#import "SBHLibraryIndicatorIconSettings.h"
#import "SBHLibraryPodCloseSettings.h"
#import "SBHLibraryPodOpenSettings.h"
#import "SBHLibraryWaveCloseSettings.h"
#import "SBHLibraryWaveOpenSettings.h"
#import "SBHReducedMotionFadeSettings.h"
#import "SBHUnlockSettings.h"

@interface SBHIconAnimationRootSettings : PTSettings

@property (retain, nonatomic) SBHCenterAcceleratedAppSuspendSettings *centerAcceleratedSuspendSettings; // ivar: _centerAcceleratedSuspendSettings
@property (retain, nonatomic) SBHCenterAppLaunchSettings *centerLaunchSettings; // ivar: _centerLaunchSettings
@property (retain, nonatomic) SBHCenterAppSuspendSettings *centerSuspendSettings; // ivar: _centerSuspendSettings
@property (retain, nonatomic) SBHCrossfadeAcceleratedAppSuspendSettings *crossfadeAcceleratedSuspendSettings; // ivar: _crossfadeAcceleratedSuspendSettings
@property (retain, nonatomic) SBHCrossfadeAppLaunchSettings *crossfadeLaunchSettings; // ivar: _crossfadeLaunchSettings
@property (retain, nonatomic) SBHCrossfadeAppSuspendSettings *crossfadeSuspendSettings; // ivar: _crossfadeSuspendSettings
@property (retain, nonatomic) SBHFolderCloseSettings *folderCloseSettings; // ivar: _folderCloseSettings
@property (retain, nonatomic) SBHFolderOpenSettings *folderOpenSettings; // ivar: _folderOpenSettings
@property (retain, nonatomic) SBHLibraryIndicatorIconSettings *libraryIndicatorIconSettings; // ivar: _libraryIndicatorIconSettings
@property (retain, nonatomic) SBHLibraryPodCloseSettings *libraryPodCloseSettings; // ivar: _libraryPodCloseSettings
@property (retain, nonatomic) SBHLibraryPodOpenSettings *libraryPodOpenSettings; // ivar: _libraryPodOpenSettings
@property (retain, nonatomic) SBHLibraryWaveCloseSettings *libraryWaveCloseSettings; // ivar: _libraryWaveCloseSettings
@property (retain, nonatomic) SBHLibraryWaveOpenSettings *libraryWaveOpenSettings; // ivar: _libraryWaveOpenSettings
@property (nonatomic) CGFloat maxAppLaunchWallpaperScale; // ivar: _maxAppLaunchWallpaperScale
@property (nonatomic) CGFloat maxAppSuspendHintProgress; // ivar: _maxAppSuspendHintProgress
@property (nonatomic) CGFloat maxFolderCloseHintProgress; // ivar: _maxFolderCloseHintProgress
@property (retain, nonatomic) SBHReducedMotionFadeSettings *reducedMotionSettings; // ivar: _reducedMotionSettings
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings; // ivar: _unlockSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif