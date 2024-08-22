// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMINTERNALPREFERENCES_H
#define EMINTERNALPREFERENCES_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EMInternalPreferences : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_hasUserDefaultValueForKey:(id)arg0 expectedValue:(id)arg1 ;
+(BOOL)_preferenceEnabled:(NSUInteger)arg0 ;
+(BOOL)_userDefaultEnabledForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)preferenceEnabled:(NSUInteger)arg0 ;
+(id)defaultForPreference:(NSUInteger)arg0 ;
+(id)log;
+(id)observeChangesForPreference:(NSUInteger)arg0 usingBlock:(id)arg1 ;
+(void)_registerForDefaultChanges;
+(void)_setUserDefaultEnabled:(BOOL)arg0 forKey:(id)arg1 ;
+(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
+(void)setPreference:(NSUInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif