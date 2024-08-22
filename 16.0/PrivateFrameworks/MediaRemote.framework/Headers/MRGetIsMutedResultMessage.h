// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRGETISMUTEDRESULTMESSAGE_H
#define MRGETISMUTEDRESULTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRGetIsMutedResultMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;


-(NSUInteger)type;
-(id)initWithIsMuted:(BOOL)arg0 ;


@end


#endif