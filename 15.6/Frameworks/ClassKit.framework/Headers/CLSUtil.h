// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSUTIL_H
#define CLSUTIL_H


#import <Foundation/Foundation.h>


@interface CLSUtil : NSObject



+(BOOL)isAppleInternalInstall;
+(BOOL)isSystemIntegrityEnabled;
+(id)dataFromError:(id)arg0 ;
+(id)dataFromPath:(id)arg0 makeBackwardCompatible:(BOOL)arg1 error:(*id)arg2 ;
+(id)dictionaryStrippingNSNullValues:(id)arg0 ;
+(id)errorFromData:(id)arg0 ;
+(id)hashArrayOfStrings:(id)arg0 lastHash:(id)arg1 ;
+(id)hashData:(id)arg0 lastHash:(id)arg1 ;
+(id)hashData:(id)arg0 lastHashData:(id)arg1 ;
+(id)mediumDateFormatter;
+(id)mediumStringFromDate:(id)arg0 ;
+(id)pathFromData:(id)arg0 ;
+(id)percentNumberFormatter;
+(id)percentageStringFromNumber:(id)arg0 ;
+(id)stringFromTimeInterval:(CGFloat)arg0 ;
+(id)userDefaultsConfigurationDictionaryAndReturnError:(*id)arg0 ;
+(void)fetchInfoForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)postNotification:(char *)arg0 ;
+(void)postNotificationAsync:(char *)arg0 ;


@end


#endif