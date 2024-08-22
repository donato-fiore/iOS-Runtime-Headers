// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEDESCRIPTOREVENT_H
#define HMSOFTWAREUPDATEDESCRIPTOREVENT_H

@class HMEEvent;


#import "HMSoftwareUpdateDescriptor.h"

@interface HMSoftwareUpdateDescriptorEvent : HMEEvent

@property (readonly) HMSoftwareUpdateDescriptor *descriptor; // ivar: _descriptor


-(id)encodedData;
-(id)initWithDescriptor:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif