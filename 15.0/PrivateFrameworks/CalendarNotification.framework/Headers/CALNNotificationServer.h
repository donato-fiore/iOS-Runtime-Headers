// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNOTIFICATIONSERVER_H
#define CALNNOTIFICATIONSERVER_H

@class NSString, NSMutableDictionary, NSArray;
@protocol CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager, CALNAnalyticsHandler, CALNNotificationStorage, CALNUserNotificationCenter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNNotificationServer : NSObject <CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSObject<CALNAnalyticsHandler> *analyticsHandler; // ivar: _analyticsHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProtectedDataAvailable; // ivar: _isProtectedDataAvailable
@property (retain, nonatomic) NSMutableDictionary *notificationSourceMap; // ivar: _notificationSourceMap
@property (readonly, nonatomic) NSArray *notificationSources;
@property (retain, nonatomic) NSObject<CALNNotificationStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNUserNotificationCenter> *userNotificationCenter; // ivar: _userNotificationCenter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_fetchRecordsWithSourceIdentifier:(id)arg0 ;
-(id)_notificationRecordResponseFromNotificationResponse:(id)arg0 ;
-(id)_notificationRecordWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(id)_notificationSourceMapWithNotificationSources:(id)arg0 ;
-(id)fetchRecordsWithSourceIdentifier:(id)arg0 ;
-(id)initWithUserNotificationCenter:(id)arg0 storage:(id)arg1 analyticsHandler:(id)arg2 deviceLockObserver:(id)arg3 ;
-(id)notificationSourceForSourceIdentifier:(id)arg0 ;
-(void)_activate;
-(void)_addRecord:(id)arg0 ;
-(void)_deactivate;
-(void)_didSetNotificationSources:(id)arg0 ;
-(void)_removeRecordWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(void)_updateRecord:(id)arg0 ;
-(void)activate;
-(void)addRecord:(id)arg0 ;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)removeRecordWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(void)updateRecord:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif