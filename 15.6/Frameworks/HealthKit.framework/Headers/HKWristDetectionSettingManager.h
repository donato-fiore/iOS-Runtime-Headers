// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKWRISTDETECTIONSETTINGMANAGER_H
#define HKWRISTDETECTIONSETTINGMANAGER_H

@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "HKObserverSet.h"

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}


@property (retain, nonatomic) id *pairedDeviceRegistry; // ivar: _pairedDeviceRegistry
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;


-(id)_activeWatchNotifications;
-(id)init;
-(id)initWithPairedDeviceRegistry:(id)arg0 ;
-(void)_pairedOrActiveDevicesDidChange:(id)arg0 ;
-(void)_queue_notifyObservers;
-(void)_queue_settingDidChange;
-(void)_startObserving;
-(void)_stopObserving;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif