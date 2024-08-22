// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSAUTHENTICATIONCREDENTIAL_H
#define MSAUTHENTICATIONCREDENTIAL_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CMSAuthenticationCredential.h"

@interface MSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying>



@property (readonly) CMSAuthenticationCredential *credential; // ivar: _credential


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif