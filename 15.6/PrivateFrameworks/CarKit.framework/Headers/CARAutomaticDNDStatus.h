// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARAUTOMATICDNDSTATUS_H
#define CARAUTOMATICDNDSTATUS_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CARAutomaticDNDStatus : NSObject

@property (readonly, nonatomic) NSUInteger cachedAutomaticDNDActiveState; // ivar: _cachedAutomaticDNDActiveState
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *exitConfirmationChangeObserver; // ivar: _exitConfirmationChangeObserver
@property (copy, nonatomic) id *statusChangeObserver; // ivar: _statusChangeObserver


+(BOOL)isAutomaticDNDAvailable;
+(id)_DNDServiceInterface;
-(BOOL)hasAdjustedTriggerMethod;
-(BOOL)hasCompletedFirstRidePreference;
-(BOOL)hasMigratedToDriving;
-(BOOL)hasOptedOutOfAutomaticDND;
-(BOOL)hasStartedFirstRidePreference;
-(BOOL)isAutomaticDNDInternalDNDBuddyPreference;
-(BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
-(BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
-(BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
-(BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
-(BOOL)platformSupportsSendingAutoReplies;
-(BOOL)platformSupportsUrgentMessages;
-(BOOL)shouldActivateWithCarPlay;
-(BOOL)shouldEnforceInternalWhitelist;
-(CGFloat)mostRecentTriggerMethodChange;
-(NSUInteger)automaticDNDTriggeringMethod;
-(id)disableTimerTimestamp;
-(id)firstBuddyPresentationFirstMoment;
-(id)init;
-(void)_detachObservers;
-(void)_dndStateChanged:(BOOL)arg0 ;
-(void)_exitConfirmationStateChanged:(BOOL)arg0 ;
// -(void)_performCARPreferencesBlock:(id)arg0 forReading:(unk)arg1  ;
-(void)_resetUserDNDSettingsWithReply:(id)arg0 ;
-(void)_setupConnection;
// -(void)_xpcFetchWithServiceBlock:(id)arg0 errorHandler:(unk)arg1  ;
-(void)allowedAutoReplyAudience:(id)arg0 ;
-(void)autoReplyMessageWithReply:(id)arg0 ;
-(void)dealloc;
-(void)disableDNDUntilEndOfDriveWithContext:(id)arg0 reply:(id)arg1 ;
-(void)disableDNDUntilEndOfDriveWithReply:(id)arg0 ;
-(void)fetchAutomaticDNDAssertionWithReply:(id)arg0 ;
-(void)fetchAutomaticDNDExitConfirmationWithReply:(id)arg0 ;
-(void)fetchAutomaticDNDTriggerPreferenceWithReply:(id)arg0 ;
-(void)setActivateWithCarPlay:(BOOL)arg0 ;
-(void)setAllowedAutoReplyAudience:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setAutoReplyMessage:(id)arg0 reply:(id)arg1 ;
-(void)setAutomaticDNDActive:(BOOL)arg0 withReply:(id)arg1 ;
-(void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)arg0 ;
-(void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)arg0 ;
-(void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)arg0 ;
-(void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)arg0 ;
-(void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)arg0 ;
-(void)setAutomaticDNDTriggerPreference:(NSUInteger)arg0 withReply:(id)arg1 ;
-(void)setAutomaticDNDTriggeringMethod:(NSUInteger)arg0 ;
-(void)setCompletedFirstRidePreference:(BOOL)arg0 ;
-(void)setDisableTimerTimestamp:(id)arg0 ;
-(void)setFirstBuddyPresentationFirstMoment:(id)arg0 ;
-(void)setHasAdjustedTriggerMethod:(BOOL)arg0 ;
-(void)setHasMigratedToDriving:(BOOL)arg0 ;
-(void)setMostRecentTriggerMethodChange:(CGFloat)arg0 ;
-(void)setOptedOutOfAutomaticDND:(BOOL)arg0 ;
-(void)setStartedFirstRidePreference:(BOOL)arg0 ;


@end


#endif