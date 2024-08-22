// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSESSIONMANAGER_H
#define MXSESSIONMANAGER_H

@class NSString, NSDate, NSSet, NSDictionary, NSArray, NSPointerArray, NSLock;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface MXSessionManager : NSObject

@property (retain) NSString *appAllowedToFadeInTemporarily; // ivar: _appAllowedToFadeInTemporarily
@property (retain) NSString *appAllowedToInitiatePlaybackTemporarily; // ivar: _appAllowedToInitiatePlaybackTemporarily
@property (retain) NSString *appAllowedToInitiateRecordingTemporarily; // ivar: _appAllowedToInitiateRecordingTemporarily
@property (readonly, retain) NSDate *appAllowedToInitiateRecordingTemporarilyTimestamp; // ivar: _appAllowedToInitiateRecordingTemporarilyTimestamp
@property (readonly, nonatomic) NSSet *audioCategoriesWithInput; // ivar: _audioCategoriesWithInput
@property (readonly, nonatomic) NSSet *audioModesWithShortVoicePromptStyle; // ivar: _audioModesWithShortVoicePromptStyle
@property (nonatomic) BOOL carPlayIsConnected; // ivar: _carPlayIsConnected
@property (retain) NSString *currentAudioCategory; // ivar: _currentAudioCategory
@property (retain) NSString *currentAudioMode; // ivar: _currentAudioMode
@property (retain) NSString *defaultMusicApp; // ivar: _defaultMusicApp
@property (retain) NSDictionary *detailedRoutesDescription; // ivar: _detailedRoutesDescription
@property (retain, nonatomic) NSArray *longFormVideoApps; // ivar: _longFormVideoApps
@property (retain, nonatomic) NSPointerArray *mxCoreSessionList; // ivar: _mxCoreSessionList
@property (nonatomic) unsigned int mxCoreSessionListActiveReaders; // ivar: _mxCoreSessionListActiveReaders
@property (retain, nonatomic) NSLock *mxCoreSessionListReadLock; // ivar: _mxCoreSessionListReadLock
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mxCoreSessionListWriteSemaphore; // ivar: _mxCoreSessionListWriteSemaphore
@property (retain, nonatomic) NSLock *mxsmPropertyLock; // ivar: _mxsmPropertyLock
@property (retain) NSString *nowPlayingAppDisplayID; // ivar: _nowPlayingAppDisplayID
@property (retain) NSDate *nowPlayingAppStopTime; // ivar: _nowPlayingAppStopTime
@property (retain, nonatomic) NSArray *recordingClientPIDs; // ivar: _recordingClientPIDs
@property (nonatomic) BOOL starkMainAudioIsOwnedByiOSButBorrowedByCar; // ivar: _starkMainAudioIsOwnedByiOSButBorrowedByCar
@property (retain, nonatomic) NSString *systemMirroringRoutingContextUUID; // ivar: _systemMirroringRoutingContextUUID
@property (nonatomic) BOOL uplinkMute; // ivar: _uplinkMute
@property (nonatomic) BOOL wombatEnabled; // ivar: _wombatEnabled


+(id)copyDefaultMusicAppFromPlist;
+(id)sharedInstance;
-(BOOL)areSessionsWithAudioModesActive:(id)arg0 ;
-(BOOL)isLongFormVideoApp:(id)arg0 ;
-(BOOL)isSessionAllowedToStartRecordingTemporarily:(id)arg0 ;
-(BOOL)isSessionWithAudioCategoryActive:(id)arg0 ;
-(BOOL)isSessionWithAudioModeActive:(id)arg0 ;
-(BOOL)isSessionWithAudioModePlaying:(id)arg0 ;
-(BOOL)isSessionWithAudioModeRecording:(id)arg0 ;
-(id)copyDetailedRouteDescription:(unsigned int)arg0 ;
-(id)init;
-(void)appToInterruptCurrentNowPlayingSession:(id)arg0 ;
-(void)dealloc;
-(void)interruptPlayingSessionsNotOptedIntoWombat;
-(void)makeStarkPortRoutableForPhoneCall:(BOOL)arg0 ;
-(void)makeStarkPortRoutableForPlayingSession:(BOOL)arg0 ;
-(void)nowPlayingAppShouldPlayOnCarPlayConnect:(BOOL)arg0 ;
-(void)updateDetailedRouteDescription:(unsigned int)arg0 ;
-(void)volumePreferenceDidChangeCallback:(id)arg0 ;


@end


#endif