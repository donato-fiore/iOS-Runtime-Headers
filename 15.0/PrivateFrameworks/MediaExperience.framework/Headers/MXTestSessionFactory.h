// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXTESTSESSIONFACTORY_H
#define MXTESTSESSIONFACTORY_H


#import <Foundation/Foundation.h>


@interface MXTestSessionFactory : NSObject {
    *__CFString mAudioCategory;
    *opaqueCMSession mSession;
    *OpaqueFigSemaphore mSemaphore;
    *unk mCallback;
    *__CFString mFileName;
    *void mCMSessionTrace;
    *void mVolumeTrace;
    *__CFString mFigNotes;
    *__CFString mFigNotesLog;
    *__CFDictionary mConfigMap;
    unsigned char mEnableLogging;
    unsigned char mForceCleanStart;
    *__CFString mCMSLoggingLevel;
    *__CFString mVolumeLoggingLevel;
}


@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) unsigned char hasHapticsCapability; // ivar: _hasHapticsCapability
@property (nonatomic) unsigned char hasPhoneCallCapability; // ivar: _hasPhoneCallCapability
@property (nonatomic) unsigned char hasPlayAndRecordCapability; // ivar: _hasPlayAndRecordCapability


-(*void)createMXSessionForCoreSession:(struct opaqueCMSession *)arg0 ;
-(?)copySystemSoundCategoryForSSIDresultName;
-(?)setupSystemSoundDictionary:(?)arg0 withSSID:(?)arg1 andPIDignoreRingerSwitch;
-(int)activateAndPlayMXSession:(*void)arg0 ;
-(int)activateAndPlaySession:(struct opaqueCMSession *)arg0 ;
-(int)activateSession:(struct opaqueCMSession *)arg0 ;
-(int)addAndVerifyNumberToDictionary:(struct __CFDictionary *)arg0 numberType:(NSInteger)arg1 forKey:(*void)arg2 andValue:(*void)arg3 ;
-(int)addNotificationListener:(struct opaqueCMSession *)arg0 notificationName:(struct __CFString *)arg1 listener:(*void)arg2 ;
-(int)addNotificationListenerForMXSession:(*void)arg0 notificationName:(struct __CFString *)arg1 listener:(*void)arg2 ;
-(int)checkMXSessionActiveState:(unsigned char)arg0 sessionToCheck:(*void)arg1 ;
-(int)checkMXSessionPlayingState:(unsigned char)arg0 sessionToCheck:(*void)arg1 ;
-(int)checkSessionActiveState:(unsigned char)arg0 sessionToCheck:(struct opaqueCMSession *)arg1 ;
-(int)checkSessionDuckedOnVADState:(unsigned char)arg0 sessionToCheck:(struct opaqueCMSession *)arg1 ;
-(int)checkSessionDuckedState:(unsigned char)arg0 sessionToCheck:(struct opaqueCMSession *)arg1 ;
-(int)checkSessionNowPlayingState:(unsigned char)arg0 sessionToCheck:(struct opaqueCMSession *)arg1 ;
-(int)checkSessionPlayingState:(unsigned char)arg0 sessionToCheck:(struct opaqueCMSession *)arg1 ;
-(int)checkSystemSoundActiveState:(unsigned char)arg0 ;
-(int)deactivateAndStopMXSession:(*void)arg0 replacementStatusResumable:(unsigned char)arg1 ;
-(int)deactivateAndStopSession:(struct opaqueCMSession *)arg0 replacementStatusResumable:(unsigned char)arg1 ;
-(int)getExpectedInterruptionStyleBehavior:(unsigned int)arg0 givesBehavior:(struct ? *)arg1 ;
-(int)removeNotificationListener:(struct opaqueCMSession *)arg0 notificationName:(struct __CFString *)arg1 listener:(*void)arg2 ;
-(int)removeNotificationListenerForMXSession:(*void)arg0 notificationName:(struct __CFString *)arg1 listener:(*void)arg2 ;
-(int)setAndVerifyInterruptionStyle:(unsigned int)arg0 sessionToSet:(struct opaqueCMSession *)arg1 ;
-(int)setAndVerifyPriority:(int)arg0 sessionToSet:(struct opaqueCMSession *)arg1 ;
-(int)setAndVerifyProperty:(int)arg0 propertyName:(struct __CFString *)arg1 andValue:(*void)arg2 sessionToSet:(struct opaqueCMSession *)arg3 ;
-(int)setAndVerifyPropertyForMXSession:(int)arg0 propertyName:(struct __CFString *)arg1 andValue:(*void)arg2 sessionToSet:(*void)arg3 ;
-(int)setMXSessionPlayingState:(struct __CFBoolean *)arg0 sessionToSet:(*void)arg1 ;
-(int)setSessionPlayingState:(struct __CFBoolean *)arg0 sessionToSet:(struct opaqueCMSession *)arg1 ;
-(int)signalSemaphore;
-(int)testSessionFactory;
-(int)waitOnSemaphore;
-(struct opaqueCMSession *)createAlarmSession;
-(struct opaqueCMSession *)createAmbientSession;
-(struct opaqueCMSession *)createCameraPhotoSession;
-(struct opaqueCMSession *)createCameraRecordingSession;
-(struct opaqueCMSession *)createCustomSession:(struct __CFString *)arg0 withMode:(struct __CFString *)arg1 withInterruptionStyle:(unsigned int)arg2 andHostId:(struct __CFString *)arg3 ;
-(struct opaqueCMSession *)createDefaultSession;
-(struct opaqueCMSession *)createEmergencyAlertMuteableSession;
-(struct opaqueCMSession *)createEmergencyAlertSession;
-(struct opaqueCMSession *)createFacetimeAudioSession;
-(struct opaqueCMSession *)createFacetimeVideoSession;
-(struct opaqueCMSession *)createGameSession;
-(struct opaqueCMSession *)createLowLatencyModeSession;
-(struct opaqueCMSession *)createMusicSession;
-(struct opaqueCMSession *)createNavigationSession;
-(struct opaqueCMSession *)createPhoneCallSession;
-(struct opaqueCMSession *)createPodcastSession;
-(struct opaqueCMSession *)createPreConfiguredCustomSession:(int)arg0 ;
-(struct opaqueCMSession *)createRingtonePreviewSession;
-(struct opaqueCMSession *)createSiriSession;
-(struct opaqueCMSession *)createThirdPartyMusicSession;
-(struct opaqueCMSession *)createThirdPartyNavigationSession;
-(struct opaqueCMSession *)createThirdPartyPhonecallSession;
-(struct opaqueCMSession *)createThirdPartyPodcastSession;
-(struct opaqueCMSession *)createThirdPartyVideocallSession;
-(struct opaqueCMSession *)createVoiceMemoSession;
-(struct opaqueCMSession *)createVoiceoverSession;
-(void)createSemaphore;
-(void)setNotificationCallback:(*unk)arg0 ;
-(void)setup:(struct __CFString *)arg0 cmsLoggingLevel:(struct __CFString *)arg1 volumeLoggingLevel:(struct __CFString *)arg2 ;
-(void)teardown:(int)arg0 testName:(struct __CFString *)arg1 ;


@end


#endif