// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDACCOUNTSYNC_H
#define ACDACCOUNTSYNC_H

@class NSTimer, ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}




+(id)accountSyncPropertiesForAccount:(id)arg0 ;
+(id)accountSyncSupportedTypes;
+(id)accountSyncUnsupportedTypes;
+(id)duchessHostnames;
+(id)sharedAccountSyncServer;
-(BOOL)checkCircleState;
-(BOOL)detectDuchess;
-(BOOL)isDataclassActionRequired:(id)arg0 ;
-(BOOL)isMigrated;
-(BOOL)locallyMigrated;
-(BOOL)migrate;
-(BOOL)supportedType:(id)arg0 ;
-(BOOL)unsupportedType:(id)arg0 ;
-(id)accountPropertiesFromDictionary:(id)arg0 forType:(id)arg1 ;
-(id)getAccountsOfType:(id)arg0 ;
-(id)getiOSVersion;
-(id)init;
-(id)ldapAccounts;
-(id)localAccounts;
-(id)localHostnameAccounts;
-(id)primaryiCloudAccount;
-(id)processAdds;
-(id)processDeletes;
-(id)processHostnameAdds;
-(id)processHostnameDeletes;
-(id)remoteAccounts;
-(id)remoteHostnameAccounts;
-(id)smtpAccounts;
-(void)accountChanges:(id)arg0 ;
-(void)createAccounts:(id)arg0 ;
-(void)createKeychainItems:(id)arg0 ;
-(void)dealloc;
-(void)deleteAccounts:(id)arg0 ;
-(void)devices;
-(void)fixLDAP;
-(void)fixSMTP;
-(void)kvsChanges:(id)arg0 ;
-(void)markMigrated;
-(void)postNotificationFor:(id)arg0 ;
-(void)queueSync;
-(void)registerForNotifications;
-(void)scheduleSync;
-(void)setiOSVersion;
-(void)setupAccountSync;
-(void)sync;
-(void)waitForBuddy;


@end


#endif