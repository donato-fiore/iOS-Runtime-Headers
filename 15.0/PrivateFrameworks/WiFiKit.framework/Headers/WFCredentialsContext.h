// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCREDENTIALSCONTEXT_H
#define WFCREDENTIALSCONTEXT_H

@class NSArray, NSString, SFPasswordSharingService, UIViewController<WFNetworkView>;
@protocol SFPasswordSharingServiceDelegate, WFCredentialsProviderContext, WFContextPresenting;

#import <Foundation/Foundation.h>

#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFCredentialsContext : NSObject <SFPasswordSharingServiceDelegate, WFCredentialsProviderContext, WFContextPresenting>



@property (nonatomic) NSInteger availableAuthTraits; // ivar: _availableAuthTraits
@property (retain, nonatomic) NSArray *availableTLSIdentities; // ivar: _availableTLSIdentities
@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnterprise) BOOL enterprise; // ivar: _enterprise
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDismissal;
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) SFPasswordSharingService *passwordSharingService; // ivar: _passwordSharingService
@property (nonatomic, getter=isPasswordSharingSupported) BOOL passwordSharingSupported; // ivar: _passwordSharingSupported
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider; // ivar: _provider
@property (copy, nonatomic) id *providerCallback; // ivar: _providerCallback
@property (nonatomic) NSInteger requestedFields; // ivar: _requestedFields
@property (nonatomic) BOOL shouldReactivatePasswordSharing; // ivar: _shouldReactivatePasswordSharing
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *username;
@property (nonatomic, getter=isWeakSecurity) BOOL weakSecurity; // ivar: _weakSecurity


-(BOOL)service:(id)arg0 shouldPromptForNetwork:(id)arg1 ;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(NSInteger)securityMode;
-(id)initWithNetwork:(id)arg0 profile:(id)arg1 ;
-(id)initWithNetwork:(id)arg0 profile:(id)arg1 authTraits:(NSInteger)arg2 ;
-(void)activatePasswordSharing;
-(void)appDidBecomeActive:(id)arg0 ;
-(void)appDidEnterBackground:(id)arg0 ;
-(void)appWillEnterForeground:(id)arg0 ;
-(void)appWillResignActive:(id)arg0 ;
-(void)cancel;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 forNetwork:(id)arg1 profile:(id)arg2 ;
-(void)gatherCredentials:(id)arg0 ;
-(void)launchSettings;
-(void)service:(id)arg0 receivedNetworkInfo:(id)arg1 ;


@end


#endif