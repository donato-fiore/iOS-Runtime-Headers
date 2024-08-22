// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRULOCKSCREENMONITOR_H
#define MRULOCKSCREENMONITOR_H

@class NSArray, NSHashTable;

#import <Foundation/Foundation.h>


@interface MRULockScreenMonitor : NSObject

@property (readonly, nonatomic, getter=isDeviceLocked) BOOL deviceLocked; // ivar: _deviceLocked
@property (nonatomic) int mobileKeyBagLockStatusNotifyToken; // ivar: _mobileKeyBagLockStatusNotifyToken
@property (readonly, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSHashTable *weakObservers; // ivar: _weakObservers


+(id)sharedMonitor;
-(id)_init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)updateDeviceLocked;


@end


#endif