// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUTILS_H
#define LAUTILS_H


#import <Foundation/Foundation.h>


@interface LAUtils : NSObject



+(BOOL)callerRunningOnForeground:(id)arg0 pid:(int)arg1 ;
+(BOOL)hasBridge;
+(BOOL)isApplePayPolicy:(NSInteger)arg0 ;
+(BOOL)isApplePayPolicy:(NSInteger)arg0 inApp:(BOOL)arg1 ;
+(BOOL)isAppleSilicon;
+(BOOL)isBiometricOnlyPolicy:(NSInteger)arg0 ;
+(BOOL)isDaytona;
+(BOOL)isGibraltar;
+(BOOL)isMultiUser;
+(BOOL)isSecureBootCapable;
+(id)auditTokenToData:(struct ? )arg0 ;
+(id)truncateString:(id)arg0 maxLength:(NSInteger)arg1 ;


@end


#endif