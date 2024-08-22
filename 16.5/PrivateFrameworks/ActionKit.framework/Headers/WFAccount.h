// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACCOUNT_H
#define WFACCOUNT_H

@class MTLModel, NSString, NSDate;
@protocol NSSecureCoding;



@interface WFAccount : MTLModel <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSDate *updatedAt; // ivar: _updatedAt
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)allowsMultipleAccounts;
+(BOOL)deleteAccount:(id)arg0 ;
+(BOOL)saveAccount:(id)arg0 ;
+(BOOL)shouldIgnoreNotificationForService:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_numberOfAccounts;
+(NSUInteger)numberOfAccounts;
+(id)_accounts;
+(id)accountCache;
+(id)accounts;
+(id)addAccountObserver:(id)arg0 ;
+(id)localizedServiceName;
+(id)migrate:(id)arg0 ;
+(id)pendingIgnoredNotifications;
+(id)serviceID;
// +(void)addAccountObserver:(id)arg0 forService:(unk)arg1  ;
+(void)handleChangeForService:(id)arg0 ;
+(void)notifyAccountsChanged;
+(void)removeAccountObserver:(id)arg0 ;
+(void)setShouldIgnoreNotificationForService:(id)arg0 ;
+(void)useAccountObservers:(id)arg0 ;
-(id)init;
-(void)invalidateWithCompletionHandler:(id)arg0 ;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif