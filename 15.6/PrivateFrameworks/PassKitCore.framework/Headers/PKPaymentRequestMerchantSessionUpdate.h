// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREQUESTMERCHANTSESSIONUPDATE_H
#define PKPAYMENTREQUESTMERCHANTSESSIONUPDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentMerchantSession.h"

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKPaymentMerchantSession *session; // ivar: _session
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 merchantSession:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif