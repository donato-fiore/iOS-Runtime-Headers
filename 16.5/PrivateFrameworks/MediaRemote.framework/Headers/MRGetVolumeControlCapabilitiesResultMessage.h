// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRGETVOLUMECONTROLCAPABILITIESRESULTMESSAGE_H
#define MRGETVOLUMECONTROLCAPABILITIESRESULTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRGetVolumeControlCapabilitiesResultMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;


-(NSUInteger)type;
-(id)initWithCapabilities:(unsigned int)arg0 ;


@end


#endif