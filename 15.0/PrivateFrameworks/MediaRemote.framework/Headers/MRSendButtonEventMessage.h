// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRSENDBUTTONEVENTMESSAGE_H
#define MRSENDBUTTONEVENTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRHIDButtonEvent buttonEvent;


-(NSUInteger)type;
-(id)initWithButtonEvent:(struct _MRHIDButtonEvent )arg0 ;


@end


#endif