// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDAVAILABILITYVERIFICATIONTOKENS_H
#define IMDAVAILABILITYVERIFICATIONTOKENS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMDAvailabilityVerificationTokens : NSObject

@property (readonly, nonatomic) NSString *encryptionValidationToken; // ivar: _encryptionValidationToken
@property (readonly, nonatomic) NSString *subscriptionValidationToken; // ivar: _subscriptionValidationToken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAvailabilityVerificationTokens:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSubscriptionValidationToken:(id)arg0 encryptionValidationToken:(id)arg1 ;


@end


#endif