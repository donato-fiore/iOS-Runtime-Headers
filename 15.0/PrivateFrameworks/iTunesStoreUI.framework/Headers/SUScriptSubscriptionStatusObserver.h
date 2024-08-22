// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTSUBSCRIPTIONSTATUSOBSERVER_H
#define SUSCRIPTSUBSCRIPTIONSTATUSOBSERVER_H

@class ICMusicSubscriptionStatusMonitor;
@protocol OS_dispatch_queue, NSCopying;

#import <Foundation/Foundation.h>

#import "SUScriptSubscriptionStatusResponse.h"

@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SUScriptSubscriptionStatusResponse *_lastKnownSubscriptionStatusResponse;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> *_subscriptionStatusMonitorObservationToken;
}




+(id)sharedObserver;
-(id)init;
-(void)_updateWithSubscriptionStatus:(id)arg0 ;
-(void)dealloc;


@end


#endif