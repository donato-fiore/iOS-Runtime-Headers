// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNREGISTERGAMECONTROLLERMESSAGE_H
#define MRUNREGISTERGAMECONTROLLERMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger controllerID;


-(NSUInteger)type;
-(id)initWithControllerID:(NSUInteger)arg0 ;


@end


#endif