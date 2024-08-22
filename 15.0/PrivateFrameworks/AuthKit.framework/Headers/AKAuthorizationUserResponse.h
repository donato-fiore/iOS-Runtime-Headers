// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONUSERRESPONSE_H
#define AKAUTHORIZATIONUSERRESPONSE_H

@class NSNumber, NSString;
@protocol NSSecureCoding, AKCredentialRequestProtocol;

#import <Foundation/Foundation.h>

#import "AKAuthorizationScopesUserSelection.h"

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *loginChoice; // ivar: _loginChoice
@property (copy, nonatomic) NSString *rawAccountPassword; // ivar: _rawAccountPassword
@property (retain, nonatomic) NSObject<AKCredentialRequestProtocol> *selectedRequest; // ivar: _selectedRequest
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection; // ivar: _userSelection


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif