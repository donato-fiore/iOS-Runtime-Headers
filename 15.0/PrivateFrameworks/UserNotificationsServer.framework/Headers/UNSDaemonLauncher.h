// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSDAEMONLAUNCHER_H
#define UNSDAEMONLAUNCHER_H

@class NSMutableDictionary, NSString;
@protocol UNUserNotificationCenterDelegateServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_connectionByBundleIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_queue_ensureConnectionForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_queue_interruptedConnectionForBundleIdentifier:(id)arg0 ;
-(void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg0 ;
-(void)didChangeSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didOpenApplicationForResponse:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif