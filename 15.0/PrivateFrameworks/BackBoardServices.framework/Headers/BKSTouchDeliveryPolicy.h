// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTOUCHDELIVERYPOLICY_H
#define BKSTOUCHDELIVERYPOLICY_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)policyByCombiningPolicies:(id)arg0 ;
+(id)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg0 withInitialTouchTimestamp:(CGFloat)arg1 ;
+(id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg0 withHostContextId:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
// -(id)matchSharingTouchesPolicy:(id)arg0 orCancelTouchesPolicy:(unk)arg1 orCombinedPolicy:(id)arg2  ;
-(id)policyByMappingContainedPoliciesWithBlock:(id)arg0 ;
-(id)policyExcludingPolicy:(id)arg0 ;
-(id)policyExcludingPolicyIdenticalTo:(id)arg0 ;
-(id)policyIncludingPolicy:(id)arg0 ;
-(id)reducePolicyToObjectWithBlock:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif