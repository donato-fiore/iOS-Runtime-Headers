// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCARPLAYANNOUNCEMENTREQUESTCAPABILITYPROVIDER_H
#define AFCARPLAYANNOUNCEMENTREQUESTCAPABILITYPROVIDER_H

@class CARSessionStatus, NSHashTable, NSString;
@protocol CARSessionObserving, AFAnnouncementRequestCapabilityProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject <CARSessionObserving, AFAnnouncementRequestCapabilityProviding>

 {
    CARSessionStatus *_carSessionStatus;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BOOL _isCarPlayConnected;
    NSUInteger _lastKnownAvailableAnnouncementRequestTypes;
    NSUInteger _lastKnownEligibleAnnouncementRequestTypes;
    NSHashTable *_delegates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)platform;
+(id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(NSInteger)arg0 ;
+(id)provider;
+(id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(NSInteger)arg0 ;
-(NSUInteger)_requestTypesForCarPlayAvailableOrConnected:(BOOL)arg0 ;
-(NSUInteger)lastKnownEligibleAnnouncementRequestTypes;
-(id)initWithQueue:(id)arg0 ;
-(void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(id)arg0 ;
-(void)_isCarPlayConnectedWithCompletion:(id)arg0 ;
-(void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(NSUInteger)arg0 ;
-(void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(NSUInteger)arg0 ;
-(void)_updateForCarPlaySessionConnected:(BOOL)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id)arg0 ;
-(void)isCarPlayConnectedWithCompletion:(id)arg0 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)updateForCarPlaySessionConnected:(BOOL)arg0 ;


@end


#endif