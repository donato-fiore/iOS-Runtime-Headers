// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCREDITACCOUNTRATES_H
#define PKCREDITACCOUNTRATES_H

@class NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountRates : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *aprForPurchases; // ivar: _aprForPurchases


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedAPRForPurchasesPercentageString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif