// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITAPPLETBALANCE_H
#define PKTRANSITAPPLETBALANCE_H

@class NSDecimalNumber, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) NSInteger exponent; // ivar: _exponent
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCurrency;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBalance:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 balance:(id)arg1 currency:(id)arg2 exponent:(NSInteger)arg3 expirationDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif