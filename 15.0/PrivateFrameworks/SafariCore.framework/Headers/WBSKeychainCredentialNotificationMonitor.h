// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSKEYCHAINCREDENTIALNOTIFICATIONMONITOR_H
#define WBSKEYCHAINCREDENTIALNOTIFICATIONMONITOR_H

@class NSMutableDictionary, NSDate, NSString;
@protocol WBSKeychainCredentialNotificationMonitor, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_observers;
    int _keychainChangedNotificationToken;
    CGFloat _coalescingInterval;
    NSDate *_lastNotificationTime;
    NSObject<OS_dispatch_source> *_coalescingTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addObserverWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithCoalescingInterval:(CGFloat)arg0 ;
-(void)_cancelCoalescingTimer;
-(void)_notifyKeychainUpdated;
-(void)_notifyObservers;
-(void)dealloc;
-(void)notifyModernKeychainUpdated;
-(void)removeObserverForToken:(id)arg0 ;
-(void)triggerExternalNotification;


@end


#endif