// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAPPLEACCOUNT_H
#define FCAPPLEACCOUNT_H

@class ACAccountStore, ACAccount, NSString, NFPromise, NSHashTable, NSArray;
@protocol FCAppleAccount;

#import <Foundation/Foundation.h>


@interface FCAppleAccount : NSObject <FCAppleAccount>

 {
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_overrideContentStoreFrontID;
    NFPromise *_base64GSTokenPromise;
    NSHashTable *_observers;
}


@property (copy, nonatomic) NSString *DSID; // ivar: _DSID
@property (readonly, nonatomic) ACAccount *activeiTunesAccount;
@property (readonly, nonatomic) NSArray *allEmailAddresses;
@property (readonly, nonatomic) NSString *appStoreEmailAddress;
@property (copy, nonatomic) NSString *contentStoreFrontID; // ivar: _contentStoreFrontID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *endpointConnectionClientID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentStoreFrontSupported;
@property (readonly, nonatomic) BOOL isSignedInStoreFrontSupported;
@property (readonly, nonatomic) NSString *primaryEmailAddress;
@property (readonly, nonatomic) NSString *primaryLanguageCode;
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property (getter=isRunningPPT) BOOL runningPPT; // ivar: _runningPPT
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger supportedContentLanguage;
@property (readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, nonatomic, getter=isUserSignedInToiCloud) BOOL userSignedInToiCloud;
@property (copy, nonatomic) NSString *userStoreFrontID; // ivar: _userStoreFrontID


+(id)sharedAccount;
+(void)enableStoreFrontLocking;
-(BOOL)isPrimaryAccountEmailAddress;
-(BOOL)isUserSignedIntoiTunes;
-(id)currentStoreFrontID;
-(id)getGSToken;
-(id)iTunesAccountName;
-(id)init;
-(void)_accountStoreDidChange;
-(void)_reloadAccountsFromAccountStore;
-(void)addObserver:(id)arg0 ;
-(void)checkAllDevicesRunningMinimumiOSVersion:(struct ? )arg0 macOSVersion:(struct ? )arg1 orInactiveForTimeInterval:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(struct ? )arg0 orInactiveForTimeInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)getGSTokenWithCompletionHandler:(id)arg0 ;
-(void)invalidateGSTokenCache;
-(void)loadStoreFrontWithCompletionHandler:(id)arg0 ;
-(void)reloadiTunesAccount;
-(void)removeObserver:(id)arg0 ;
-(void)t_startOverridingContentStoreFrontID:(id)arg0 ;
-(void)t_stopOverridingContentStoreFrontID;


@end


#endif