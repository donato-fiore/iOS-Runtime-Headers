// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAIRDROPACCOUNTSHARINGAUTHENTICATIONCONTEXT_H
#define _SFAIRDROPACCOUNTSHARINGAUTHENTICATIONCONTEXT_H

@class NSString, NSDictionary, WBSSavedAccount;
@protocol _SFSettingsAuthenticationRequiring;

#import <Foundation/Foundation.h>


@interface _SFAirDropAccountSharingAuthenticationContext : NSObject <_SFSettingsAuthenticationRequiring>



@property (readonly, copy, nonatomic) NSString *authenticationPrompt;
@property (readonly, copy, nonatomic) NSDictionary *customLocalAuthenticationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBeenAuthenticated; // ivar: _hasBeenAuthenticated
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (readonly, nonatomic) BOOL showsAuthenticationPromptAsTitle;
@property (readonly) Class superclass;


-(id)_localAuthenticationOptionsForSharingPasskeyWithAirDrop;
-(id)_localAuthenticationOptionsForSharingPasswordWithAirDrop;
-(id)_passcodeTitleForSharingPasskeyWithAirDrop;
-(id)_passcodeTitleForSharingPasswordWithAirDrop;
-(id)initWithSavedAccount:(id)arg0 ;


@end


#endif