// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCOMPOSITEMESSAGE_H
#define MRCOMPOSITEMESSAGE_H

@class NSMutableArray, NSArray;


#import "MRProtocolMessage.h"
#import "MRProtocolMessageOptions.h"

@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray *_messages;
    MRProtocolMessageOptions *_transportOptions;
}


@property (readonly, nonatomic) NSArray *messages;


-(id)description;
-(id)init;
-(id)transportOptions;
-(void)addMessage:(id)arg0 ;
-(void)setTransportOptions:(id)arg0 ;


@end


#endif