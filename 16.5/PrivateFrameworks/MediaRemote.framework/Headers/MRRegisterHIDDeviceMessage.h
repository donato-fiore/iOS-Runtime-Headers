// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREGISTERHIDDEVICEMESSAGE_H
#define MRREGISTERHIDDEVICEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRVirtualTouchDeviceDescriptor.h"

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}


@property (readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;


-(NSUInteger)type;
-(id)initWithDeviceDescriptor:(id)arg0 ;


@end


#endif