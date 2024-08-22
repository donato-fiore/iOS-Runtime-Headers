// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRESTAURANTOFFER_H
#define INRESTAURANTOFFER_H

@class NSString;
@protocol INRestaurantOfferExport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *offerDetailText; // ivar: _offerDetailText
@property (copy, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (copy, nonatomic) NSString *offerTitleText; // ivar: _offerTitleText
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif