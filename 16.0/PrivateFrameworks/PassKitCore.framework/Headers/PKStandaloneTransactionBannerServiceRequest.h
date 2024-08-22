// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTANDALONETRANSACTIONBANNERSERVICEREQUEST_H
#define PKSTANDALONETRANSACTIONBANNERSERVICEREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "PKBannerServiceRequest.h"

@interface PKStandaloneTransactionBannerServiceRequest : PKBannerServiceRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly, nonatomic) NSInteger transactionType; // ivar: _transactionType


+(BOOL)supportsSecureCoding;
+(id)createForPassUniqueIdentifier:(id)arg0 transactionType:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif