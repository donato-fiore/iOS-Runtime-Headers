// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRDEVICEINFOMESSAGE_H
#define MRDEVICEINFOMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRSupportedProtocolMessages.h"
#import "MRDeviceInfo.h"

@interface MRDeviceInfoMessage : MRProtocolMessage {
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}


@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;


-(NSUInteger)encryptionType;
-(NSUInteger)type;
-(id)initWithDeviceInfo:(id)arg0 ;


@end


#endif