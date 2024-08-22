// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSENGINE_H
#define SOSENGINE_H

@class NSDate, NSString, NSMutableArray, FKFriendsManager, CLLocation, _MKLocationShifter;
@protocol SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate, SOSCoreAnalyticsReporting, SOSFlowManagerCoexProtocol;

#import <Foundation/Foundation.h>

#import "SOSContactsManager.h"
#import "SOSStatusManager.h"
#import "SOSButtonPressState.h"
#import "SOSCoordinator.h"
#import "SOSPersistentTimerLocationManager.h"

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate>

 {
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    SOSContactsManager *_contactsManager;
    NSString *_medicalIDName;
    NSInteger _notifyContactsReason;
    SOSStatusManager *_sosStatusManager;
    BOOL _isEmergencyCallOngoing;
    NSInteger _currentSOSInitiationState;
    NSInteger _currentSOSInteractiveState;
    SOSButtonPressState *_currentSOSButtonPressState;
    SOSCoordinator *_sosCoordinator;
}


@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (retain, nonatomic) NSObject<SOSCoreAnalyticsReporting> *coreAnalyticsReporter; // ivar: _coreAnalyticsReporter
@property (readonly, nonatomic) NSInteger currentSOSFlowState; // ivar: _currentSOSFlowState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FKFriendsManager *friendsManager; // ivar: _friendsManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *lastLocationSent; // ivar: _lastLocationSent
@property (retain, nonatomic) _MKLocationShifter *locationShifter; // ivar: _locationShifter
@property (weak, nonatomic) NSObject<SOSFlowManagerCoexProtocol> *sosFlowManager; // ivar: _sosFlowManager
@property (readonly, nonatomic) SOSPersistentTimerLocationManager *sosPersistentTimerLocationManager; // ivar: _sosPersistentTimerLocationManager
@property (weak, nonatomic) NSObject<NSXPCListenerDelegate> *sosStatusManager;
@property (readonly) Class superclass;


+(BOOL)_isBasebandDevice;
+(BOOL)authorizedToUseContactStore;
+(id)GPSCoordinatesURLForLocation:(id)arg0 ;
+(id)_sosMessageForLocation:(id)arg0 isFirstMessage:(BOOL)arg1 withMMS:(BOOL)arg2 callbackNumber:(id)arg3 medicalIDName:(id)arg4 Reason:(NSInteger)arg5 ;
+(id)_sosMessageForLocation:(id)arg0 isFirstMessage:(BOOL)arg1 withMMS:(BOOL)arg2 myFullName:(id)arg3 myFirstName:(id)arg4 callbackNumber:(id)arg5 Reason:(NSInteger)arg6 ;
+(id)additionalTextForCallbackNumber:(id)arg0 ;
+(id)additionalTextForCallbackNumber:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 ;
+(id)contactStore;
+(id)firstNameForContact:(id)arg0 ;
+(id)fullNameForContact:(id)arg0 ;
+(id)getUrlForTrigger:(NSInteger)arg0 ;
+(id)mapTriggerToActivationReason:(NSInteger)arg0 ;
+(id)meContact;
+(id)sharedInstance;
+(void)_sendCKMessage:(id)arg0 failureBlock:(id)arg1 ;
+(void)_sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 useStandalone:(BOOL)arg3 failureBlock:(id)arg4 ;
+(void)_sendMessageToRecipients:(id)arg0 withLocation:(id)arg1 isFirstMessage:(BOOL)arg2 medicalIDName:(id)arg3 Reason:(NSInteger)arg4 ;
+(void)_sendSMSMessage:(id)arg0 MMSMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureBlock:(id)arg4 ;
+(void)preloadContactStoreIfNecessary;
+(void)shiftedLocationWithLocation:(id)arg0 completion:(id)arg1 ;
-(BOOL)isSendingLocationUpdate;
-(BOOL)isTriggerEnabled:(NSInteger)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)locationIsValidToSend:(id)arg0 ;
-(BOOL)notificationEnabledAndContactsExist;
-(id)contactsManager;
-(id)init;
-(id)initWithoutEntitlement;
-(void)SOSSendingLocationUpdateChanged:(id)arg0 ;
-(void)_checkEmergencyCallStatus;
-(void)_checkSOSCallStatus;
-(void)_onEmergencyCallStatusChanged:(id)arg0 ;
-(void)_tuCallCenterStatusChanged:(id)arg0 ;
-(void)broadcastUpdatedSOSStatus:(id)arg0 ;
-(void)contactStoreDidChange;
-(void)dealloc;
-(void)didDismissSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)dismissSOSWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDName;
-(void)handleNotifyThirdPartyClientsWithSOSStatus:(id)arg0 ;
-(void)handoffFallbackWithUUID:(id)arg0 trigger:(NSInteger)arg1 ;
-(void)mostRecentLocationSentWithCompletion:(id)arg0 ;
-(void)notifySafetyKitWithSOSStatus:(id)arg0 ;
-(void)retriggerSOSWithUUID:(id)arg0 trigger:(NSInteger)arg1 ;
-(void)sosPersistentTimerLocationMangerTimerFired:(id)arg0 location:(id)arg1 ;
-(void)start;
-(void)startSendingLocationUpdateForReason:(NSInteger)arg0 WithCompletion:(id)arg1 ;
-(void)startSendingLocationUpdateWithCompletion:(id)arg0 ;
-(void)stopSendingLocationUpdate;
-(void)syncState:(id)arg0 ;
-(void)triggerSOSWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 completion:(id)arg2 ;
-(void)triggerSOSWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 source:(NSInteger)arg2 completion:(id)arg3 ;
-(void)updateCurrentSOSButtonPressState:(id)arg0 ;
-(void)updateCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)updateCurrentSOSInteractiveState:(NSInteger)arg0 ;
-(void)willStartSendingLocationUpdate;


@end


#endif