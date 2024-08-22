// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSETRECORDINGSTATEMESSAGE_H
#define MRSETRECORDINGSTATEMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;


-(NSUInteger)type;
-(id)initWithRecordingState:(unsigned int)arg0 ;


@end


#endif