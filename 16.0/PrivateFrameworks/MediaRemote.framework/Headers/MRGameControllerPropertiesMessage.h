// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRGAMECONTROLLERPROPERTIESMESSAGE_H
#define MRGAMECONTROLLERPROPERTIESMESSAGE_H



#import "MRProtocolMessage.h"
#import "_MRGameControllerPropertiesProtobuf.h"

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger controllerID;
@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;


-(NSUInteger)type;
-(id)initWithGameControllerProperties:(id)arg0 controllerID:(NSUInteger)arg1 ;


@end


#endif