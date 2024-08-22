// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYBACKSESSIONMIGRATEENDMESSAGE_H
#define MRPLAYBACKSESSIONMIGRATEENDMESSAGE_H

@class NSError;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"
#import "MRPlaybackSessionRequest.h"

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackSessionRequest *request;


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 error:(id)arg1 playerPath:(id)arg2 ;


@end


#endif