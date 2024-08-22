// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWATCHAPPINSTALLATIONMANAGER_H
#define HKWATCHAPPINSTALLATIONMANAGER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKObserverSet.h"

@interface HKWatchAppInstallationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)isWatchAppInstalledWithError:(*id)arg0 ;
-(void)_queue_notifyObservers;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif