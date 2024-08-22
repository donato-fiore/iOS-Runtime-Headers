// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTREGACCOUNTSERVICEDELEGATE_H
#define FTREGACCOUNTSERVICEDELEGATE_H

@class IDSAccountController, NSString, NSDictionary;
@protocol AASetupAssistantDelegateService, AAAppleIDLoginPlugin;

#import <Foundation/Foundation.h>

#import "CNFRegController.h"

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin>



@property (retain, nonatomic) IDSAccountController *accountController; // ivar: _accountController
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNFRegController *regController; // ivar: _regController
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;


-(BOOL)_account:(id)arg0 matchesSetupParameters:(id)arg1 ;
-(BOOL)_hasAccount;
-(BOOL)_hasOperationalAccount;
-(BOOL)_shouldSkipAccountSetup:(id)arg0 ;
-(BOOL)serviceIsAvailable;
-(NSInteger)serviceType;
-(id)_defaultSetupRequestParameters;
-(id)_existingAccountForSetupParameters:(id)arg0 ;
-(id)_existingOperationalAccount;
-(id)_logName;
-(id)accountSetupRequestParameters;
-(id)delegateServiceIdentifier;
-(id)displayName;
-(id)init;
-(id)initWithRegController:(id)arg0 ;
-(id)name;
-(id)parametersForIdentityEstablishmentRequest;
-(id)parametersForLoginRequest;
-(id)serviceIdentifier;
-(void)_cleanup;
-(void)_handleFailureWithErrorCode:(NSInteger)arg0 ;
-(void)_handleSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)completeSetupWithResponseParameters:(id)arg0 handler:(id)arg1 ;
-(void)handleLoginResponse:(id)arg0 completion:(id)arg1 ;
-(void)setupOperationFailed;


@end


#endif