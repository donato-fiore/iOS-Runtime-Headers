// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYBACKSESSIONMIGRATERESPONSEMESSAGE_H
#define MRPLAYBACKSESSIONMIGRATERESPONSEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlaybackSessionMigrateRequest.h"

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 ;


@end


#endif