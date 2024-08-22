// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSUBSCRIPTIONSTORE_H
#define WLKSUBSCRIPTIONSTORE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLKSubscriptionData.h"

@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}




+(id)sharedInstance;
-(BOOL)_isSubscriptionSyncInProgress;
-(id)_connection;
-(id)cachedSubscriptionData;
-(id)init;
-(void)_setIsSubscriptionSyncInProgress:(BOOL)arg0 ;
-(void)dealloc;
-(void)fetchSubscriptionData:(BOOL)arg0 completion:(id)arg1 ;
-(void)refreshSubscriptionDataIfNeeded;


@end


#endif