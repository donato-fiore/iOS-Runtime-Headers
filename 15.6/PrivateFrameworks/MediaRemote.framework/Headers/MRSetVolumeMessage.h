// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSETVOLUMEMESSAGE_H
#define MRSETVOLUMEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRSetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) float volume;


-(NSUInteger)type;
-(id)initWithVolume:(float)arg0 ;
-(id)initWithVolume:(float)arg0 outputDeviceUID:(id)arg1 ;


@end


#endif