// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYBACKQUEUEREQUESTMESSAGE_H
#define MRPLAYBACKQUEUEREQUESTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"
#import "MRPlaybackQueueRequest.h"

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) MRPlaybackQueueRequest *request;


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 forPlayerPath:(id)arg1 ;


@end


#endif