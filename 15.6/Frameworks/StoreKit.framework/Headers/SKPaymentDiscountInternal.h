// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPAYMENTDISCOUNTINTERNAL_H
#define SKPAYMENTDISCOUNTINTERNAL_H

@class NSString, NSUUID, NSNumber;

#import <Foundation/Foundation.h>


@interface SKPaymentDiscountInternal : NSObject {
    NSString *_identifier;
    NSString *_keyIdentifier;
    NSUUID *_nonce;
    NSString *_signature;
    NSNumber *_timestamp;
}






@end


#endif