// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKOSTRANSACTIONASSERTIONPROVIDER_H
#define CRKOSTRANSACTIONASSERTIONPROVIDER_H

@class NSString;
@protocol CATAssertionProviding, CRKOSTransactionPrimitives;

#import <Foundation/Foundation.h>


@interface CRKOSTransactionAssertionProvider : NSObject <CATAssertionProviding>



@property (readonly, nonatomic) NSObject<CRKOSTransactionPrimitives> *primitives; // ivar: _primitives
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


-(id)acquireAssertion;
-(id)initWithReverseDNSReason:(id)arg0 primitives:(id)arg1 ;


@end


#endif