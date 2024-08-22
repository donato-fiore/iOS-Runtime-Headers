// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNUSERNOTIFICATIONCENTERDELEGATECONNECTIONLISTENER_H
#define UNUSERNOTIFICATIONCENTERDELEGATECONNECTIONLISTENER_H

@class NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNUserNotificationCenterDelegateConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol>

 {
    NSMutableDictionary *_listenerByBundleIdentifier;
    NSMutableDictionary *_delegateByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_queue_didChangeSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didOpenApplicationForResponse:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveNotificationResponse:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_queue_ensureListenerForBundleIdentifier:(id)arg0 ;
-(void)_queue_invalidateListenerForBundleIdentifier:(id)arg0 ;
-(void)_queue_setDelegate:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didChangeSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didOpenApplicationForResponse:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setDelegate:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif