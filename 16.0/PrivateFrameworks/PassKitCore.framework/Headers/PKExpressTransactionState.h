// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPRESSTRANSACTIONSTATE_H
#define PKEXPRESSTRANSACTIONSTATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKExpressTransactionState : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (copy, nonatomic) NSString *paymentApplicationIdentifier; // ivar: _paymentApplicationIdentifier
@property (nonatomic, getter=isProcessing) BOOL processing; // ivar: _processing
@property (nonatomic) NSUInteger receivedEvents; // ivar: _receivedEvents
@property (nonatomic) NSInteger standaloneTransactionType; // ivar: _standaloneTransactionType
@property (nonatomic) NSInteger technologyType; // ivar: _technologyType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif