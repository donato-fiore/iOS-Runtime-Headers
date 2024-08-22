// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONSCOPESUSERSELECTION_H
#define AKAUTHORIZATIONSCOPESUSERSELECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKUserInformation.h"

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding>



@property (nonatomic) BOOL makePrivateEmail; // ivar: _makePrivateEmail
@property (copy, nonatomic) AKUserInformation *userInformation; // ivar: _userInformation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif