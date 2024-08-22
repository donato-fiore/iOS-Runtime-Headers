// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRREGISTERHIDDEVICERESULTMESSAGE_H
#define MRREGISTERHIDDEVICERESULTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger deviceIdentifier;
@property (readonly, nonatomic) NSInteger errorCode;


-(NSUInteger)type;
-(id)initWithErrorCode:(NSInteger)arg0 deviceIdentifier:(NSUInteger)arg1 ;


@end


#endif