// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSIGNINCONTROLLER_H
#define IDSSIGNINCONTROLLER_H

@class IDSCTAdapter, NSMutableDictionary, NSString, NSMapTable;
@protocol IDSAccountRegistrationDelegate, IDSAccountControllerDelegate, _IDSPasswordManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSSignInController : NSObject <IDSAccountRegistrationDelegate, IDSAccountControllerDelegate>



@property (retain, nonatomic) IDSCTAdapter *CTAdapter; // ivar: _CTAdapter
@property (retain, nonatomic) NSMutableDictionary *accountIDDescriptionMap; // ivar: _accountIDDescriptionMap
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *delegateByServiceType; // ivar: _delegateByServiceType
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *initialStateByService; // ivar: _initialStateByService
@property (retain, nonatomic) NSString *listenerGUID; // ivar: _listenerGUID
@property (retain, nonatomic) NSObject<_IDSPasswordManager> *passwordManager; // ivar: _passwordManager
@property (retain, nonatomic) NSMutableDictionary *serviceNameAccountControllerMap; // ivar: _serviceNameAccountControllerMap
@property (nonatomic) CGFloat signInFuzz; // ivar: _signInFuzz
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // ivar: _signInQueue
@property (nonatomic) CGFloat signInTimeout; // ivar: _signInTimeout
@property (readonly) Class superclass;


-(BOOL)_actionOnAccountOfType:(NSUInteger)arg0 onService:(NSUInteger)arg1 actionBlock:(id)arg2 ;
-(BOOL)_isServiceCurrentlyEnabled:(id)arg0 ;
-(BOOL)isFaceTimeEnabled;
-(BOOL)isiMessageEnabled;
-(NSUInteger)_serviceTypeForName:(id)arg0 ;
-(NSUInteger)_statusOfAccount:(id)arg0 ;
-(id)_accountControllerForName:(id)arg0 ;
-(id)_accountWithUniqueID:(id)arg0 ;
-(id)_createAccountControllerForService:(id)arg0 ;
-(id)_createAccountWithDictionary:(id)arg0 accountID:(id)arg1 serviceName:(id)arg2 ;
-(id)_serviceNameForType:(NSUInteger)arg0 ;
-(id)_statusOfUsersOnService:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPasswordManager:(id)arg0 CTAdapter:(id)arg1 signInTimeout:(CGFloat)arg2 signInFuzz:(CGFloat)arg3 queue:(id)arg4 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_cleanupStateForAccountID:(id)arg0 ;
-(void)_initializeStateMachineForAccountID:(id)arg0 service:(id)arg1 state:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_scheduleValidationAfter:(CGFloat)arg0 forAccountID:(id)arg1 allowFuzz:(BOOL)arg2 signOut:(BOOL)arg3 ;
-(void)_validateDelegateState;
-(void)_validateStateForAccountID:(id)arg0 timeoutMode:(NSUInteger)arg1 ;
-(void)accountController:(id)arg0 accountAdded:(id)arg1 ;
-(void)accountController:(id)arg0 accountDisabled:(id)arg1 ;
-(void)accountController:(id)arg0 accountRemoved:(id)arg1 ;
-(void)accountController:(id)arg0 accountUpdated:(id)arg1 ;
-(void)dealloc;
-(void)disableUserType:(NSUInteger)arg0 onService:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)enableUserType:(NSUInteger)arg0 onService:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)provideCredential:(id)arg0 forUser:(id)arg1 onService:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)refreshRegistrationForAccount:(id)arg0 ;
-(void)removeDelegateForService:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 forService:(NSUInteger)arg1 ;
-(void)signInUsername:(id)arg0 onService:(NSUInteger)arg1 waitUntilRegistered:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)signInUsername:(id)arg0 withProvidedCredential:(id)arg1 onService:(NSUInteger)arg2 waitUntilRegistered:(BOOL)arg3 completion:(id)arg4 ;
-(void)signOutService:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)statusOfUsersOnService:(NSUInteger)arg0 withCompletion:(id)arg1 ;


@end


#endif