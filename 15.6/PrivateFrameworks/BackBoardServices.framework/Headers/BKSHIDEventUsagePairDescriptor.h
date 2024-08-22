// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTUSAGEPAIRDESCRIPTOR_H
#define BKSHIDEVENTUSAGEPAIRDESCRIPTOR_H



#import "BKSHIDEventDescriptor.h"

@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor

@property (readonly) unsigned int page; // ivar: _page
@property (readonly) unsigned int usage; // ivar: _usage


+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEventType:(unsigned int)arg0 page:(unsigned short)arg1 usage:(unsigned short)arg2 ;
-(BOOL)_page:(unsigned int)arg0 usage:(unsigned int)arg1 matchesHIDEvent:(struct __IOHIDEvent *)arg2 ;
-(BOOL)describes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPage:(unsigned int)arg0 usage:(unsigned int)arg1 eventType:(unsigned int)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif