// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCALLSTATUSMONITOR_H
#define CAMCALLSTATUSMONITOR_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMCallStatusMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue; // ivar: __avscAccessQueue
@property (readonly, nonatomic) NSMutableSet *_disabledReasons; // ivar: __disabledReasons
@property (nonatomic, getter=isCallActive) BOOL callActive; // ivar: _callActive


-(id)_descriptionForReasons:(id)arg0 ;
-(id)_descriptionStringForReason:(NSInteger)arg0 ;
-(id)init;
-(id)initDisabledForLaunch;
-(id)initWithInitialDisabledReasons:(id)arg0 ;
-(int)_processIdentifer;
-(void)_accessQueue_queryCallActiveStatusForReason:(id)arg0 ;
-(void)_accessQueue_subscribeToAVSystemControllerNotificationsWithCompletion:(id)arg0 ;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_handleCallIsActiveDidChangeNotification:(id)arg0 ;
-(void)_handleRecordingStateDidChangeNotification:(id)arg0 ;
-(void)_handleServerConnectionDiedNotification:(id)arg0 ;
-(void)_registerForAVSystemControllerNotificationsAndQueryState;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)addDisabledReason:(NSInteger)arg0 ;
-(void)dealloc;
-(void)removeDisabledReason:(NSInteger)arg0 ;


@end


#endif