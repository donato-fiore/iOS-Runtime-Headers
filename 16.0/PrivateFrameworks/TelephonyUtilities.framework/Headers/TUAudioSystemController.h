// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUAUDIOSYSTEMCONTROLLER_H
#define TUAUDIOSYSTEMCONTROLLER_H

@class NSNumber, NSArray, NSDictionary;
@protocol OS_dispatch_queue, TUAudioSystemControllerDelegate;


#import "TUAudioController.h"

@interface TUAudioSystemController : TUAudioController {
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForVoicemail;
    NSArray *_currentPickableRoutes;
    BOOL _isRequestingUplinkMuted;
    BOOL _isRequestingDownlinkMuted;
    BOOL _isRequestingTTY;
    BOOL _isRequestingPickableRoutesForTTY;
    BOOL _isRequestingPickableRoutesForPhoneCall;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVideo;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVoice;
    BOOL _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    BOOL _isRequestingPickableRoutesForVoicemail;
    NSUInteger _lastUplinkMutedRequestScheduleTime;
    NSUInteger _lastDownlinkMutedRequestScheduleTime;
    NSUInteger _lastTTYRequestScheduleTime;
    NSUInteger _lastTTYPickableRoutesScheduleTime;
    NSUInteger _lastPhoneCallCategoryRoutesScheduleTime;
    NSUInteger _lastPlayAndRecordVideoRoutesScheduleTime;
    NSUInteger _lastPlayAndRecordVoiceRoutesScheduleTime;
    NSUInteger _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    NSUInteger _lastVoicemailRoutesScheduleTime;
}


@property (nonatomic) float activeCategoryVolume;
@property (readonly, copy, nonatomic) NSArray *bestGuessPickableRoutesForAnyCall;
@property (weak, nonatomic) NSObject<TUAudioSystemControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
@property (readonly, nonatomic) BOOL otherSessionsRequestNoRingtoneInterruption;
@property (readonly, copy, nonatomic) NSArray *pickableRoutesForTTY;
@property (readonly, copy, nonatomic) NSDictionary *pickedRouteAttribute;
@property (readonly, nonatomic, getter=isTTY) BOOL tty;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;


+(BOOL)isPhoneCallAudioCategory:(id)arg0 ;
+(id)filteredPickableRoutesFromPickableRoutes:(id)arg0 ;
+(id)sharedAudioSystemController;
+(id)sharedSystemController;
+(id)sourceIdentifierForRouteID:(id)arg0 ;
-(BOOL)pickRoute:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldSuppressCallUsingRoute:(id)arg0 ;
-(id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg0 ;
-(id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg0 ;
-(id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg0 ;
-(id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg0 ;
-(id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg0 ;
-(id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg0 ;
-(id)currentlyPickedRouteIdForCategory:(id)arg0 andMode:(id)arg1 ;
-(id)init;
-(id)pickableRouteWithUniqueIdentifier:(id)arg0 ;
-(id)pickableRoutesForActiveCall;
-(id)pickableRoutesForCategory:(id)arg0 andMode:(id)arg1 ;
-(void)_getPickableRoutesForCategory:(id)arg0 mode:(id)arg1 onlyKnownCombinations:(BOOL)arg2 completion:(id)arg3 ;
-(void)_handleDownlinkMuteDidChangeNotification:(id)arg0 ;
-(void)_handlePickableRoutesDidChangeNotification:(id)arg0 ;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg0 ;
-(void)_handleVolumeDidChangeNotification:(id)arg0 ;
-(void)_loadCurrentPickableRoutesWithCompletion:(id)arg0 ;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_updateCachedState;
-(void)dealloc;
-(void)getPickableRoutesForCategory:(id)arg0 mode:(id)arg1 completion:(id)arg2 ;
-(void)switchBluetoothAudioFormats;


@end


#endif