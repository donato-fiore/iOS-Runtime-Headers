// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIUPOMANAGER_H
#define POWERUIUPOMANAGER_H

@class NSBundle, NSUserDefaults, NSDate, UNUserNotificationCenter;
@protocol _CDContext, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUIUPOManager : NSObject

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) NSObject<_CDContext> *contextStore; // ivar: _contextStore
@property (nonatomic) BOOL dataProviderLoaded; // ivar: _dataProviderLoaded
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) NSDate *lastTimeLocked; // ivar: _lastTimeLocked
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockNotificationQueue; // ivar: _lockNotificationQueue
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) int mitigationsDisabledToken; // ivar: _mitigationsDisabledToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationResponseQueue; // ivar: _notificationResponseQueue
@property (nonatomic) int unlockToken; // ivar: _unlockToken
@property (retain) NSDate *upoTime; // ivar: _upoTime
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


+(id)sharedInstance;
-(id)init;
-(id)mitigationsEnabledNotificationRequest;
-(id)sortDescriptors;
-(void)clearMitigationsEnabledNotificationRequestIfNecessary;
-(void)dataProviderDidLoad;
-(void)displayBatteryServiceNotification;
-(void)displayMitigationsEnabledNotification;
-(void)registerForWithdrawalNotifications;
-(void)removeMitigationsEnabledNotification;
-(void)requestBulletin;


@end


#endif