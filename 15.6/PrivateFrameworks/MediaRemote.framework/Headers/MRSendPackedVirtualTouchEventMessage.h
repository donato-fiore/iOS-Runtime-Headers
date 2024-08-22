// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSENDPACKEDVIRTUALTOUCHEVENTMESSAGE_H
#define MRSENDPACKEDVIRTUALTOUCHEVENTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSendPackedVirtualTouchEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRHIDTouchEvent event;
@property (readonly, nonatomic) NSUInteger virtualDeviceID;


-(NSUInteger)type;
-(id)description;
-(id)initWithTouchEvent:(struct _MRHIDTouchEvent )arg0 virtualDeviceID:(NSUInteger)arg1 ;


@end


#endif