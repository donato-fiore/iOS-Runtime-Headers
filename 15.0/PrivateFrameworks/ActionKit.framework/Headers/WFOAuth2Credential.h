// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOAUTH2CREDENTIAL_H
#define WFOAUTH2CREDENTIAL_H

@class NSString, NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, nonatomic) NSDictionary *responseObject; // ivar: _responseObject
@property (readonly, nonatomic) NSString *tokenType; // ivar: _tokenType
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif