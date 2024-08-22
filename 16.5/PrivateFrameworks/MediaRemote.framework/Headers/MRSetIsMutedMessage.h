// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSETISMUTEDMESSAGE_H
#define MRSETISMUTEDMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRSetIsMutedMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)initWithIsMuted:(BOOL)arg0 outputDeviceUID:(id)arg1 ;


@end


#endif