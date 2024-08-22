// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSUBSCRIPTIONVALIDATIONTOKENS_H
#define SKSUBSCRIPTIONVALIDATIONTOKENS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKSubscriptionValidationTokens : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *encryptionValidationToken; // ivar: _encryptionValidationToken
@property (readonly, nonatomic) NSString *subscriptionValidationToken; // ivar: _subscriptionValidationToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSubscriptionValidationTokens:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionValidationToken:(id)arg0 encryptionValidationToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif