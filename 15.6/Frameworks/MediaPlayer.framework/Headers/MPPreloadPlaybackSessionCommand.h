// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPPRELOADPLAYBACKSESSIONCOMMAND_H
#define MPPRELOADPLAYBACKSESSIONCOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPPreloadPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *supportedSessionTypes; // ivar: _supportedSessionTypes


-(id)_mediaRemoteCommandInfoOptions;


@end


#endif