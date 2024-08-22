// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTMERCHANTDATA_H
#define PKPAYMENTMERCHANTDATA_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "PKPaymentMerchantSession.h"

@interface PKPaymentMerchantData : NSObject {
    PKPaymentMerchantSession *_merchantSession;
}


@property (readonly, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (readonly, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)encode;
-(id)init;
-(id)initWithMerchantIdentifier:(id)arg0 applicationData:(id)arg1 merchantSession:(id)arg2 ;


@end


#endif