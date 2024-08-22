// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFEATURESETTINGSMANAGER_H
#define HDFEATURESETTINGSMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDFeatureSettingsManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}




-(BOOL)removeFeatureSettingsValueForKey:(id)arg0 featureIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetFeatureSettingsForFeatureIdentifier:(id)arg0 suppressNotificationsToObserver:(id)arg1 error:(*id)arg2 ;
-(BOOL)setFeatureSettingsData:(id)arg0 forKey:(id)arg1 featureIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setFeatureSettingsNumber:(id)arg0 forKey:(id)arg1 featureIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setFeatureSettingsString:(id)arg0 forKey:(id)arg1 featureIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setFeatureSettingsValues:(id)arg0 featureIdentifier:(id)arg1 suppressNotificationsToObserver:(id)arg2 error:(*id)arg3 ;
-(id)featureSettingsForFeatureIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_settingsDidSyncNotification:(id)arg0 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 featureIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 featureIdentifier:(id)arg1 ;


@end


#endif