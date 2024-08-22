// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSETCONNECTIONSTATEMESSAGE_H
#define MRSETCONNECTIONSTATEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;


-(NSUInteger)encryptionType;
-(NSUInteger)type;
-(id)initWithConnectionState:(unsigned int)arg0 ;


@end


#endif