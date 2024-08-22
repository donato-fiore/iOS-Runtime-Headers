// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSPAYMENTRESPONSEBASE_H
#define STSPAYMENTRESPONSEBASE_H

@class NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSPaymentResponseBase : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *certificates; // ivar: _certificates
@property (readonly, nonatomic) NSData *transactionData; // ivar: _transactionData
@property (readonly, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initFromNFECommercePaymentResponse:(id)arg0 ;
-(id)initFromNFPeerPaymentResponse:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif