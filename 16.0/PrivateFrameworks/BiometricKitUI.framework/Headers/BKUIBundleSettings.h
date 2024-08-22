// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIBUNDLESETTINGS_H
#define BKUIBUNDLESETTINGS_H


#import <Foundation/Foundation.h>


@interface BKUIBundleSettings : NSObject



+(BOOL)boolForUserDefaultsKey:(id)arg0 ;
+(BOOL)isFpEnrollHapticFeedbackDisabled;
+(BOOL)isUserStudy;
+(NSInteger)integerForUserDefaultsKey:(id)arg0 ;
+(float)floatForUserDefaultsKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 ;
+(void)setBool:(BOOL)arg0 forUserDefaultsKey:(id)arg1 ;
+(void)setDefaultSettingsValues;
+(void)setInteger:(NSInteger)arg0 forUserDefaultsKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;
+(void)synchronize;


@end


#endif