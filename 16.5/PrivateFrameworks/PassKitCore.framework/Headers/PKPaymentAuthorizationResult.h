// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONRESULT_H
#define PKPAYMENTAUTHORIZATIONRESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentOrderDetails.h"
#import "PKPeerPaymentTransactionMetadata.h"

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *errors; // ivar: _errors
@property (copy, nonatomic) NSString *localizedErrorMessageOverride; // ivar: _localizedErrorMessageOverride
@property (retain, nonatomic) PKPaymentOrderDetails *orderDetails; // ivar: _orderDetails
@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // ivar: _peerPaymentTransactionMetadata
@property (nonatomic) NSInteger resultSource; // ivar: _resultSource
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)sanitizedErrors:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 errors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif