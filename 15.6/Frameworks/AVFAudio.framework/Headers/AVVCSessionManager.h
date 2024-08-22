// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVCSESSIONMANAGER_H
#define AVVCSESSIONMANAGER_H

@class AVAudioSession;

#import <Foundation/Foundation.h>


@interface AVVCSessionManager : NSObject {
    BOOL mShouldDuckOthers;
    BOOL mIsMiniDuckingEnabled;
    BOOL mShouldEnableMiniDucking;
    BOOL mShouldDisableMiniDucking;
    BOOL mSessionNeedsVolumeControl;
    BOOL mSessionNeedsRoutingControl;
    BOOL mSessionOutputIsWirelessSplitter;
    BOOL mIsOtherAudioPlaying;
    BOOL mRouteHasDoAPSupport;
    BOOL mOutputSupportsSWVolume;
    BOOL mDeviceIsIOSAccessory;
    BOOL mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    NSInteger mPreviousActivationMode;
}


@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) BOOL clientRequestsRecording; // ivar: _clientRequestsRecording
@property (readonly, nonatomic) CGFloat inputLatency; // ivar: _inputLatency
@property (readonly, nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, nonatomic) CGFloat outputLatency; // ivar: _outputLatency
@property (readonly) NSInteger reporterID; // ivar: _reporterID
@property (nonatomic) int sessionState; // ivar: _sessionState


-(BOOL)clearInputPreferences:(*id)arg0 ;
-(BOOL)getSiriInputSource:(*NSUInteger)arg0 withIdentifier:(*id)arg1 ;
-(BOOL)isAirplayOneOfTheOutputRoutes:(id)arg0 ;
-(BOOL)isMiniDuckingEnabled;
-(BOOL)isSessionInSiriCategory;
-(BOOL)isSessionInSiriCategoryModeAndOptions:(unsigned int)arg0 ;
-(BOOL)isSessionOutputInWirelessSplitterMode;
-(BOOL)setActivationContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setActive:(BOOL)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setAudioHardwareControlFlags:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setCategory:(id)arg0 mode:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)setCategory:(id)arg0 mode:(id)arg1 routeSharingPolicy:(NSUInteger)arg2 options:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)setDuckOthers:(id)arg0 mixWithOthers:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDuckToLevelDB:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckToLevelScalar:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckingFadeOutDuration:(id)arg0 fadeInDuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)setIAmTheAssistant:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredSampleRate:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setRecordingFromRemoteInput:(BOOL)arg0 error:(*id)arg1 ;
-(CGFloat)getInputLatency;
-(CGFloat)getOutputLatency;
-(CGFloat)speechDetectionDeviceSampleRate;
-(NSInteger)inputNumberOfChannels;
-(NSUInteger)siriInputSource;
-(id)currentRoute;
-(id)getActiveSessionDisplayIDsAsString;
-(id)initWithSession:(id)arg0 ;
-(id)sessionCurrentInputRoutes;
-(id)sessionCurrentOutputRoutes;
-(id)siriRemoteInputIdentifier;
-(int)enableSmartRoutingConsideration:(BOOL)arg0 ;
-(int)setSessionActivationContext:(id)arg0 ;
-(int)setSessionAudioHWControlFlagsForActivationMode:(NSInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(int)setSessionBufferSize:(int)arg0 ;
-(int)setSessionCategoryModeOptionsForActivationMode:(NSInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(int)setSessionSampleRateForActivationMode:(NSInteger)arg0 ;
-(int)setupOneTimeSessionSettingsForClient:(NSInteger)arg0 ;
-(unsigned int)getOpaqueSessionID;
-(unsigned int)getSessionActivationOptions;
-(void)changeDuckOthersOption:(BOOL)arg0 ;
-(void)dealloc;
-(void)getHypotheticalRouteAndUpdateStates;
-(void)removeSessionNotifications:(id)arg0 ;
-(void)setSessionActivationOptions:(unsigned int)arg0 ;
-(void)setupSessionNotifications:(id)arg0 ;
-(void)shouldEnableMiniDucking:(BOOL)arg0 withOptions:(NSUInteger)arg1 ;


@end


#endif