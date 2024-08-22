// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCLIENTUPDATE_H
#define PKPAYMENTCLIENTUPDATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentTokenConfiguration.h"

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (readonly, nonatomic) NSString *selectedAID; // ivar: _selectedAID
@property (readonly, nonatomic) NSArray *shippingMethods; // ivar: _shippingMethods
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration; // ivar: _tokenConfiguration


+(BOOL)supportsSecureCoding;
+(id)paymentUpdateResponseWithProtobuf:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 shippingMethods:(id)arg1 tokenConfiguration:(id)arg2 status:(NSInteger)arg3 selectedAID:(id)arg4 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif