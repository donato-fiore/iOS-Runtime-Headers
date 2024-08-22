// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONPRESENTATIONCONTEXT_H
#define AKAUTHORIZATIONPRESENTATIONCONTEXT_H

@class NSString, NSData, NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKCredentialRequestContext.h"
#import "AKUserInformation.h"

@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) AKCredentialRequestContext *credentialRequestContext; // ivar: _credentialRequestContext
@property (readonly, copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, copy, nonatomic) NSString *iconName; // ivar: _iconName
@property (readonly, copy, nonatomic) NSNumber *iconScale; // ivar: _iconScale
@property (copy, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (copy, nonatomic) NSArray *loginChoices; // ivar: _loginChoices
@property (nonatomic) BOOL signInAllowsPCSKeyAccess; // ivar: _signInAllowsPCSKeyAccess
@property (retain, nonatomic) AKUserInformation *userInformation; // ivar: _userInformation


+(BOOL)supportsSecureCoding;
+(id)presentationContextForRequestContext:(id)arg0 client:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 bundleID:(id)arg1 ;
-(id)initWithContext:(id)arg0 client:(id)arg1 ;
-(id)initWithUsername:(id)arg0 ;
-(void)_addPresentationParametersForContext:(id)arg0 ;
-(void)_addPresenterParameters;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif