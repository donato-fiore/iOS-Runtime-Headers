// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCORETELEPHONYCLIENT_H
#define TUCORETELEPHONYCLIENT_H

@class CoreTelephonyClient, NSString;
@protocol TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient>



@property (readonly, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(Class)RTTSettingsClass;
+(Class)RTTTelephonyUtilitiesClass;
+(id)sharedRTTTelephonyUtilities;
-(BOOL)inEmergencyMode;
-(BOOL)isDialAssistSupportedForSubscriptionLabelIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg0 subscription:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg0 subscriptionUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)isRTTSupportedForSubscription:(id)arg0 ;
-(BOOL)isRTTSupportedForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYEnabledForSubscription:(id)arg0 ;
-(BOOL)isTTYEnabledForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYHardwareAvailableForSubscription:(id)arg0 ;
-(BOOL)isTTYHardwareAvailableForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYHardwareEnabledForSubscription:(id)arg0 ;
-(BOOL)isTTYHardwareEnabledForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYHardwareSupportedForSubscription:(id)arg0 ;
-(BOOL)isTTYHardwareSupportedForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareAvailableForSubscription:(id)arg0 ;
-(BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareEnabledForSubscription:(id)arg0 ;
-(BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareSupportedForSubscription:(id)arg0 ;
-(BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg0 ;
-(BOOL)isTTYSupportedForSubscription:(id)arg0 ;
-(BOOL)isTTYSupportedForSubscriptionUUID:(id)arg0 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg0 subscription:(id)arg1 error:(*id)arg2 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg0 subscriptionUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)preferredTransportMethodForSubscription:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)objectForKey:(id)arg0 subscriptionLabelIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)subscriptionForLabelIdentifier:(id)arg0 ;
-(id)subscriptionForUUID:(id)arg0 ;
-(id)testEmergencyHandleForSubscriptionLabelIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif