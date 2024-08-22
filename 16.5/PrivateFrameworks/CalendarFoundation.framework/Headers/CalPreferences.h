// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALPREFERENCES_H
#define CALPREFERENCES_H

@class NSString, NSMutableSet;
@protocol CalPreferencesStore;

#import <Foundation/Foundation.h>


@interface CalPreferences : NSObject {
    id<CalPreferencesStore> *_store;
    NSString *_domain;
    BOOL _readOnly;
    NSMutableSet *_registeredNotificationsToReflect;
}




+(id)log;
-(BOOL)getBooleanPreference:(id)arg0 defaultValue:(BOOL)arg1 ;
-(NSInteger)getIntegerPreference:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(id)getValueForPreference:(id)arg0 expectedClass:(Class)arg1 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(id)initWithDomain:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initWithDomain:(id)arg0 store:(id)arg1 ;
-(id)initWithDomain:(id)arg0 store:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)_preferenceChangedExternally:(id)arg0 ;
-(void)_preferenceChangedInternally:(id)arg0 ;
-(void)_synchronizePreferences;
-(void)dealloc;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg0 ;
-(void)removePreference:(id)arg0 notificationName:(id)arg1 ;
-(void)setBooleanPreference:(id)arg0 value:(BOOL)arg1 notificationName:(id)arg2 ;
-(void)setIntegerPreference:(id)arg0 value:(NSInteger)arg1 notificationName:(id)arg2 ;
-(void)setValueForPreference:(id)arg0 value:(id)arg1 notificationName:(id)arg2 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg0 ;


@end


#endif