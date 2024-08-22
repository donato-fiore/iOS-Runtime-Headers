// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSYSTEMMONITOR_H
#define GEOSYSTEMMONITOR_H

@class geo_isolater;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOObserverHashTable.h"

@interface GEOSystemMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    geo_isolater *_isolater;
    GEOObserverHashTable *_systemSleepObservers;
    *IONotificationPort _notifyPortRef;
    unsigned int _notifier;
}




+(id)sharedInstance;
-(BOOL)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)arg0 isDisabledGlobally:(*BOOL)arg1 ;
-(id)init;
-(void)addSystemSleepObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeSystemSleepObserver:(id)arg0 ;


@end


#endif