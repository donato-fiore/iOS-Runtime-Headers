// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRREGISTERVOICEINPUTDEVICERESPONSEMESSAGE_H
#define MRREGISTERVOICEINPUTDEVICERESPONSEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) NSInteger errorCode;


-(NSUInteger)type;
-(id)initWithDeviceID:(unsigned int)arg0 errorCode:(NSInteger)arg1 ;


@end


#endif