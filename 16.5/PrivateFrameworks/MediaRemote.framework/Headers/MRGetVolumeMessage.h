// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRGETVOLUMEMESSAGE_H
#define MRGETVOLUMEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRGetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)init;
-(id)initWithOutputDeviceUID:(id)arg0 ;


@end


#endif