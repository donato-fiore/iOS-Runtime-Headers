// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(int)deviceClass;


@end


#endif