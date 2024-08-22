// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSETNOWPLAYINGCLIENTMESSAGE_H
#define MRSETNOWPLAYINGCLIENTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRClient.h"

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;


-(NSUInteger)type;
-(id)initWithClient:(id)arg0 ;


@end


#endif