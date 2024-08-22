// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRGAMECONTROLLERMESSAGE_H
#define MRGAMECONTROLLERMESSAGE_H



#import "MRProtocolMessage.h"
#import "_MRGameControllerMessageProtobuf.h"

@interface MRGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger controllerID;
@property (readonly, nonatomic) _MRGameControllerMessageProtobuf *event;


-(BOOL)shouldLog;
-(NSUInteger)type;
-(id)initWithGameControllerEvent:(id)arg0 controllerID:(NSUInteger)arg1 ;


@end


#endif