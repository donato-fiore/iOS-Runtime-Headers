// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRGETVOLUMECONTROLCAPABILITIESMESSAGE_H
#define MRGETVOLUMECONTROLCAPABILITIESMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)initWithOutputDeviceUID:(id)arg0 ;


@end


#endif