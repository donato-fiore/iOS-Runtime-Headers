// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSETTINGSPROVIDER_H
#define PRSETTINGSPROVIDER_H


#import <Foundation/Foundation.h>


@interface PRSettingsProvider : NSObject



+(BOOL)getAlwaysPlaySoundForBundleID:(id)arg0 ;
+(BOOL)getPINPrivacyLockForBundleID:(id)arg0 ;
+(BOOL)hasEntitlement:(id)arg0 ;
+(BOOL)isProximityReaderSupported:(id)arg0 ;
+(BOOL)shouldDisablePINPrivacyLockForBundleID:(id)arg0 ;
+(BOOL)shouldShowPINPrivacyLockForBundleID:(id)arg0 ;
+(void)removeMDMAppAttribute:(NSInteger)arg0 forBundleID:(id)arg1 ;
+(void)setAlwaysPlaySound:(BOOL)arg0 forBundleID:(id)arg1 ;
+(void)setMDMAppAttribute:(NSInteger)arg0 withValue:(BOOL)arg1 forBundleID:(id)arg2 ;
+(void)setPINPrivacyLock:(BOOL)arg0 forBundleID:(id)arg1 ;


@end


#endif