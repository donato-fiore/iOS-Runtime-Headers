// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREGISTERVOICEINPUTDEVICEMESSAGE_H
#define MRREGISTERVOICEINPUTDEVICEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRVirtualVoiceInputDeviceDescriptor.h"

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}


@property (readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;


-(NSUInteger)type;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif