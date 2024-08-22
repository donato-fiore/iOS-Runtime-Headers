// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTACCOUNTRESOLUTIONCONTROLLERCONFIGURATION_H
#define PKPEERPAYMENTACCOUNTRESOLUTIONCONTROLLERCONFIGURATION_H

@class PKCurrencyAmount, NSString;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (nonatomic, getter=isGraduation) BOOL graduation; // ivar: _graduation
@property (nonatomic) BOOL manuallyTriggered; // ivar: _manuallyTriggered
@property (nonatomic) NSUInteger registrationFlowState; // ivar: _registrationFlowState
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress


-(id)description;


@end


#endif