// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCFEATUREOVERRIDES_H
#define MCFEATUREOVERRIDES_H


#import <Foundation/Foundation.h>


@interface MCFeatureOverrides : NSObject



+(BOOL)allowVPNInUserEnrollment;
+(BOOL)boolForDefaultsKey:(id)arg0 ;
+(BOOL)boolForDefaultsKey:(id)arg0 isPresent:(*BOOL)arg1 ;
+(BOOL)isAppleInternal;
+(BOOL)isDevFused;
+(BOOL)shouldDisablePlatformPayloadFilter;
+(BOOL)shouldSimulatorSupportMDM;
+(CGFloat)accountRemovalTimeoutWithDefaultValue:(CGFloat)arg0 ;
+(NSUInteger)profileEventsMaxLength;
+(id)_numberForDefaultsKey:(id)arg0 isPresent:(*BOOL)arg1 ;
+(int)profileEventsExpirationInterval;


@end


#endif