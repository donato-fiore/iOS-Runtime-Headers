// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICALCARDACTION_H
#define PKPHYSICALCARDACTION_H

@class NSString, CNPostalAddress;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPhysicalCardPriceOption.h"

@interface PKPhysicalCardAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *activationCode; // ivar: _activationCode
@property (copy, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard
@property (retain, nonatomic) PKPhysicalCardPriceOption *priceOption; // ivar: _priceOption
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (copy, nonatomic) CNPostalAddress *shippingAddress; // ivar: _shippingAddress


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPhysicalCardAction:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithActionType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif