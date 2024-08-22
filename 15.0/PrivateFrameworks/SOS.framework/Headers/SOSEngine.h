// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSENGINE_H
#define SOSENGINE_H

@class NSDate, NSString, NSMutableArray, FKFriendsManager, CLLocation, _MKLocationShifter;
@protocol SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "SOSContactsManager.h"
#import "SOSPersistentTimerLocationManager.h"

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate>

 {
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    SOSContactsManager *_contactsManager;
    NSString *_medicalIDName;
    NSInteger _notifyContactsReason;
}


@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FKFriendsManager *friendsManager; // ivar: _friendsManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *lastLocationSent; // ivar: _lastLocationSent
@property (retain, nonatomic) _MKLocationShifter *locationShifter; // ivar: _locationShifter
@property (readonly, nonatomic) SOSPersistentTimerLocationManager *sosPersistentTimerLocationManager; // ivar: _sosPersistentTimerLocationManager
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
+(id)meContact;
+(id)sharedInstance;
+(void)_sendCKMessage:(id)arg0 failureBlock:(id)arg1 ;
+(void)_sendMessage:(id)arg0 location:(id)arg1 recipients:(id)arg2 useStandalone:(BOOL)arg3 failureBlock:(id)arg4 ;
+(void)_sendMessageToRecipients:(id)arg0 withLocation:(id)arg1 isFirstMessage:(BOOL)arg2 medicalIDName:(id)arg3 Reason:(NSInteger)arg4 ;
+(void)_sendSMSMessage:(id)arg0 MMSMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureBlock:(id)arg4 ;
+(void)preloadContactStoreIfNecessary;
+(void)shiftedLocationWithLocation:(id)arg0 completion:(id)arg1 ;
-(BOOL)isSendingLocationUpdate;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)locationIsValidToSend:(id)arg0 ;
-(BOOL)notificationEnabledAndContactsExist;
-(NSInteger)currentSOSInitiationState;
-(id)contactsManager;
-(id)init;
-(id)initWithoutEntitlement;
-(void)SOSSendingLocationUpdateChanged:(id)arg0 ;
-(void)contactStoreDidChange;
-(void)dealloc;
-(void)didDismissSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)dismissSOSWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDName;
-(void)isSendingLocationUpdate:(id)arg0 ;
-(void)mostRecentLocationSentWithCompletion:(id)arg0 ;
-(void)sosPersistentTimerLocationMangerTimerFired:(id)arg0 location:(id)arg1 ;
-(void)start;
-(void)startSendingLocationUpdateForReason:(NSInteger)arg0 WithCompletion:(id)arg1 ;
-(void)startSendingLocationUpdateWithCompletion:(id)arg0 ;
-(void)stopSendingLocationUpdate;
-(void)updateCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)updateCurrentSOSInteractiveState:(NSInteger)arg0 ;
-(void)willStartSendingLocationUpdate;


@end


#endif