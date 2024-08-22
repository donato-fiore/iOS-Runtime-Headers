// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTRECIPIENT_H
#define PKPEERPAYMENTRECIPIENT_H

@class NSDate, NSString, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentRecipient : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowsFormalPaymentRequests; // ivar: _allowsFormalPaymentRequests
@property (copy, nonatomic) NSDate *cacheUntil; // ivar: _cacheUntil
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDecimalNumber *maximumReceiveAmount; // ivar: _maximumReceiveAmount
@property (copy, nonatomic) NSDecimalNumber *minimumReceiveAmount; // ivar: _minimumReceiveAmount
@property (copy, nonatomic) NSString *phoneOrEmail; // ivar: _phoneOrEmail
@property (copy, nonatomic) NSString *receiveCurrency; // ivar: _receiveCurrency
@property (nonatomic) NSUInteger receiveMethod; // ivar: _receiveMethod
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger statusReason; // ivar: _statusReason


+(BOOL)supportsSecureCoding;
+(id)recipientWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cacheableCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif