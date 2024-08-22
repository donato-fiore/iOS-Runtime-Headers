// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTACCOUNTCONTROLLER_H
#define MTACCOUNTCONTROLLER_H

@class MTSingleton, ACAccount, NSMutableSet;
@protocol OS_dispatch_queue;



@interface MTAccountController : MTSingleton {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (retain, nonatomic) ACAccount *_activeAccount; // ivar: __activeAccount
@property (retain, nonatomic) ACAccount *accountOverride; // ivar: _accountOverride
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests; // ivar: _declinedAuthRequests
@property BOOL hasFetchedInitialAccount; // ivar: _hasFetchedInitialAccount
@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests; // ivar: _inFlightAuthRequests


+(BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg0 ;
-(BOOL)activeAccountIsManagedAppleID;
-(BOOL)isPrimaryUserActiveAccount;
-(BOOL)isUserLoggedIn;
-(id)activeAccount;
-(id)activeDsid;
-(id)activeEmail;
-(id)activeFullName;
-(id)activeStorefront;
-(id)init;
-(void)_updateActiveAccount;
-(void)dealloc;
-(void)didChangeStoreAccount:(id)arg0 ;
-(void)fetchActiveAccountWithCompletion:(id)arg0 ;
-(void)setActiveAccount:(id)arg0 ;


@end


#endif