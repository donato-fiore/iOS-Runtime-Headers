// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALPREFERENCES_H
#define CALPREFERENCES_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CalPreferences : NSObject {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}




+(BOOL)_getBOOL:(*BOOL)arg0 fromTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)_getInteger:(*NSInteger)arg0 fromTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)_getValue:(*id)arg0 fromTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)_setBOOL:(BOOL)arg0 inTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)_setInteger:(NSInteger)arg0 inTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)_setValue:(id)arg0 inTestStoreDomain:(id)arg1 key:(id)arg2 ;
+(BOOL)testMode;
+(void)setTestMode:(BOOL)arg0 ;
-(BOOL)getBooleanPreference:(id)arg0 defaultValue:(BOOL)arg1 ;
-(NSInteger)getIntegerPreference:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(id)getValueForPreference:(id)arg0 expectedClass:(Class)arg1 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(void)_preferenceChangedExternally:(id)arg0 ;
-(void)_preferenceChangedInternally:(id)arg0 ;
-(void)_synchronizePreferences;
-(void)dealloc;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg0 ;
-(void)setBooleanPreference:(id)arg0 value:(BOOL)arg1 notificationName:(id)arg2 ;
-(void)setIntegerPreference:(id)arg0 value:(NSInteger)arg1 notificationName:(id)arg2 ;
-(void)setValueForPreference:(id)arg0 value:(id)arg1 notificationName:(id)arg2 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg0 ;


@end


#endif