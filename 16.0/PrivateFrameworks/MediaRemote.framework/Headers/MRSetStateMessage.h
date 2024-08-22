// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSETSTATEMESSAGE_H
#define MRSETSTATEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRNowPlayingState.h"

@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}


@property (readonly, nonatomic) MRNowPlayingState *state;


-(NSUInteger)type;
-(id)initWithNowPlayingState:(id)arg0 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif