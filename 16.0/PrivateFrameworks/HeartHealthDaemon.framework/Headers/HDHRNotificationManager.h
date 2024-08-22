// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRNOTIFICATIONMANAGER_H
#define HDHRNOTIFICATIONMANAGER_H

@class HDProfile, NSMutableArray, NSString;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fakingNotifyTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_fakeCardioFitnessNotificationWithData:(BOOL)arg0 repeat:(BOOL)arg1 error:(*id)arg2 ;
-(id)_userNotificationCenter;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_fakeNotificationWithEventType:(id)arg0 withData:(BOOL)arg1 ;
-(void)_queue_showNotificationForHeartEvent:(id)arg0 ;
-(void)_subscribeToFakingNotification:(id)arg0 type:(id)arg1 withData:(BOOL)arg2 ;
-(void)_subscribeToFakingNotifications;
-(void)_unsubscribeToFakingNotifications;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif