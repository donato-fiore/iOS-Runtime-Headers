// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGACCOUNTSADAPTER_H
#define SGACCOUNTSADAPTER_H

@class NSSet, ACAccountStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SGAccountsAdapter : NSObject {
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)hasCalendarAccount:(id)arg0 ;
-(BOOL)readCachedAccounts;
-(id)init;
-(id)primaryICloudCalendarAccount;
-(id)serverIdentifierForAccount:(id)arg0 ;
-(void)accountsStoreDidChange:(id)arg0 ;
-(void)cancelUpdateTimer;
-(void)dealloc;
-(void)refreshCacheFromAccountsService;
-(void)registerNotificationObserver;
-(void)removeNotificationObserver;
-(void)setCachedAccounts;
-(void)setUpdateTimerWithDelaySeconds:(NSUInteger)arg0 ;


@end


#endif