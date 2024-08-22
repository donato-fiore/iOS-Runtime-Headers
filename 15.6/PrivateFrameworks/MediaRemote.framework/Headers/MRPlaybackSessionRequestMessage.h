// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYBACKSESSIONREQUESTMESSAGE_H
#define MRPLAYBACKSESSIONREQUESTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"
#import "MRPlaybackSessionRequest.h"

@interface MRPlaybackSessionRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackSessionRequest *request;


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 forPlayerPath:(id)arg1 ;


@end


#endif