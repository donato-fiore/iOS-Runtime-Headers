// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSACCOUNTMETADATA_H
#define VSACCOUNTMETADATA_H

@class NSString, NSDate, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSAccountProviderResponse.h"

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;
@property (copy, nonatomic) NSString *accountProviderIdentifier; // ivar: _accountProviderIdentifier
@property (retain, nonatomic) VSAccountProviderResponse *accountProviderResponse; // ivar: _accountProviderResponse
@property (copy, nonatomic) NSDate *authenticationExpirationDate; // ivar: _authenticationExpirationDate
@property (copy, nonatomic) NSData *verificationData; // ivar: _verificationData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif