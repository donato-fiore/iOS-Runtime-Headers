// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INBALANCEAMOUNT_H
#define INBALANCEAMOUNT_H

@class NSDecimalNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) NSInteger balanceType; // ivar: _balanceType
@property (readonly, copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAmount:(id)arg0 balanceType:(NSInteger)arg1 ;
-(id)initWithAmount:(id)arg0 balanceType:(NSInteger)arg1 currencyCode:(id)arg2 ;
-(id)initWithAmount:(id)arg0 currencyCode:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif