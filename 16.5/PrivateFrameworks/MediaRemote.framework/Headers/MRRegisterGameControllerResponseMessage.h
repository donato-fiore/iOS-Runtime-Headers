// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREGISTERGAMECONTROLLERRESPONSEMESSAGE_H
#define MRREGISTERGAMECONTROLLERRESPONSEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRRegisterGameControllerResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSUInteger controllerID;


-(NSUInteger)type;
-(id)initWithControllerID:(NSUInteger)arg0 ;


@end


#endif