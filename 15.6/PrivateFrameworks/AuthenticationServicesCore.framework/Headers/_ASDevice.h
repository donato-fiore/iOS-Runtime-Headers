// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ASDEVICE_H
#define _ASDEVICE_H


#import <Foundation/Foundation.h>


@interface _ASDevice : NSObject



+(BOOL)isBiometricAuthenticationAvailable;
+(BOOL)isCABLEClient;
+(BOOL)isPad;
+(BOOL)shouldRequireLocalAuthenticationForPasswords;
+(BOOL)shouldRequireLocalAuthenticationForPlatformCredentials;
+(NSInteger)biometryType;


@end


#endif