// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRGETISMUTEDMESSAGE_H
#define MRGETISMUTEDMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRGetIsMutedMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;


-(NSUInteger)type;
-(id)initWithOutputDeviceUID:(id)arg0 ;


@end


#endif