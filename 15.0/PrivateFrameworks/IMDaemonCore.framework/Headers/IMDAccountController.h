// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDACCOUNTCONTROLLER_H
#define IMDACCOUNTCONTROLLER_H

@class NSMutableDictionary, NSSet, NSArray, NSString, NSDictionary;
@protocol IDSAccountDelegate;

#import <Foundation/Foundation.h>


@interface IMDAccountController : NSObject <IDSAccountDelegate>

 {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    BOOL _isFirstLoad;
}


@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLoading; // ivar: _isLoading
@property (readonly, nonatomic) NSDictionary *loadOldStatusStore;
@property (nonatomic) BOOL networkDataAvailable; // ivar: _networkDataAvailable
@property (readonly) Class superclass;


+(id)sharedAccountController;
+(id)sharedInstance;
-(BOOL)_isAccountActive:(id)arg0 forService:(id)arg1 ;
-(BOOL)_isOperationalForAccount:(id)arg0 ;
-(BOOL)hasActivePhoneAccount;
-(BOOL)isAccountActive:(id)arg0 ;
-(BOOL)receiverIsCandidateForHawking:(id)arg0 ;
-(id)_nicknameController;
-(id)_operationalAccounts;
-(id)_superFormatFromAIML:(id)arg0 ;
-(id)accountForAccountID:(id)arg0 ;
-(id)accountForHandle:(id)arg0 ;
-(id)accountForIDSAccountUniqueID:(id)arg0 ;
-(id)accountsForLoginID:(id)arg0 onService:(id)arg1 ;
-(id)accountsForService:(id)arg0 ;
-(id)activeAccountsForService:(id)arg0 ;
-(id)activeAliases;
-(id)anySessionForServiceName:(id)arg0 ;
-(id)connectedAccountsForService:(id)arg0 ;
-(id)connectingAccountsForService:(id)arg0 ;
-(id)init;
-(id)sessionForAccount:(id)arg0 ;
-(void)_checkPowerAssertion;
-(void)_daemonWillShutdown:(id)arg0 ;
-(void)_rebuildOperationalAccountsCache;
-(void)account:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)activateAccount:(id)arg0 ;
-(void)activateAccounts:(id)arg0 ;
-(void)addAccount:(id)arg0 ;
-(void)deactivateAccount:(id)arg0 ;
-(void)deactivateAccount:(id)arg0 force:(BOOL)arg1 ;
-(void)deactivateAccounts:(id)arg0 ;
-(void)deactivateAccounts:(id)arg0 force:(BOOL)arg1 ;
-(void)dealloc;
-(void)deferredSave;
-(void)load;
-(void)removeAccount:(id)arg0 ;
-(void)save;
-(void)setupAccount:(id)arg0 ;


@end


#endif