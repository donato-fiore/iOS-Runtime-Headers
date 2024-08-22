// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTLOOKUPRESPONSE_H
#define PKMERCHANTLOOKUPRESPONSE_H

@class CLPlacemark;

#import <Foundation/Foundation.h>

#import "PKMapsBrand.h"
#import "PKMapsMerchant.h"

@interface PKMerchantLookupResponse : NSObject

@property (retain, nonatomic) PKMapsBrand *brand; // ivar: _brand
@property (nonatomic) NSInteger fallbackCategory; // ivar: _fallbackCategory
@property (retain, nonatomic) PKMapsMerchant *merchant; // ivar: _merchant
@property (retain, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (nonatomic) NSInteger result; // ivar: _result




@end


#endif