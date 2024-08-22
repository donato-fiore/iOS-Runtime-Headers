// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHPAYMENTRINGSUGGESTIONRESPONSE_H
#define FHPAYMENTRINGSUGGESTIONRESPONSE_H

@class NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface FHPaymentRingSuggestionResponse : NSObject

@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (nonatomic) NSInteger priority; // ivar: _priority


+(id)roundingAmount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAmount:(id)arg0 category:(NSUInteger)arg1 ;


@end


#endif