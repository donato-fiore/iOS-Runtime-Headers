// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAPPSTORESERVICE_H
#define ASDAPPSTORESERVICE_H

@class NSDictionary, NSString;
@protocol ASDServiceProvider, OS_dispatch_queue, ASDAppStoreChangedObserver;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDAppStoreService : NSObject <ASDServiceProvider>

 {
    int _badgesChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSDictionary *_badges;
    id<ASDAppStoreChangedObserver> *_observer;
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<ASDAppStoreChangedObserver> *observer;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(id)init;
-(void)addBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)allBadgeIDsWithReplyHandler:(id)arg0 ;
-(void)allBadgeMetricsWithReplyHandler:(id)arg0 ;
-(void)badgeCountWithReplyHandler:(id)arg0 ;
-(void)launchAppStoreWithURL:(id)arg0 withReplyHandler:(id)arg1 ;
-(void)reloadWidgetOnConnectivityToEndpoint:(id)arg0 parameters:(id)arg1 replyHandler:(id)arg2 ;
-(void)removeAllBadgeIDsWithReplyHandler:(id)arg0 ;
-(void)removeBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)removeMetricsForBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif