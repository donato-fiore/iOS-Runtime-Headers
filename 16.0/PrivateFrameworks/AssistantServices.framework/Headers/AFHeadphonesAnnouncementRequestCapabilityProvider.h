// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFHEADPHONESANNOUNCEMENTREQUESTCAPABILITYPROVIDER_H
#define AFHEADPHONESANNOUNCEMENTREQUESTCAPABILITYPROVIDER_H

@class AVSystemController, NSHashTable, NSString;
@protocol AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "AFSettingsConnection.h"
#import "AFNotifyObserver.h"
#import "AFSiriAnnouncementRoute.h"

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding>

 {
    BOOL _inWirelessSplitterSession;
    BOOL _inWirelessSplitterSessionStateValid;
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSUInteger _lastKnownAvailableAnnouncementRequests;
    NSUInteger _lastKnownEligibleAnnouncementRequests;
    NSHashTable *_delegates;
}


@property (retain, nonatomic) AFSiriAnnouncementRoute *currentAnnouncementRoute; // ivar: _currentAnnouncementRoute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)platform;
+(id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(NSInteger)arg0 ;
+(id)provider;
+(id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(NSInteger)arg0 ;
-(BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)arg0 ;
-(NSUInteger)lastKnownEligibleAnnouncementRequestTypes;
-(id)_getCurrentAnnouncementRoute;
-(id)_init;
-(id)_settingsConnection;
-(id)currentlyRoutedHeadphonesBTAddress;
-(id)currentlyRoutedHeadphonesProductID;
-(void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;
-(void)_fetchInitialState;
-(void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id)arg0 ;
-(void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id)arg0 ;
-(void)_settingsConnectionDidDisconnect;
-(void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
-(void)addDelegate:(id)arg0 ;
-(void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)arg0 ;
-(void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id)arg0 ;
-(void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;
-(void)notifyObserversOfAvailableAnnouncementRequestTypes;
-(void)notifyObserversOfEligibleAnnouncementRequestTypes:(NSUInteger)arg0 ;
-(void)systemControllerDied:(id)arg0 ;
-(void)updateAudioRouteAvailability:(id)arg0 ;
-(void)updateWirelessSplitterSessionInfoAndObserve;


@end


#endif