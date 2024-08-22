// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHPAYMENTRINGSUGGESTIONRESPONSE_H
#define FHPAYMENTRINGSUGGESTIONRESPONSE_H

@class NSDecimalNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHPaymentRingSuggestionResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAmount:(id)arg0 category:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif