// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BKSSHARETOUCHESTOUCHDELIVERYPOLICY_H
#define _BKSSHARETOUCHESTOUCHDELIVERYPOLICY_H

@protocol OS_xpc_object;


#import "BKSTouchDeliveryPolicy.h"

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}


@property (readonly, nonatomic) unsigned int childContextId; // ivar: _childContextId
@property (readonly, nonatomic) unsigned int hostContextId; // ivar: _hostContextId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assertionEndpoint;
-(id)initWithChildContextId:(unsigned int)arg0 hostContextId:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
// -(id)matchSharingTouchesPolicy:(id)arg0 orCancelTouchesPolicy:(unk)arg1 orCombinedPolicy:(id)arg2  ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAssertionEndpoint:(id)arg0 ;


@end


#endif