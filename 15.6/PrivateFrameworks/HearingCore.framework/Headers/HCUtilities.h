// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HCUTILITIES_H
#define HCUTILITIES_H


#import <Foundation/Foundation.h>


@interface HCUtilities : NSObject



+(BOOL)currentProcessIsAXUIServer;
+(BOOL)currentProcessIsHeard;
+(BOOL)currentProcessIsPreferences;
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