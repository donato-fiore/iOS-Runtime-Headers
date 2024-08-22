// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERACCOUNTPRODUCT_H
#define PKPAYLATERACCOUNTPRODUCT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterAccountProductEligibleSpend.h"
#import "PKPayLaterAccountProductDetails.h"

@interface PKPayLaterAccountProduct : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKPayLaterAccountProductEligibleSpend *eligibleSpend; // ivar: _eligibleSpend
@property (retain, nonatomic) PKPayLaterAccountProductDetails *productDetails; // ivar: _productDetails
@property (nonatomic) NSUInteger productType; // ivar: _productType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif