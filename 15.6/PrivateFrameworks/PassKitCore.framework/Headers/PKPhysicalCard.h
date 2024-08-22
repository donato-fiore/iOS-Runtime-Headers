// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICALCARD_H
#define PKPHYSICALCARD_H

@class NSString, NSURL, NSDate, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKImage.h"

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *FPANSuffix; // ivar: _FPANSuffix
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (copy, nonatomic) NSString *activationCodeHash; // ivar: _activationCodeHash
@property (retain, nonatomic) PKImage *frontFaceImage; // ivar: _frontFaceImage
@property (copy, nonatomic) NSURL *frontFaceImageURL; // ivar: _frontFaceImageURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard
@property (copy, nonatomic) NSSet *orderActivity; // ivar: _orderActivity
@property (copy, nonatomic) NSSet *shippingActivity; // ivar: _shippingActivity
@property (copy, nonatomic) NSString *shippingCompany; // ivar: _shippingCompany
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) NSString *trackingNumber; // ivar: _trackingNumber


+(BOOL)physicalCard:(id)arg0 matchesActivationCode:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)latestOrderActivity;
-(id)latestShippingActivity;
-(id)shipmentTrackingURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif