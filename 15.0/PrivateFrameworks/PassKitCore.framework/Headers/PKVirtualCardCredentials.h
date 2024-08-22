// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVIRTUALCARDCREDENTIALS_H
#define PKVIRTUALCARDCREDENTIALS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *cardSecurityCode; // ivar: _cardSecurityCode
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSString *primaryAccountNumber; // ivar: _primaryAccountNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif