// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTMERCHANTSESSION_H
#define PKPAYMENTMERCHANTSESSION_H

@class NSData, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *ampEnrollmentPinning; // ivar: _ampEnrollmentPinning
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSUInteger epochTimestamp; // ivar: _epochTimestamp
@property (readonly, nonatomic) NSUInteger expiresAt; // ivar: _expiresAt
@property (readonly, nonatomic) NSString *initiative; // ivar: _initiative
@property (readonly, nonatomic) NSString *initiativeContext; // ivar: _initiativeContext
@property (readonly, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (readonly, nonatomic) NSString *merchantSessionIdentifier; // ivar: _merchantSessionIdentifier
@property (readonly, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, nonatomic) NSString *operationalAnalyticsIdentifier; // ivar: _operationalAnalyticsIdentifier
@property (retain, nonatomic) NSString *retryNonce; // ivar: _retryNonce
@property (readonly, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, nonatomic) NSArray *signedFields; // ivar: _signedFields


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)paymentMerchantSessionWithProtobuf:(id)arg0 ;
-(BOOL)_isModern;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentMerchantSession:(id)arg0 ;
-(BOOL)supportsURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMerchantIdentifier:(id)arg0 merchantSessionIdentifier:(id)arg1 nonce:(id)arg2 epochTimestamp:(NSUInteger)arg3 domain:(id)arg4 displayName:(id)arg5 signature:(id)arg6 ;
-(id)initWithMerchantIdentifier:(id)arg0 merchantSessionIdentifier:(id)arg1 nonce:(id)arg2 epochTimestamp:(NSUInteger)arg3 expiresAt:(NSUInteger)arg4 displayName:(id)arg5 initiativeContext:(id)arg6 initiative:(id)arg7 ampEnrollmentPinning:(id)arg8 operationalAnalyticsIdentifier:(id)arg9 signedFields:(id)arg10 signature:(id)arg11 ;
-(id)initWithMerchantIdentifier:(id)arg0 merchantSessionIdentifier:(id)arg1 nonce:(id)arg2 epochTimestamp:(NSUInteger)arg3 expiresAt:(NSUInteger)arg4 displayName:(id)arg5 initiativeContext:(id)arg6 initiative:(id)arg7 signedFields:(id)arg8 signature:(id)arg9 ;
-(id)initWithMerchantIdentifier:(id)arg0 merchantSessionIdentifier:(id)arg1 nonce:(id)arg2 epochTimestamp:(NSUInteger)arg3 expiresAt:(NSUInteger)arg4 domain:(id)arg5 displayName:(id)arg6 operationalAnalyticsIdentifier:(id)arg7 signature:(id)arg8 ;
-(id)protobuf;
-(id)signedData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif