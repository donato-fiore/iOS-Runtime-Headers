// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSERVERCHANGEPUBLISHER_H
#define PLSERVERCHANGEPUBLISHER_H

@class NSString;
@protocol PLChangePublisher;

#import <Foundation/Foundation.h>


@interface PLServerChangePublisher : NSObject <PLChangePublisher>

 {
    uint8_t _postCount;
    uint8_t _hasPendingWatchNotification;
    uint8_t _suppressWatchNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)publishChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 transaction:(id)arg2 ;
-(void)_postChangeHubNotification;
-(void)_postWatchUpdateNotification;
-(void)_postWatchUpdateNotificationIfNotPaused;
-(void)_postWatchUpdateNotificationIfPending;
-(void)dealloc;
-(void)distributeChangeEvent:(id)arg0 transaction:(id)arg1 ;
-(void)pauseLaunchEventNotifications;
-(void)unpauseLaunchEventNotifications;


@end


#endif