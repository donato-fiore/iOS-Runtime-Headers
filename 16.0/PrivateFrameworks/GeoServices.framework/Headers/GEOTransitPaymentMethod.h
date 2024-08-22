// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITPAYMENTMETHOD_H
#define GEOTRANSITPAYMENTMETHOD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOPBTransitPaymentMethod.h"

@interface GEOTransitPaymentMethod : NSObject <NSCopying>

 {
    GEOPBTransitPaymentMethod *_pbPaymentMethod;
}


@property (readonly, nonatomic) int addValueNameType; // ivar: addValueNameType
@property (readonly, nonatomic) NSString *identifier; // ivar: identifier
@property (readonly, nonatomic) NSUInteger muid; // ivar: muid
@property (readonly, nonatomic) int paymentMethodType; // ivar: paymentMethodType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPaymentMethod:(id)arg0 ;


@end


#endif