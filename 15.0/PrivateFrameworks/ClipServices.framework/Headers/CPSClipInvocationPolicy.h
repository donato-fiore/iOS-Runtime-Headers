// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCLIPINVOCATIONPOLICY_H
#define CPSCLIPINVOCATIONPOLICY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPSClipInvocationPolicy : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL canShowHeroImage;
@property (readonly, nonatomic, getter=isEligible) BOOL eligible; // ivar: _eligible
@property (readonly, nonatomic, getter=isIneligibleDueToContentRestriction) BOOL ineligibleDueToContentRestriction;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic, getter=isRecoverable) BOOL recoverable;


+(BOOL)supportsSecureCoding;
+(id)eligiblePolicy;
+(id)ineligiblePolicyWithReason:(NSInteger)arg0 ;
+(id)invocationPolicyWithAMSDict:(id)arg0 ;
+(void)requestAccountPolicyWithCompletion:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEligible:(BOOL)arg0 reason:(NSInteger)arg1 ;
-(id)localizedMessageForClipMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif