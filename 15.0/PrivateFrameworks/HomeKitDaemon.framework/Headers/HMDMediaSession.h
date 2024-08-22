// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIASESSION_H
#define HMDMEDIASESSION_H

@class HMFObject, NSMutableSet, NSString, NSArray, NSSet, NSUUID, NSMutableArray, HMFTimer;
@protocol HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding, HMFLocking, OS_dispatch_queue;


#import "HMDMediaEndpoint.h"
#import "HMDMediaSessionState.h"

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>

 {
    id<HMFLocking> *_lock;
    NSMutableSet *_mediaProfiles;
}


@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (nonatomic, getter=isCurrentAccessorySession) BOOL currentAccessorySession; // ivar: _currentAccessorySession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDMediaEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logID; // ivar: _logID
@property (readonly, nonatomic) NSArray *mediaProfiles;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers; // ivar: _setPlaybackStateCompletionHandlers
@property (retain, nonatomic) HMFTimer *setPlaybackStateTimer; // ivar: _setPlaybackStateTimer
@property (retain, nonatomic) HMDMediaSessionState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(Class)mediaPropertyValueTypeWithMessageKey:(id)arg0 ;
+(id)logCategory;
+(id)mediaPropertyMessageKeys;
+(id)sessionForCurrentAccessory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEndpoint:(id)arg0 mediaProfiles:(id)arg1 state:(id)arg2 ;
-(id)_initWithMediaProfiles:(id)arg0 state:(id)arg1 ;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 mediaProfiles:(id)arg1 state:(id)arg2 ;
-(id)logIdentifier;
-(void)_getPlaybackStateWithCompletion:(id)arg0 ;
-(void)_handleGetPlaybackState:(id)arg0 ;
-(void)_handleMediaSessionSetAudioControl:(id)arg0 ;
-(void)_handleMediaUpdateMuted:(id)arg0 ;
-(void)_handleMediaUpdateVolume:(id)arg0 ;
-(void)_handleSetPlayback:(id)arg0 ;
-(void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg0 ;
-(void)_notifyClientsOfUpdatedVolume:(id)arg0 muted:(id)arg1 inResponseToMessage:(id)arg2 ;
-(void)_postNotificationOfMediaStateUpdate;
-(void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg0 ;
-(void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)arg0 ;
-(void)_queueSetPlaybackStateCompletion:(id)arg0 ;
-(void)_registerForSessionUpdates:(BOOL)arg0 ;
-(void)_setPlaybackState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)addMediaProfile:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg0 ;
-(void)handleMediaPlaybackStateNotification:(id)arg0 ;
-(void)handleMediaSessionSetAudioControl:(id)arg0 ;
-(void)handleRefreshPlayback:(id)arg0 ;
-(void)handleSetPlayback:(id)arg0 ;
-(void)readProperties:(id)arg0 completion:(id)arg1 ;
-(void)registerForSessionUpdates:(BOOL)arg0 ;
-(void)removeMediaProfile:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateEndpoint:(id)arg0 ;
-(void)updateWithResponses:(id)arg0 requestMessageInformation:(id)arg1 ;
-(void)writeProperties:(id)arg0 completion:(id)arg1 ;


@end


#endif