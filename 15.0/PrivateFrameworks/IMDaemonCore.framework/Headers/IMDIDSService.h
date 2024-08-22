// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDIDSSERVICE_H
#define IMDIDSSERVICE_H

@class IDSAccountController, NSArray, NSString;
@protocol IDSAccountControllerDelegate, IDSAccountRegistrationDelegate;


#import "IMDService.h"
#import "IMDIDSService.h"

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate>

 {
    IDSAccountController *_accountController;
    BOOL _activatingAccount;
    BOOL _deactivatingAccount;
}


@property (readonly, retain, nonatomic) NSArray *accountsLoadedFromIdentityServices;
@property (readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSubService;
@property (nonatomic) IMDIDSService *mainService; // ivar: _mainService
@property (retain, nonatomic) IMDIDSService *subService; // ivar: _subService
@property (retain, nonatomic) NSString *subServiceName; // ivar: _subServiceName
@property (readonly) Class superclass;


-(Class)accountClass;
-(id)_serviceDomain;
-(id)accountFromIDSAccountWithUniqueID:(id)arg0 ;
-(id)imdAccountLoginFromIDSAccountWithType:(int)arg0 login:(id)arg1 ;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithBundle:(id)arg0 isMainService:(BOOL)arg1 ;
-(id)initWithBundle:(id)arg0 subServiceName:(id)arg1 ;
-(id)mockAccountController;
-(id)newAccountWithAccountDefaults:(id)arg0 accountID:(id)arg1 ;
-(void)_loadIDSAccountController;
-(void)account:(id)arg0 aliasesChanged:(id)arg1 ;
-(void)account:(id)arg0 displayNameChanged:(id)arg1 ;
-(void)account:(id)arg0 loginChanged:(id)arg1 ;
-(void)account:(id)arg0 profileChanged:(id)arg1 ;
-(void)account:(id)arg0 registrationStatusInfoChanged:(id)arg1 ;
-(void)account:(id)arg0 vettedAliasesChanged:(id)arg1 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountController:(id)arg0 accountAdded:(id)arg1 ;
-(void)accountController:(id)arg0 accountDisabled:(id)arg1 ;
-(void)accountController:(id)arg0 accountEnabled:(id)arg1 ;
-(void)accountController:(id)arg0 accountRemoved:(id)arg1 ;
-(void)accountController:(id)arg0 accountUpdated:(id)arg1 ;
-(void)accountRemoved:(id)arg0 ;
-(void)dealloc;
-(void)disableAccount:(id)arg0 ;
-(void)enableAccount:(id)arg0 ;
-(void)refreshRegistrationForAccount:(id)arg0 ;
-(void)registrationFailedForAccount:(id)arg0 needsDeletion:(id)arg1 ;
-(void)setMockAccountController:(id)arg0 ;


@end


#endif