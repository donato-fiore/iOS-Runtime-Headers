// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREGISTERFORGAMECONTROLLEREVENTSMESSAGE_H
#define MRREGISTERFORGAMECONTROLLEREVENTSMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int inputMode;


-(NSUInteger)type;
-(id)initWithInputMode:(unsigned int)arg0 ;


@end


#endif