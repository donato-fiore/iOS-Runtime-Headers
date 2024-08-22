// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPAYMENTDISCOUNT_H
#define SKPAYMENTDISCOUNT_H

@class NSString, NSUUID, NSNumber;

#import <Foundation/Foundation.h>


@interface SKPaymentDiscount : NSObject {
    id *_internal;
}


@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *keyIdentifier;
@property (readonly, copy, nonatomic) NSUUID *nonce;
@property (readonly, copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSNumber *timestamp;


-(id)initWithIdentifier:(id)arg0 keyIdentifier:(id)arg1 nonce:(id)arg2 signature:(id)arg3 timestamp:(id)arg4 ;


@end


#endif