// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDAEMONALERT_H
#define ICQDAEMONALERT_H

@class NSLock;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICQDaemonOffer.h"

@interface ICQDaemonAlert : NSObject {
    NSLock *_alertLock;
    NSInteger _alertState;
    *__CFUserNotification _cfAlert;
    NSObject<OS_dispatch_semaphore> *_alertSema;
    NSObject<OS_dispatch_queue> *_alertQueue;
}


@property (readonly, nonatomic) ICQDaemonOffer *daemonOffer; // ivar: _daemonOffer
@property (nonatomic) BOOL handleActionsBeforeCallingCompletionHandler; // ivar: _handleActionsBeforeCallingCompletionHandler
@property (nonatomic) BOOL showOnlyInSpringboard; // ivar: _showOnlyInSpringboard


+(BOOL)shouldShowForDaemonOffer:(id)arg0 ;
+(void)dismissAlertsWithNotificationID:(id)arg0 ;
-(BOOL)showAlertWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithDaemonOffer:(id)arg0 ;
-(void)_handleLink:(id)arg0 ;
-(void)dealloc;
-(void)dismissAlert;


@end


#endif