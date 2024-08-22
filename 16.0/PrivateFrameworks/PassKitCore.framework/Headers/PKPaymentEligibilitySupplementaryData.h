// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTELIGIBILITYSUPPLEMENTARYDATA_H
#define PKPAYMENTELIGIBILITYSUPPLEMENTARYDATA_H


#import <Foundation/Foundation.h>

#import "PKAccount.h"

@interface PKPaymentEligibilitySupplementaryData : NSObject

@property (readonly, copy, nonatomic) PKAccount *lightweightAccount; // ivar: _lightweightAccount


-(id)initWithDictionary:(id)arg0 accountFeatureIdentifier:(NSUInteger)arg1 ;


@end


#endif