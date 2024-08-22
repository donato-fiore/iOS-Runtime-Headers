// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLAYBACKSETTINGS_H
#define VUIPLAYBACKSETTINGS_H

@class NSString, NSArray;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>


@interface VUIPlaybackSettings : NSObject <ICEnvironmentMonitorObserver>

 {
    int _preferencesNotifyToken;
    BOOL _preferencesNotifyTokenIsValid;
}


@property (nonatomic) BOOL cellularDataDownloadEnabled; // ivar: _cellularDataDownloadEnabled
@property (nonatomic) BOOL cellularDataPlaybackEnabled; // ivar: _cellularDataPlaybackEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger networkStatus; // ivar: _networkStatus
@property (nonatomic) BOOL preferAVAdapterCompatibility; // ivar: _preferAVAdapterCompatibility
@property (retain, nonatomic) NSArray *preferredAudioDownloadLanguages; // ivar: _preferredAudioDownloadLanguages
@property (retain, nonatomic) NSString *preferredAudioLanguageCode; // ivar: _preferredAudioLanguageCode
@property (nonatomic) NSInteger preferredCellularDownloadQuality; // ivar: _preferredCellularDownloadQuality
@property (nonatomic) NSInteger preferredCellularPlaybackQuality; // ivar: _preferredCellularPlaybackQuality
@property (readonly, nonatomic) NSInteger preferredDownloadQualityForCurrentNetworkStatus;
@property (readonly, nonatomic) NSInteger preferredPlaybackQualityForCurrentNetworkStatus;
@property (retain, nonatomic) NSArray *preferredSubtitleDownloadLanguages; // ivar: _preferredSubtitleDownloadLanguages
@property (nonatomic) NSInteger preferredWifiDownloadQuality; // ivar: _preferredWifiDownloadQuality
@property (nonatomic) NSInteger preferredWifiPlaybackQuality; // ivar: _preferredWifiPlaybackQuality
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultSubtitleDownloadLanguages; // ivar: _useDefaultSubtitleDownloadLanguages


+(id)sharedSettings;
-(NSInteger)_downloadQualityForString:(id)arg0 ;
-(NSInteger)_playbackQualityForString:(id)arg0 forCellular:(BOOL)arg1 ;
-(id)_descriptionForExternalScreenType:(unsigned int)arg0 ;
-(id)init;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_externalScreenTypeDidChange:(id)arg0 ;
-(void)_registerObserverForUserPrefsChange;
-(void)_sceneWillConnect:(id)arg0 ;
-(void)_updateNetworkStatus;
-(void)_updatePropertiesFromUserPrefs;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg0 ;


@end


#endif