// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTACCOUNTFEATUREDESCRIPTOR_H
#define PKPEERPAYMENTACCOUNTFEATUREDESCRIPTOR_H

@class NSDecimalNumber;
@protocol NSSecureCoding;


#import "PKAccountFeatureDescriptor.h"

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *feePercentage; // ivar: _feePercentage
@property (copy, nonatomic) NSDecimalNumber *maximumFee; // ivar: _maximumFee
@property (copy, nonatomic) NSDecimalNumber *minimumFee; // ivar: _minimumFee


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif