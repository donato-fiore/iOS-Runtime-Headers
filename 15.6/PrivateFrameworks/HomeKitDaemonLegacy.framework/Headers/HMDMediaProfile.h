// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAPROFILE_H
#define HMDMEDIAPROFILE_H

@class HMFUnfairLock, NSDictionary, NSString;
@protocol HMFLogging, HMFLocking;


#import "HMDAccessoryProfile.h"
#import "HMDMediaSession.h"

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLogging, HMFLocking>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, nonatomic) NSUInteger capability;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *mediaRouteID;
@property (retain) HMDMediaSession *mediaSession; // ivar: _mediaSession
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)namespace;
+(id)sessionNamespace;
+(id)uniqueIdentifierFromAccessory:(id)arg0 ;
-(BOOL)_updateAudioControl:(id)arg0 ;
-(BOOL)_updatePlayback:(id)arg0 ;
-(BOOL)_updateRefreshPlayback:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 uniqueIdentifier:(id)arg1 services:(id)arg2 workQueue:(id)arg3 ;
-(void)_handleMediaResponses:(id)arg0 message:(id)arg1 ;
-(void)_handleMediaSessionSetAudioControl:(id)arg0 ;
-(void)_handleRefreshPlayback:(id)arg0 ;
-(void)_handleSetPlayback:(id)arg0 ;
-(void)_handleSetPower:(id)arg0 ;
-(void)_handleSetValue:(id)arg0 withRequestProperty:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_sessionPlaybackStateUpdated:(id)arg0 notifyXPCClients:(BOOL)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg0 configurationTracker:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleSessionPlaybackStateUpdatedNotification:(id)arg0 ;
-(void)handleSessionUpdatedNotification:(id)arg0 ;
-(void)handleSessionVolumeUpdatedNotification:(id)arg0 ;
-(void)handleSetValue:(id)arg0 withRequestProperty:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)lock;
-(void)performBlock:(id)arg0 ;
-(void)registerForMessages;
-(void)registerForNotifications;
-(void)sessionAudioControlUpdated:(id)arg0 ;
-(void)unlock;
-(void)unregisterForNotifications;
-(void)updateWithResponses:(id)arg0 requestMessageInformation:(id)arg1 ;


@end


#endif