// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXPRESSTRANSACTIONBANNERHANDLEREQUEST_H
#define PKEXPRESSTRANSACTIONBANNERHANDLEREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "PKBannerHandleRequest.h"

@interface PKExpressTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)createForPassUniqueIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif