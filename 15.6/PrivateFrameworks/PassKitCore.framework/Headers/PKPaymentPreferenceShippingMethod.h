// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCESHIPPINGMETHOD_H
#define PKPAYMENTPREFERENCESHIPPINGMETHOD_H

@class NSString;


#import "PKPaymentPreference.h"

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference

@property (copy, nonatomic) NSString *currency; // ivar: _currency


-(BOOL)supportsDeletion;


@end


#endif