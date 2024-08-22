// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCDISTRIBUTEDNOTIFICATIONCENTER_H
#define WCDISTRIBUTEDNOTIFICATIONCENTER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface WCDistributedNotificationCenter : NSObject

@property (readonly, nonatomic) os_unfair_lock_s dataSynchronizationLock; // ivar: _dataSynchronizationLock
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)defaultCenter;
-(id)init;
-(void)_notifyObserversOfPreferencesChange;
-(void)addObserver:(id)arg0 ;
-(void)postWeatherLocationAuthorizationDidUpdateNotification;
-(void)postWeatherSavedLocationsDidUpdateNotification;
-(void)removeObserver:(id)arg0 ;
-(void)weatherPrefsDidGetUpdated:(id)arg0 ;


@end


#endif