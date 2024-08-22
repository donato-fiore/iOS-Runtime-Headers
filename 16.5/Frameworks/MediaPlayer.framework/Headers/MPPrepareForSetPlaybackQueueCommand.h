// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPREPAREFORSETPLAYBACKQUEUECOMMAND_H
#define MPPREPAREFORSETPLAYBACKQUEUECOMMAND_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "MPRemoteCommand.h"

@interface MPPrepareForSetPlaybackQueueCommand : MPRemoteCommand {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) NSDictionary *proactiveCommandOptions; // ivar: _proactiveCommandOptions


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;


@end


#endif