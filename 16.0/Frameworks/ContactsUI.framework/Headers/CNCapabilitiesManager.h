// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCAPABILITIESMANAGER_H
#define CNCAPABILITIESMANAGER_H

@class NSMutableDictionary, NSString;
@protocol IDSIDQueryControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate>

 {
    BOOL _isListeningToIDSServiceAvailability;
    BOOL _isListeningToIDSQueryController;
    NSMutableDictionary *_destinationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultCapabilitiesManager;
+(void)_setDefaultCapabilitiesManager:(id)arg0 ;
-(BOOL)_isAppAvailable:(id)arg0 ;
-(BOOL)areFavoritesAvailable;
-(BOOL)hasAdditionalTextTones;
-(BOOL)hasCameraCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)hasCellularTelephonyHardwareCapability;
-(BOOL)hasForceTouchCapability;
-(BOOL)hasPreviouslyConferencedWithID:(id)arg0 ;
-(BOOL)hasSMSCapability;
-(BOOL)hasSiriCapability;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasVibratorCapability;
-(BOOL)isConferencingAvailable;
-(BOOL)isConferencingEverGonnaBeAvailable;
-(BOOL)isEmailConfigured;
-(BOOL)isFaceTimeAppAvailable;
-(BOOL)isFaceTimeAudioAvailable;
-(BOOL)isMMSConfigured;
-(BOOL)isMadridConfigured;
-(BOOL)isMailAppAvailable;
-(BOOL)isMessagesAppAvailable;
-(BOOL)isPhoneAppAvailable;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)isWeiboServiceAvailable;
-(id)conferenceURLForDestinationID:(id)arg0 ;
-(id)conferenceURLForPhoneNumber:(id)arg0 ;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(void)addIDSServiceAvailabilityListener:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)idStatusUpdatedForDestinations:(id)arg0 service:(id)arg1 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg0 ;


@end


#endif