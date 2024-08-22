// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPAYMENTVERIFICATIONTOKENRESULT_H
#define AMSPAYMENTVERIFICATIONTOKENRESULT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSPaymentVerificationTokenResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *tokenData; // ivar: _tokenData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTokenData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif