// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNINBOXNOTIFICATIONMONITOR_H
#define CALNINBOXNOTIFICATIONMONITOR_H

@class NSString, NSArray, _EKNotificationMonitor;
@protocol CADModule, CALNInboxNotificationProvider;

#import <Foundation/Foundation.h>


@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger eventNotificationCount;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor; // ivar: _notificationMonitor
@property (readonly) Class superclass;


-(id)initWithEventStoreProvider:(id)arg0 ;
-(void)activate;
-(void)addNotificationCountChangedObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)addNotificationsChangedObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)addNotificationsLoadedObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)removeNotificationCountChangedObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)removeNotificationsChangedObserver:(id)arg0 ;
-(void)removeNotificationsLoadedObserver:(id)arg0 selector:(SEL)arg1 ;


@end


#endif