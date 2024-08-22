// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDNOTIFICATIONMANAGER_H
#define HDNOTIFICATIONMANAGER_H

@class UNUserNotificationCenter, NSHashTable, NSDate, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDNotificationManager : NSObject <HDDiagnosticObject>

 {
    HDProfile *_profile;
    NSInteger _bundle;
    UNUserNotificationCenter *_userNotificationCenter;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSDate *_lastNotificationDate;
}


@property (readonly, nonatomic) BOOL areHealthNotificationsAuthorized;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)incrementBadgeForDomain:(NSInteger)arg0 count:(NSInteger)arg1 error:(*id)arg2 ;
-(id)_aggregateBadge;
-(id)_badgeForDomain:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_resourceQueue_badgeForDomain:(NSInteger)arg0 error:(*id)arg1 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 bundle:(NSInteger)arg1 ;
-(void)addNotificationObserver:(id)arg0 ;
-(void)badgeForDomain:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)postCompanionUserNotificationOfType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)postNotificationWithIdentifier:(id)arg0 content:(id)arg1 trigger:(id)arg2 completion:(id)arg3 ;
-(void)postNotificationWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)postNotificationWithTitle:(id)arg0 body:(id)arg1 categoryIdentifier:(id)arg2 subtitle:(id)arg3 domain:(NSInteger)arg4 accessoryImageName:(id)arg5 header:(id)arg6 completion:(id)arg7 ;
-(void)postNotificationWithTitle:(id)arg0 body:(id)arg1 categoryIdentifier:(id)arg2 subtitle:(id)arg3 domain:(NSInteger)arg4 url:(id)arg5 accessoryImageName:(id)arg6 header:(id)arg7 completion:(id)arg8 ;
-(void)receivedCompanionUserNotificationRequest:(id)arg0 completion:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg0 ;
-(void)removeNotificationObserver:(id)arg0 ;
-(void)setBadge:(id)arg0 forDomain:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif