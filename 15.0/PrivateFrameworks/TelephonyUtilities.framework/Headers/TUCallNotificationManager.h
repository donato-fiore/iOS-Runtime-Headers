// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCALLNOTIFICATIONMANAGER_H
#define TUCALLNOTIFICATIONMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TUCallNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *deferredNotificationBlocks; // ivar: _deferredNotificationBlocks


-(void)_postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)_postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)audioPropertiesChangedForCall:(id)arg0 ;
-(void)bluetoothAudioFormatChangedForCall:(id)arg0 ;
-(void)cameraTypeChangedForCall:(id)arg0 ;
-(void)conferenceParticipantCallsChangedForCallContainer:(id)arg0 conferenceParticipantCalls:(id)arg1 ;
-(void)connectedChangedForCall:(id)arg0 ;
-(void)connectingChangedForCall:(id)arg0 ;
-(void)conversationChangedForCall:(id)arg0 ;
-(void)deferNotificationsUntilAfterPerformingBlock:(id)arg0 ;
-(void)destinationIDChangedForCall:(id)arg0 ;
-(void)displayContextChangedForCall:(id)arg0 ;
-(void)endpointOnCurrentDeviceChangedForCall:(id)arg0 ;
-(void)faceTimeIDStatusChangedForCall:(id)arg0 ;
-(void)hardPauseDigitsStateChangedForCall:(id)arg0 ;
-(void)hasSentInvitationChangedForCall:(id)arg0 ;
-(void)isEmergencyChangedForCall:(id)arg0 ;
-(void)isFailureExpectedChangedForCall:(id)arg0 ;
-(void)isOnHoldChangedForCall:(id)arg0 ;
-(void)isSendingAudioChangedForCall:(id)arg0 ;
-(void)isSendingVideoChangedForCall:(id)arg0 ;
-(void)isThirdPartyVideoChangedForCall:(id)arg0 ;
-(void)isUplinkMutedChangedForCall:(id)arg0 ;
-(void)isUsingBasebandChangedForCall:(id)arg0 ;
-(void)localSenderIdentityAccountUUIDChangedForCall:(id)arg0 ;
-(void)mediaPropertiesChangedForCall:(id)arg0 remoteAspectRatioDidChange:(BOOL)arg1 remoteCameraOrientationDidChange:(BOOL)arg2 ;
-(void)mediaStalledChangedForCall:(id)arg0 ;
-(void)modelChangedForCall:(id)arg0 ;
-(void)needsManualInCallSoundsChangedForCall:(id)arg0 ;
-(void)postNotificationsForCall:(id)arg0 afterUpdatesInBlock:(id)arg1 ;
-(void)postNotificationsForCall:(id)arg0 usingComparisonCall:(id)arg1 ;
-(void)postNotificationsForCall:(id)arg0 usingComparisonCall:(id)arg1 afterUpdatesInBlock:(id)arg2 ;
-(void)postNotificationsForCallContainer:(id)arg0 afterUpdatesInBlock:(id)arg1 ;
-(void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)arg0 ;
-(void)providerContextChangedForCall:(id)arg0 ;
-(void)remoteAspectRatioChangedForCall:(id)arg0 ;
-(void)remoteCameraOrientationChangedForCall:(id)arg0 ;
-(void)remoteParticipantHandlesChangedForCall:(id)arg0 ;
-(void)remoteScreenAspectRatioChangedForCall:(id)arg0 ;
-(void)remoteScreenOrientationChangedForCall:(id)arg0 ;
-(void)remoteUplinkMutedChangedForCall:(id)arg0 ;
-(void)remoteVideoContentRectChangedForCall:(id)arg0 ;
-(void)sharingScreenChangedForCall:(id)arg0 ;
-(void)shouldSuppressRingtoneChangedForCall:(id)arg0 ;
-(void)statusChangedForCall:(id)arg0 ;
-(void)supportsTTYWithVoiceChangedForCall:(id)arg0 ;
-(void)ttyTypeChangedForCall:(id)arg0 ;
-(void)videoDegradedChangedForCall:(id)arg0 ;
-(void)videoMirroredChangedForCall:(id)arg0 ;
-(void)videoPausedChangedForCall:(id)arg0 ;
-(void)videoStreamTokenChangedForCall:(id)arg0 ;
-(void)wantsHoldMusicChangedForCall:(id)arg0 ;


@end


#endif