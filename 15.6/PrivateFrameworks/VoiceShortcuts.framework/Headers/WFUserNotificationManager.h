// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUSERNOTIFICATIONMANAGER_H
#define WFUSERNOTIFICATIONMANAGER_H

@class NSMutableSet, NSString, UNUserNotificationCenter, NSMutableDictionary;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate>



@property (retain, nonatomic) NSMutableSet *categories; // ivar: _categories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)categoryIdentifiers;
-(id)init;
-(void)addObserver:(id)arg0 forCategory:(id)arg1 ;
-(void)registerCategoriesIfNecessary:(id)arg0 ;
-(void)removeNotificationsWithIdentifiers:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStaleNotificationsWithCompletion:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif