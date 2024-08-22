// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSETNOWPLAYINGPLAYERMESSAGE_H
#define MRSETNOWPLAYINGPLAYERMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRSetNowPlayingPlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithPlayerPath:(id)arg0 ;


@end


#endif