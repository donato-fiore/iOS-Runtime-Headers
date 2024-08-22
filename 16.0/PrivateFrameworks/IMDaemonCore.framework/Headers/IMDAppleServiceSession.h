// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDAPPLESERVICESESSION_H
#define IMDAPPLESERVICESESSION_H

@class NSString, NSArray, IDSAccount;


#import "IMDServiceSession.h"

@interface IMDAppleServiceSession : IMDServiceSession {
    NSString *_serviceName;
}


@property (readonly, retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (readonly, retain, nonatomic) NSArray *aliases;
@property (readonly, retain, nonatomic) NSString *callerURI;
@property (readonly, retain, nonatomic) IDSAccount *idsAccount;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, retain, nonatomic) NSArray *vettedAliases;


-(BOOL)_isDeviceRegistered;
-(BOOL)_isDeviceRegisteredForAccount:(id)arg0 ;
-(NSInteger)_validationStatusForAlias:(id)arg0 onAccount:(id)arg1 ;
-(NSInteger)validationStatusForAlias:(id)arg0 ;
-(NSInteger)validationStatusForAlias:(id)arg0 onAccount:(id)arg1 ;
-(id)_aliasStringsForIDSAccount:(id)arg0 ;
-(id)_aliasesForIDSAccount:(id)arg0 ;
-(id)callerURIForIDSAccount:(id)arg0 ;
-(id)idsAccountForFromURI:(id)arg0 toURI:(id)arg1 ;
-(id)idsAccountForURI:(id)arg0 IDSServiceName:(id)arg1 ;
-(id)imdAccountForIDSAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 service:(id)arg1 ;
-(void)_updateAccountStatusToUnregistered:(BOOL)arg0 withAccount:(id)arg1 ;
-(void)activeDevicesUpdated;
-(void)addAliases:(id)arg0 account:(id)arg1 ;
-(void)authenticateAccount:(id)arg0 ;
-(void)dealloc;
-(void)loginServiceSessionWithAccount:(id)arg0 ;
-(void)logoutServiceSessionWithAccount:(id)arg0 ;
-(void)passwordUpdatedWithAccount:(id)arg0 ;
-(void)reIdentify;
-(void)refreshRegistration;
-(void)registerAccount:(id)arg0 ;
-(void)removeAliases:(id)arg0 account:(id)arg1 ;
-(void)reregister;
-(void)resetCallerIDForIDSAccount:(id)arg0 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg0 ;
-(void)unregisterAccount:(id)arg0 ;
-(void)unvalidateAliases:(id)arg0 account:(id)arg1 ;
-(void)updateAuthorizationCredentials:(id)arg0 token:(id)arg1 account:(id)arg2 ;
-(void)validateAliases:(id)arg0 account:(id)arg1 ;
-(void)validateProfileWithAccount:(id)arg0 ;


@end


#endif