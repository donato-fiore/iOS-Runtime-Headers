// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICONTEXTOVERRIDE_H
#define SIRICONTEXTOVERRIDE_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriContextOverride : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *accessibilityShortcutEnabled; // ivar: _accessibilityShortcutEnabled
@property (retain, nonatomic) NSNumber *carDNDActive; // ivar: _carDNDActive
@property (retain, nonatomic) NSNumber *connectedToCarPlay; // ivar: _connectedToCarPlay
@property (retain, nonatomic) NSNumber *connectedToTrustedCarPlay; // ivar: _connectedToTrustedCarPlay
@property (retain, nonatomic) NSString *currentSpokenLanguageCode; // ivar: _currentSpokenLanguageCode
@property (retain, nonatomic) NSNumber *deviceIsBlocked; // ivar: _deviceIsBlocked
@property (retain, nonatomic) NSNumber *deviceIsPasscodeLocked; // ivar: _deviceIsPasscodeLocked
@property (retain, nonatomic) NSNumber *pad; // ivar: _pad
@property (retain, nonatomic) NSNumber *pocketStateShouldPreventVoiceTrigger; // ivar: _pocketStateShouldPreventVoiceTrigger
@property (retain, nonatomic) NSNumber *siriIsEnabled; // ivar: _siriIsEnabled
@property (retain, nonatomic) NSNumber *siriIsRestricted; // ivar: _siriIsRestricted
@property (retain, nonatomic) NSNumber *siriIsSupported; // ivar: _siriIsSupported
@property (retain, nonatomic) NSNumber *smartCoverClosed; // ivar: _smartCoverClosed
@property (retain, nonatomic) NSNumber *unlockedSinceBoot; // ivar: _unlockedSinceBoot


+(BOOL)supportsSecureCoding;
-(BOOL)accessibilityShortcutEnabledForSystemState:(id)arg0 ;
-(BOOL)carDNDActiveForSystemState:(id)arg0 ;
-(BOOL)deviceIsBlockedForSystemState:(id)arg0 ;
-(BOOL)deviceIsPasscodeLockedForSystemState:(id)arg0 ;
-(BOOL)hasUnlockedSinceBootForSystemState:(id)arg0 ;
-(BOOL)isConnectedToCarPlayForSystemState:(id)arg0 ;
-(BOOL)isConnectedToTrustedCarPlayForSystemState:(id)arg0 ;
-(BOOL)isPadForSystemState:(id)arg0 ;
-(BOOL)pocketStateShouldPreventVoiceTriggerForSystemState:(id)arg0 ;
-(BOOL)siriIsEnabledForSystemState:(id)arg0 ;
-(BOOL)siriIsRestrictedForSystemState:(id)arg0 ;
-(BOOL)siriIsSupportedForSystemState:(id)arg0 ;
-(BOOL)smartCoverClosedForSystemState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentSpokenLanguageCodeForSystemState:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overrideAccessibilityShortcutEnabled:(BOOL)arg0 ;
-(void)overrideCarDNDActive:(BOOL)arg0 ;
-(void)overrideConnectedToCarPlay:(BOOL)arg0 ;
-(void)overrideConnectedToTrustedCarPlay:(BOOL)arg0 ;
-(void)overrideCurrentSpokenLanguageCode:(id)arg0 ;
-(void)overrideDeviceIsBlocked:(BOOL)arg0 ;
-(void)overrideDeviceIsPasscodeLocked:(BOOL)arg0 ;
-(void)overrideHasUnlockedSinceBoot:(BOOL)arg0 ;
-(void)overrideIsPad:(BOOL)arg0 ;
-(void)overridePocketStateShouldPreventVoiceTrigger:(BOOL)arg0 ;
-(void)overrideSiriIsEnabled:(BOOL)arg0 ;
-(void)overrideSiriIsRestricted:(BOOL)arg0 ;
-(void)overrideSiriIsSupported:(BOOL)arg0 ;
-(void)overrideSmartCoverClosed:(BOOL)arg0 ;


@end


#endif