// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLCONTENTPROTECTIONSTATEOBSERVER_H
#define TLCONTENTPROTECTIONSTATEOBSERVER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    NSInteger _contentProtectionStatus;
    NSInteger _unlockedSinceBootStatus;
    int _firstUnlockNotifyToken;
}




+(id)sharedContentProtectionStateObserver;
-(NSInteger)_queryCurrentUnlockedSinceBootStatus;
-(id)_performBlockAfterProtectedContentUnlocked:(id)arg0 ;
-(id)init;
-(id)performBlockAfterProtectedContentUnlocked:(id)arg0 ;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg0 ;
-(void)_cancelFirstUnlockNotifyToken;
-(void)_handleFirstUnlockNotification;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_registerFirstUnlockNotifyToken;
-(void)_updateUnlockedSinceBootStatus;
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg0 ;
-(void)dealloc;


@end


#endif