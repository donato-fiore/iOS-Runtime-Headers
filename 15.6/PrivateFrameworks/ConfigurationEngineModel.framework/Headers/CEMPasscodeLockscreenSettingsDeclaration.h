// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMPASSCODELOCKSCREENSETTINGSDECLARATION_H
#define CEMPASSCODELOCKSCREENSETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowAssistantWhileLocked; // ivar: _payloadAllowAssistantWhileLocked
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenControlCenter; // ivar: _payloadAllowLockScreenControlCenter
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenNotificationsView; // ivar: _payloadAllowLockScreenNotificationsView
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenTodayView; // ivar: _payloadAllowLockScreenTodayView
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenWiFiModification; // ivar: _payloadAllowLockScreenWiFiModification
@property (copy, nonatomic) NSNumber *payloadAllowPassbookWhileLocked; // ivar: _payloadAllowPassbookWhileLocked
@property (copy, nonatomic) NSNumber *payloadAllowVoiceDialing; // ivar: _payloadAllowVoiceDialing
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowVoiceDialing:(id)arg1 withAllowAssistantWhileLocked:(id)arg2 withAllowLockScreenTodayView:(id)arg3 withAllowPassbookWhileLocked:(id)arg4 withAllowLockScreenNotificationsView:(id)arg5 withAllowLockScreenControlCenter:(id)arg6 withAllowLockScreenWiFiModification:(id)arg7 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif