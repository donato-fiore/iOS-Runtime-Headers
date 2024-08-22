// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFBKUTILS_H
#define IFBKUTILS_H


#import <Foundation/Foundation.h>


@interface iFBKUtils : NSObject



+(BOOL)deviceSupportsFaceID;
+(id)getPreferencesValueforKey:(id)arg0 domain:(struct __CFString *)arg1 ;
+(void)addToHomeScreen;
+(void)exitCaptiveModeRemovingFromHomeScreen:(BOOL)arg0 ;
+(void)removeFromHomeScreen;
+(void)setFBKVisibleInHomeScreen:(BOOL)arg0 ;
+(void)setPreferencesValue:(id)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;


@end


#endif