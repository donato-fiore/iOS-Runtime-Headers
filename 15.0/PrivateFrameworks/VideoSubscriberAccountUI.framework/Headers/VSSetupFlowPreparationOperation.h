// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSETUPFLOWPREPARATIONOPERATION_H
#define VSSETUPFLOWPREPARATIONOPERATION_H

@class VSAsyncOperation, VSDevice, VSOptional, NSOperationQueue;



@interface VSSetupFlowPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) VSDevice *currentDevice; // ivar: _currentDevice
@property (retain, nonatomic) VSOptional *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (retain, nonatomic) VSOptional *storage; // ivar: _storage


-(id)init;
-(void)_checkAvailability;
-(void)_checkForExistingAccounts;
-(void)_checkForPersonalizedChannelsWithResponse:(id)arg0 identityProvider:(id)arg1 ;
-(void)_checkForSupportedAppsButton;
-(void)_checkForSupportedAppsButtonWithFlow:(id)arg0 ;
-(void)_checkForSupportedAppsFromProvider:(id)arg0 ;
-(void)_checkPreferences;
-(void)_fetchAllProviders;
-(void)_fetchAllProvidersIfNeeded;
-(void)_fetchProviderForAccount:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_finishWithFlow:(id)arg0 ;
-(void)_getSTBProviderFromAllProviders:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadProviderAppDescriptionWithFlow:(id)arg0 ;
-(void)_resolveBundleIDs:(id)arg0 forFlow:(id)arg1 ;
-(void)executionDidBegin;
-(void)prepareSTBSetupForAccount:(id)arg0 forProvider:(id)arg1 ;


@end


#endif