// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRPLAYBACKSESSIONRESPONSEMESSAGE_H
#define MRPLAYBACKSESSIONRESPONSEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlaybackSession.h"

@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;


-(NSUInteger)type;
-(id)initWithPlaybackSession:(id)arg0 ;


@end


#endif