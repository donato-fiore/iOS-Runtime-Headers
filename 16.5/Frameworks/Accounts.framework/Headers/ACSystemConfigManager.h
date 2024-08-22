// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACSYSTEMCONFIGMANAGER_H
#define ACSYSTEMCONFIGMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    *__SCPreferences _preferencesSession;
    int _applySkipCount;
}




+(NSUInteger)_timeoutInterval;
+(id)_livingInstance;
+(id)sharedInstance;
+(void)_scheduleSharedInstanceTeardown;
+(void)_tearDown;
-(*void)_getValueForKey:(id)arg0 ;
-(NSInteger)countOfAccountsWithAccountTypeIdentifier:(id)arg0 ;
-(id)init;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg0 ;
-(void)_createSCPreferencesSession;
-(void)_destroySCPreferencesSession;
-(void)_handleSCPreferencesSessionNotification:(unsigned int)arg0 ;
-(void)_setValue:(*void)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg0 exist:(BOOL)arg1 ;
-(void)setCountOfAccounts:(NSInteger)arg0 withAccountTypeIdentifier:(id)arg1 ;


@end


#endif