// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASETTINGSSYNCHRONIZER_H
#define NMSMEDIASETTINGSSYNCHRONIZER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface NMSMediaSettingsSynchronizer : NSObject {
    BOOL _isObserving;
    NSUserDefaults *_mediaPlaybackCoreDefaults;
    NSUserDefaults *_mobileIPodDefaults;
    NSUserDefaults *_nanoMusicSyncDefaults;
    NSUserDefaults *_podcastsDefaults;
}




+(id)sharedSynchronizer;
-(NSInteger)_preferredGreenTeaMusicStreamingResolutionPreference;
-(id)_podcastsAppGroupPath;
-(id)_podcastsUserDefaults;
-(void)_createDefaultGreenTeaSettingsIfNecessary;
-(void)_migrateMusicDefaultsIfNecessary;
-(void)_reconcileGreenTeaSettingsIfNecessary;
-(void)_syncPodcastDefaultsIfNecessary;
-(void)beginObservingUpdates;
-(void)dealloc;
-(void)endObservingUpdates;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif