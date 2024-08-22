// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDSPCONTEXT_H
#define PKDSPCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDSPContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (nonatomic) NSUInteger eventFrequency; // ivar: _eventFrequency
@property (copy, nonatomic) NSString *peerPaymentRecipientAddress; // ivar: _peerPaymentRecipientAddress
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *primaryAppleAccountFirstName; // ivar: _primaryAppleAccountFirstName
@property (copy, nonatomic) NSString *primaryAppleAccountLastName; // ivar: _primaryAppleAccountLastName
@property (copy, nonatomic) NSString *secureElementID; // ivar: _secureElementID
@property (copy, nonatomic) NSString *serverEndpointIdentifier; // ivar: _serverEndpointIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimaryAppleAccount:(id)arg0 ;


@end


#endif