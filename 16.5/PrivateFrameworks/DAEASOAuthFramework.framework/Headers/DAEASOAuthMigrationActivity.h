// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAEASOAUTHMIGRATIONACTIVITY_H
#define DAEASOAUTHMIGRATIONACTIVITY_H

@class NSBackgroundActivityScheduler;

#import <Foundation/Foundation.h>


@interface DAEASOAuthMigrationActivity : NSObject

@property (retain, nonatomic) NSBackgroundActivityScheduler *scheduler; // ivar: _scheduler


+(BOOL)profileMigrationDisabled;
+(BOOL)profileMigrationEnabled;
-(BOOL)_isExchangeBasicAccount:(id)arg0 ;
-(NSUInteger)_migrateExchangeAccountToOAuthDecision:(id)arg0 disallowedDomains:(id)arg1 disallowedHosts:(id)arg2 ;
-(id)_migrationDecisionString:(NSUInteger)arg0 ;
-(id)_serverMigrationStatus;
-(id)_triggerAccountMigration:(SEL)arg0 ;
-(void)_retrieveMigrationStatusFromConfigurationURI:(id)arg0 withCompletion:(id)arg1 ;
-(void)_sendAnalyticsForMigratingAccount:(id)arg0 withStatus:(id)arg1 ;
-(void)invalidateActivity;
-(void)scheduleActivity;


@end


#endif