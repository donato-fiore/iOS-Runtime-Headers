// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTANDALONETRANSACTIONBANNERHANDLEREQUEST_H
#define PKSTANDALONETRANSACTIONBANNERHANDLEREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "PKBannerHandleRequest.h"

@interface PKStandaloneTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly, nonatomic) NSInteger transactionType; // ivar: _transactionType
@property (readonly, nonatomic, getter=isWalletForeground) BOOL walletForeground; // ivar: _walletForeground


+(BOOL)supportsSecureCoding;
+(id)createForPassUniqueIdentifier:(id)arg0 transactionType:(NSInteger)arg1 walletForeground:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif