// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HCUTILITIES_H
#define HCUTILITIES_H


#import <Foundation/Foundation.h>


@interface HCUtilities : NSObject



+(BOOL)currentProcessIsAXUIServer;
+(BOOL)currentProcessIsCarousel;
+(BOOL)currentProcessIsHealth;
+(BOOL)currentProcessIsHeard;
+(BOOL)currentProcessIsInCallService;
+(BOOL)currentProcessIsPreferences;
+(BOOL)currentProcessIsRTTExternsion;
+(BOOL)currentProcessIsSpringBoard;
+(BOOL)currentProcessIsSystemApp;
+(BOOL)deviceHasHomeButton;
+(BOOL)deviceIsBigPhone;
+(BOOL)deviceIsMultiUser;
+(BOOL)deviceIsPad;
+(BOOL)deviceIsPhone;
+(BOOL)deviceIsPod;
+(BOOL)deviceIsSmallPhone;
+(BOOL)deviceIsWatch;
+(BOOL)isInternalInstall;
+(BOOL)isProtectedDataAvailable;
+(BOOL)supportsLEA2;
+(BOOL)watchSupportsPairingHearingAids;
+(NSInteger)systemBootTime;
+(id)bluetoothManagerQueue;
+(id)messagePayloadFromDictionary:(id)arg0 andIdentifier:(NSUInteger)arg1 ;


@end


#endif