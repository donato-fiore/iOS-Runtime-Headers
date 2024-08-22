// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONAMOUNT_H
#define PKTRANSACTIONAMOUNT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 label:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif