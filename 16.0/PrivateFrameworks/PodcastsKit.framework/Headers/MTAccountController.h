// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTACCOUNTCONTROLLER_H
#define MTACCOUNTCONTROLLER_H

@class MTSingleton, ACAccount, NSString, NSMutableSet;
@protocol MTAccountControllerProtocol, OS_dispatch_queue;



@interface MTAccountController : MTSingleton <MTAccountControllerProtocol>

 {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (retain, nonatomic) ACAccount *_activeAccount; // ivar: __activeAccount
@property (retain, nonatomic) ACAccount *accountOverride; // ivar: _accountOverride
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests; // ivar: _declinedAuthRequests
@property (readonly, copy) NSString *description;
@property BOOL hasFetchedInitialAccount; // ivar: _hasFetchedInitialAccount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests; // ivar: _inFlightAuthRequests
@property (readonly) Class superclass;


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
-(id)primaryUser;
-(void)_updateActiveAccount;
-(void)dealloc;
-(void)didChangeStoreAccount:(id)arg0 ;
-(void)fetchActiveAccountWithCompletion:(id)arg0 ;
-(void)setActiveAccount:(id)arg0 ;


@end


#endif