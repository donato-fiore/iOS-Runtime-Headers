// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSENDVIRTUALTOUCHEVENTMESSAGE_H
#define MRSENDVIRTUALTOUCHEVENTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRHIDTouchEvent event;
@property (readonly, nonatomic) NSUInteger virtualDeviceID;


-(NSUInteger)type;
-(id)initWithTouchEvent:(struct _MRHIDTouchEvent )arg0 virtualDeviceID:(NSUInteger)arg1 ;


@end


#endif