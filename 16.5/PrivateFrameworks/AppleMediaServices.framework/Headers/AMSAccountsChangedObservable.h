// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSACCOUNTSCHANGEDOBSERVABLE_H
#define AMSACCOUNTSCHANGEDOBSERVABLE_H

@class ACAccount, NSString;

#import <Foundation/Foundation.h>

#import "AMSObservable.h"

@interface AMSAccountsChangedObservable : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSString *accountTypeIdentifier; // ivar: _accountTypeIdentifier
@property (readonly, nonatomic) os_unfair_lock_s notificationsLock; // ivar: _notificationsLock
@property (retain, nonatomic) AMSObservable *observable; // ivar: _observable


+(id)createdObservables;
+(id)createdObservablesAccessQueue;
+(id)sharedInstance;
+(id)sharedLocalAccountInstance;
+(void)_processChangedAccount:(id)arg0 ;
-(BOOL)_shouldNotifyObserversForChangedAccount:(id)arg0 ;
-(id)_initWithAccount:(id)arg0 accountTypeIdentifier:(id)arg1 ;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccountTypeIdentifier:(id)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_processChangedAccount:(id)arg0 ;
-(void)dealloc;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribe:(id)arg0 ;


@end


#endif