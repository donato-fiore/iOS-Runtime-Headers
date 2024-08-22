// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOCALKEYCHAINANALYTICS_H
#define LOCALKEYCHAINANALYTICS_H

@class NSMutableArray, NSDate;
@protocol OS_dispatch_queue;


#import "SFAnalytics.h"

@interface LocalKeychainAnalytics : SFAnalytics {
    BOOL _probablyInClassD;
    NSMutableArray *_pendingReports;
    NSObject<OS_dispatch_queue> *_queue;
    int _notificationToken;
    NSDate *_backupStartTime;
    int _backupType;
}




+(id)databasePath;
-(BOOL)canPersistMetrics;
-(id)init;
-(void)processPendingMessages;
-(void)reportKeychainBackupEnd:(BOOL)arg0 error:(id)arg1 ;
-(void)reportKeychainBackupStartWithType:(int)arg0 ;
-(void)reportKeychainUpgradeFrom:(int)arg0 to:(int)arg1 outcome:(int)arg2 error:(id)arg3 ;
-(void)reportKeychainUpgradeOutcome:(int)arg0 attributes:(id)arg1 ;


@end


#endif