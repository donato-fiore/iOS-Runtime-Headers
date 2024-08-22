// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTRENDSNOTIFICATIONMANAGER_H
#define CHTRENDSNOTIFICATIONMANAGER_H

@class NSString, HDKeyValueDomain, HDProfile, HDActivitySummaryBuilder, UNUserNotificationCenter;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver;

#import <Foundation/Foundation.h>


@interface CHTrendsNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder; // ivar: _summaryBuilder
@property (readonly) Class superclass;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


-(NSInteger)notificationDelayNumberOfMinutes;
-(id)initWithProfile:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)notificationDidSendSuccessfully;
-(void)protectedDataBecameAvailable;
-(void)sendNotificationIfAllowed;
-(void)sendNotificationWithCompletion:(id)arg0 ;


@end


#endif