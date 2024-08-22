// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BKSCOMBINEDTOUCHDELIVERYPOLICY_H
#define _BKSCOMBINEDTOUCHDELIVERYPOLICY_H

@class NSArray;


#import "BKSTouchDeliveryPolicy.h"

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

@property (readonly, nonatomic) NSArray *policies; // ivar: _policies


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assertionEndpoint;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPolicies:(id)arg0 ;
// -(id)matchSharingTouchesPolicy:(id)arg0 orCancelTouchesPolicy:(unk)arg1 orCombinedPolicy:(id)arg2  ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAssertionEndpoint:(id)arg0 ;


@end


#endif