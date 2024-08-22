// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKASYSTEMMONITOR_H
#define SKASYSTEMMONITOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SKASystemMonitor : NSObject

@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;
@property (nonatomic) os_unfair_lock_s ivarLock; // ivar: _ivarLock
@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (nonatomic) BOOL underFirstLock; // ivar: _underFirstLock


+(id)logger;
+(id)sharedInstance;
-(BOOL)_deviceStillUnderFirstLock;
-(id)init;
-(void)_deliverNotificationSelectorToListeners:(SEL)arg0 ;
-(void)_listenForKeyBagChangeNotifications;
-(void)_updateLockState;
-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;


@end


#endif