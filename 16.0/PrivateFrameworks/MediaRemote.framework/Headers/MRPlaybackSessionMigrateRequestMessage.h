// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGE_H
#define MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlaybackSession.h"
#import "MRPlayerPath.h"
#import "MRPlaybackSessionMigrateRequest.h"

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSession *playbackSession;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;


-(NSUInteger)type;
-(id)initWithPlaybackSession:(id)arg0 request:(id)arg1 forPlayerPath:(id)arg2 ;


@end


#endif