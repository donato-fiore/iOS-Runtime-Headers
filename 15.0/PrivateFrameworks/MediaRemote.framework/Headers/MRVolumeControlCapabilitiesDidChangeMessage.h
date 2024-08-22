// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRVOLUMECONTROLCAPABILITIESDIDCHANGEMESSAGE_H
#define MRVOLUMECONTROLCAPABILITIESDIDCHANGEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)initWithCapabilities:(unsigned int)arg0 endpointUID:(id)arg1 outputDeviceUID:(id)arg2 ;


@end


#endif