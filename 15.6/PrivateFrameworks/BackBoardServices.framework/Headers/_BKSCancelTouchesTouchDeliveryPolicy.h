// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BKSCANCELTOUCHESTOUCHDELIVERYPOLICY_H
#define _BKSCANCELTOUCHESTOUCHDELIVERYPOLICY_H

@protocol OS_xpc_object;


#import "BKSTouchDeliveryPolicy.h"

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}


@property (readonly, nonatomic) unsigned int contextId; // ivar: _contextId
@property (readonly, nonatomic) CGFloat initialTouchTimestamp; // ivar: _initialTouchTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assertionEndpoint;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextId:(unsigned int)arg0 initialTouchTimestamp:(CGFloat)arg1 ;
// -(id)matchSharingTouchesPolicy:(id)arg0 orCancelTouchesPolicy:(unk)arg1 orCombinedPolicy:(id)arg2  ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAssertionEndpoint:(id)arg0 ;


@end


#endif