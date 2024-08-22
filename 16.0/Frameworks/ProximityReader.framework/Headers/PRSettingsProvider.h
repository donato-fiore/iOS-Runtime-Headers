// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSETTINGSPROVIDER_H
#define PRSETTINGSPROVIDER_H


#import <Foundation/Foundation.h>


@interface PRSettingsProvider : NSObject



+(BOOL)getPINPrivacyLockForBundleID:(id)arg0 ;
+(BOOL)hasEntitlement:(id)arg0 ;
+(BOOL)shouldShowPINPrivacyLockForBundleID:(id)arg0 ;
+(void)setPINPrivacyLock:(BOOL)arg0 forBundleID:(id)arg1 ;


@end


#endif