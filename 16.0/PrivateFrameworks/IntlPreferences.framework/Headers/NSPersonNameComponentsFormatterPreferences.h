// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPERSONNAMECOMPONENTSFORMATTERPREFERENCES_H
#define NSPERSONNAMECOMPONENTSFORMATTERPREFERENCES_H


#import <Foundation/Foundation.h>


@interface NSPersonNameComponentsFormatterPreferences : NSObject



+(id)infoClassFromPreferencesSource:(NSUInteger)arg0 ;
+(id)mappedPreferencesForPreferences:(id)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
+(void)_postPreferencesChangedNotification;
+(void)_setPreference:(id)arg0 toValue:(NSInteger)arg1 usingExistingGetter:(SEL)arg2 ;
+(void)_syncronizeGizmoDefaultWithKey:(id)arg0 value:(NSInteger)arg1 ;
+(void)setDefaultDisplayNameOrder:(NSInteger)arg0 ;
+(void)setPreferNicknamesDefault:(BOOL)arg0 ;
+(void)setShortNameFormat:(NSInteger)arg0 ;
+(void)setShortNameIsEnabled:(BOOL)arg0 ;


@end


#endif