// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDELEGATEAUTHENTICATEREQUEST_H
#define AMSDELEGATEAUTHENTICATEREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSDelegateAuthenticateRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *challenge; // ivar: _challenge
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


+(BOOL)supportsSecureCoding;
+(id)preferredUserAgent;
-(id)initWithChallenge:(id)arg0 userAgent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif