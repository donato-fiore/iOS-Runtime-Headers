// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRVOLUMEDIDCHANGEMESSAGE_H
#define MRVOLUMEDIDCHANGEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *endpointUID;
@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) float volume;


-(NSUInteger)type;
-(id)initWithVolume:(float)arg0 endpointUID:(id)arg1 outputDeviceUID:(id)arg2 ;


@end


#endif