// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITPAYMENTMETHODSUGGESTION_H
#define GEOTRANSITPAYMENTMETHODSUGGESTION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOPBTransitPaymentMethodSuggestion.h"
#import "GEOFormattedString.h"

@interface GEOTransitPaymentMethodSuggestion : NSObject <NSCopying>

 {
    GEOPBTransitPaymentMethodSuggestion *_suggestion;
}


@property (readonly, nonatomic) NSArray *educationalScreenAssets; // ivar: educationalScreenAssets
@property (readonly, nonatomic) NSArray *educationalScreenPaymentBody; // ivar: educationalScreenPaymentBody
@property (readonly, nonatomic) GEOFormattedString *educationalScreenTitle; // ivar: educationalScreenTitle
@property (readonly, nonatomic) NSUInteger marketMUID; // ivar: marketMUID
@property (readonly, nonatomic) NSArray *paymentMethodIndices; // ivar: paymentMethodIndices
@property (readonly, nonatomic) int purpose; // ivar: purpose
@property (readonly, nonatomic) GEOFormattedString *tipSubtitle; // ivar: tipSubtitle
@property (readonly, nonatomic) GEOFormattedString *tipTitle; // ivar: tipTitle
@property (readonly, nonatomic) int type; // ivar: type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSuggestionData:(id)arg0 ;


@end


#endif