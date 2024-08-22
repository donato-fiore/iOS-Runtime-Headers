// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPLAYBACKUSERDEFAULTS_H
#define MPPLAYBACKUSERDEFAULTS_H

@class NSUserDefaults, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPPlaybackEQSetting.h"

@interface MPPlaybackUserDefaults : NSObject {
    NSUserDefaults *_iPodUserDefaults;
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_mediaPlaybackCoreUserDefaults;
    NSUserDefaults *_airplayUserDefaults;
    NSObject<OS_dispatch_queue> *_accountsQueue;
    ? _notifyTokens;
}


@property (readonly, nonatomic) CGFloat activationDelay;
@property (readonly, nonatomic) BOOL allowScreenRecording;
@property (readonly, nonatomic) BOOL allowsHighQualityMusicStreamingOnCellular;
@property (readonly, nonatomic) BOOL archiveSessionArtwork;
@property (readonly, nonatomic) CGFloat assetURLExpirationDuration;
@property (readonly, nonatomic) NSUInteger audioAnalysisRefreshRate;
@property (readonly, nonatomic) CGFloat crossfadeDuration;
@property (readonly, copy, nonatomic, getter=isDevicePrivateListeningEnabled) NSNumber *devicePrivateListeningEnabled;
@property (readonly, nonatomic) BOOL disableAssetCaching;
@property (readonly, nonatomic) BOOL disableAudioAnalysis;
@property (readonly, nonatomic) BOOL disableAudioProcessing;
@property (readonly, nonatomic) BOOL disableMiniSINF;
@property (readonly, nonatomic) BOOL disablePeriodicStateRestore;
@property (readonly, nonatomic) BOOL disableQHO;
@property (readonly, nonatomic, getter=isProcessTapEnabled) BOOL enableProcessTap;
@property (readonly, nonatomic) BOOL forceLibrarySupplementalContexts;
@property (readonly, nonatomic) BOOL forceMusicResolution;
@property (readonly, nonatomic) BOOL forceMusicStreaming;
@property (readonly, nonatomic) NSInteger forcedMusicResolution;
@property (readonly, nonatomic) CGFloat forwardBufferDuration;
@property (readonly, nonatomic) BOOL includeContentItemDebugFields;
@property (readonly, nonatomic) NSInteger maximumQueueHandOffSize;
@property (readonly, nonatomic) MPPlaybackEQSetting *musicEQSetting;
@property (nonatomic) NSInteger musicRepeatType;
@property (nonatomic) NSInteger musicShuffleType;
@property (readonly, nonatomic) CGFloat playbackAuthorizationTokenHalfLifeDuration;
@property (nonatomic) NSInteger preferredMusicDownloadResolution;
@property (nonatomic) NSInteger preferredMusicHighBandwidthResolution;
@property (nonatomic) NSInteger preferredMusicLowBandwidthResolution;
@property (readonly, nonatomic) NSInteger preferredVideoDownloadResolution; // ivar: _preferredVideoDownloadResolution
@property (readonly, nonatomic) NSInteger preferredVideoHighBandwidthResolution;
@property (readonly, nonatomic) NSInteger preferredVideoLowBandwidthResolution;
@property (nonatomic) BOOL prefersSpatialAudio;
@property (nonatomic) BOOL prefersSpatialDownloads;
@property (readonly, nonatomic) BOOL prerollEnabled;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (readonly, nonatomic) float progressiveDownloadAssetRatio;
@property (readonly, nonatomic) BOOL showDebugUI;
@property (nonatomic) BOOL showLosslessAudio;
@property (nonatomic) BOOL soundCheckEnabled;
@property (nonatomic) NSInteger spatialAudioPreference;
@property (readonly, nonatomic) BOOL speakerRouteEnabled;


+(id)standardUserDefaults;
-(BOOL)autoPlayEnabledForUserIdentity:(id)arg0 ;
-(id)_init;
-(void)_accountStoreChangedNotification:(id)arg0 ;
-(void)_loadAccountProperties;
-(void)_migrateUserDefaults;
-(void)dealloc;
-(void)resetAllInternalSettings;
-(void)setAutoPlayEnabled:(BOOL)arg0 forUserIdentity:(id)arg1 ;


@end


#endif