// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYBACKSESSIONMIGRATEBEGINMESSAGE_H
#define MRPLAYBACKSESSIONMIGRATEBEGINMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"
#import "MRPlaybackSessionRequest.h"

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackSessionRequest *request;


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 playerPath:(id)arg1 ;


@end


#endif