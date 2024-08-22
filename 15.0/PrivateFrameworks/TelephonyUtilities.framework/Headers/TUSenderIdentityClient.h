// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUSENDERIDENTITYCLIENT_H
#define TUSENDERIDENTITYCLIENT_H

@protocol TUCoreTelephonyClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUSenderIdentityClient : NSObject

@property (retain, nonatomic) NSObject<TUCoreTelephonyClient> *client; // ivar: _client
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg0 senderIdentityUUID:(id)arg1 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg0 senderIdentityUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)isRTTAvailableForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isRTTSupportedForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYAvailableForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYEnabledForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isTTYSupportedForSenderIdentityUUID:(id)arg0 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg0 senderIdentityUUID:(id)arg1 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg0 senderIdentityUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg0 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif