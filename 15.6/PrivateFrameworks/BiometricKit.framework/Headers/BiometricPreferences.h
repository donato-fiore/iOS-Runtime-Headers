// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICPREFERENCES_H
#define BIOMETRICPREFERENCES_H


#import <Foundation/Foundation.h>


@interface BiometricPreferences : NSObject



+(BOOL)isPreferenceKeySet:(id)arg0 ;
+(id)preferenceValueOfClass:(Class)arg0 forKey:(id)arg1 ;
+(id)preferenceValueOfClass:(Class)arg0 forKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)stateDictionary;
+(void)setPreferenceValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif