// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXTESTCORE_H
#define MXTESTCORE_H

@class NSString;


#import "MXTestSessionFactory.h"

@interface MXTestCore : MXTestSessionFactory {
    unsigned char mIsInterruptionResumable;
    int mInterruptionError;
    *__CFBoolean mMutePolicyForMXSessionIsMuted;
    int mMutePolicyError;
    BOOL mNotificationReceived;
    unsigned int mNotificationCount;
    float mNotificationFloatData;
    NSString *mNotificationNameToCheck;
    int mInterruptionCmdToCheck;
}




-(BOOL)isSharePlaySessionKeySetOnVA;
-(int)interruptAndResumeSharePlayMediaSession:(struct opaqueCMSession *)arg0 duringSharePlayCallSession:(struct opaqueCMSession *)arg1 withPreviewSession:(struct opaqueCMSession *)arg2 ;
-(int)testAllowSystemSoundsWhileRecording;
-(int)testAudioQueueOptionsForMXSession;
-(int)testAvailableOutputStreamFormats;
-(int)testCPMS;
-(int)testConsolidateAudioHardwareFlags;
-(int)testCreateSidekickMXSession;
-(int)testCreateSidekickSession;
-(int)testDeactivationOfActiveAndNonPlayingSessions;
-(int)testDucking;
-(int)testFaceTimeInsufficientPriorityError;
-(int)testHDMILatencyManager;
-(int)testHeadphoneVolumeReduction;
-(int)testHomePodHubMultipleNowPlayers;
-(int)testInterruption:(struct opaqueCMSession *)arg0 andInterruptor:(struct opaqueCMSession *)arg1 interruptionTypeResumable:(unsigned char)arg2 ;
-(int)testIsActive:(struct opaqueCMSession *)arg0 ;
-(int)testIsAllowedRecordingFromBackground;
-(int)testIsPlaying:(struct opaqueCMSession *)arg0 ;
-(int)testIsRecording:(struct opaqueCMSession *)arg0 ;
-(int)testLowLatencyVADConfiguration;
-(int)testMXSession;
-(int)testMXSessionClientType;
-(int)testMXSessionInterruptionNotification;
-(int)testMXSessionMutedNotificationForMutePriority;
-(int)testMXSessionRefresh;
-(int)testMXSystemController;
-(int)testMXSystemControllerInvalidSubscription;
-(int)testMXSystemControllerPostResumableInterruptionEnded;
-(int)testMultipleRecordingClients;
-(int)testMutePriority;
-(int)testNavigationApp:(struct opaqueCMSession *)arg0 ;
-(int)testNowPlayingApp;
-(int)testNowPlayingEligibleSessionAndSSAHSessionForSamePID;
-(int)testPiPMixingPolicies;
-(int)testPiPPolicies;
-(int)testPlaybackHandoff;
-(int)testPreIntegrate;
-(int)testPrefersNoInterruptionsByRingtonesAndAlerts;
-(int)testPreviewInterruptionDuringSharePlay;
-(int)testPriorityBasedInterruption;
-(int)testRemoteInterruptionHandover;
-(int)testSecureMicrophone;
-(int)testShadowingAudioSessionID;
-(int)testSharePlay;
-(int)testSharePlayVolumePolicies;
-(int)testSharePlayVolumePoliciesForRandomizedTriggers;
-(int)testSharedMXSystemController;
-(int)testSidekickPlist;
-(int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(struct opaqueCMSession *)arg0 nonMixableSession:(struct opaqueCMSession *)arg1 ;
-(int)testSimultaneousPlaybackOfMixableSessions:(struct opaqueCMSession *)arg0 otherSession:(struct opaqueCMSession *)arg1 ;
-(int)testSomeOtherPrimaryAudioCategoryClientIsPlaying;
-(int)testSourceFormatInfo;
-(int)testSystemSounds;
-(int)testSystemSoundsAndHapticsAudioHWControlBehaviors;
-(int)testSystemSoundsPlist;
-(int)testVoiceOverVolume;
-(void)resetTestVariables;
-(void)testNotificationCenterInterruptionCallback:(id)arg0 ;


@end


#endif