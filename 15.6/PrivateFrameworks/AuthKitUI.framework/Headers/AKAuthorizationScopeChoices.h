// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONSCOPECHOICES_H
#define AKAUTHORIZATIONSCOPECHOICES_H

@class NSString, NSArray, AKUserInformation, AKAuthorizationUserResponse;
@protocol AKCredentialRequestProtocol;

#import <Foundation/Foundation.h>


@interface AKAuthorizationScopeChoices : NSObject

@property (readonly, nonatomic) NSString *chosenEmail;
@property (readonly, nonatomic) NSUInteger emailCount; // ivar: _emailCount
@property (readonly, nonatomic) NSString *forwardingEmail;
@property NSUInteger indexOfChosenEmail; // ivar: _indexOfChosenEmail
@property NSUInteger indexOfChosenLogin; // ivar: _indexOfChosenLogin
@property (readonly, nonatomic) NSString *localizedChosenEmail;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSUInteger personNameComponentsOrder;
@property (copy, nonatomic) NSArray *scopes; // ivar: _scopes
@property (retain, nonatomic) NSObject<AKCredentialRequestProtocol> *selectedRequest; // ivar: _selectedRequest
@property (copy, nonatomic) AKUserInformation *userInformation; // ivar: _userInformation
@property (readonly, nonatomic) AKAuthorizationUserResponse *userResponse;
@property BOOL wantsPrivateEmail; // ivar: _wantsPrivateEmail


+(id)_dotsWithLength:(NSUInteger)arg0 ;
+(id)localizedFamilyNameLabel;
+(id)localizedGivenNameLabel;
+(id)obfuscatedEmail:(id)arg0 ;
-(id)_personNameComponents;
-(id)_userSelection;
-(id)description;
-(id)emailAtIndex:(NSUInteger)arg0 ;
-(id)initWithScopes:(id)arg0 userInformation:(id)arg1 ;
-(void)setGivenName:(id)arg0 familyName:(id)arg1 ;


@end


#endif