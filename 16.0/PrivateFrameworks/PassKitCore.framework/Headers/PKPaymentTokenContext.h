// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTOKENCONTEXT_H
#define PKPAYMENTTOKENCONTEXT_H

@class NSDecimalNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentTokenContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (copy, nonatomic) NSString *merchantDomain; // ivar: _merchantDomain
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *merchantName; // ivar: _merchantName


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)contextWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentTokenContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg0 externalIdentifier:(id)arg1 merchantName:(id)arg2 merchantDomain:(id)arg3 amount:(id)arg4 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif