// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRREGISTERGAMECONTROLLERMESSAGE_H
#define MRREGISTERGAMECONTROLLERMESSAGE_H



#import "MRProtocolMessage.h"
#import "_MRGameControllerPropertiesProtobuf.h"

@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;


-(NSUInteger)type;
-(id)initWithProperties:(id)arg0 ;


@end


#endif