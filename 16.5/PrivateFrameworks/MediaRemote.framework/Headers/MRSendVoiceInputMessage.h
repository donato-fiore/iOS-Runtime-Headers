// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSENDVOICEINPUTMESSAGE_H
#define MRSENDVOICEINPUTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRAudioDataBlock.h"
#import "MRAudioBuffer.h"

@interface MRSendVoiceInputMessage : MRProtocolMessage {
    MRAudioDataBlock *_dataBlock;
}


@property (readonly, nonatomic) MRAudioBuffer *buffer;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) ? time;


-(NSUInteger)type;
-(id)initWithBuffer:(id)arg0 time:(struct ? )arg1 gain:(float)arg2 ;
-(void)_initializeDataIfNecessary;


@end


#endif