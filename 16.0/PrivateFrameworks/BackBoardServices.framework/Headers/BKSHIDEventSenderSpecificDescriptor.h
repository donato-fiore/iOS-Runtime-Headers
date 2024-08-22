// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTSENDERSPECIFICDESCRIPTOR_H
#define BKSHIDEVENTSENDERSPECIFICDESCRIPTOR_H



#import "BKSHIDEventDescriptor.h"

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor

@property (readonly) NSUInteger senderID; // ivar: _senderID
@property (retain, nonatomic) BKSHIDEventDescriptor *sourceDescriptor; // ivar: _sourceDescriptor


+(BOOL)supportsSecureCoding;
-(BOOL)describes:(id)arg0 ;
-(BOOL)matchesHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 senderID:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif