// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISIGNINSETTINGSGROUPCONTROLLER_H
#define SKUISIGNINSETTINGSGROUPCONTROLLER_H

@class NSString, NSMapTable;


#import "SKUISettingsGroupController.h"

@interface SKUISignInSettingsGroupController : SKUISettingsGroupController {
    NSString *_accountName;
    BOOL _authenticating;
    NSMapTable *_keyMapping;
    NSString *_password;
    BOOL _valid;
}




-(BOOL)isAuthenticating;
-(id)_keyForSettingDescription:(id)arg0 ;
-(id)_settingDescriptionForKey:(id)arg0 ;
-(id)_submitSettingDescription;
-(id)valueForSettingDescription:(id)arg0 ;
-(void)_attemptSignInWithAccountName:(id)arg0 password:(id)arg1 ;
-(void)_becomeFirstResponderWithKey:(id)arg0 ;
-(void)_resignFirstResponder;
-(void)_signInFailed:(id)arg0 error:(id)arg1 ;
-(void)_signInSuccess:(id)arg0 ;
-(void)_updateFieldsAuthenticating:(BOOL)arg0 ;
-(void)_updateValidation;
-(void)returnInSettingDescription:(id)arg0 ;
-(void)setValue:(id)arg0 forSettingDescription:(id)arg1 ;
-(void)submitSettingDescription:(id)arg0 ;


@end


#endif