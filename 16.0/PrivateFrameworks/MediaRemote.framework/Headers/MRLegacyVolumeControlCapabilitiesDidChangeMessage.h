// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRLEGACYVOLUMECONTROLCAPABILITIESDIDCHANGEMESSAGE_H
#define MRLEGACYVOLUMECONTROLCAPABILITIESDIDCHANGEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRLegacyVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int capabilities;


-(NSUInteger)type;
-(id)initWithCapabilities:(unsigned int)arg0 ;


@end


#endif