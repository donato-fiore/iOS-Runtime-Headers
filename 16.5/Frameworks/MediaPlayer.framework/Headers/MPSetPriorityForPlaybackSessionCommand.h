// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSETPRIORITYFORPLAYBACKSESSIONCOMMAND_H
#define MPSETPRIORITYFORPLAYBACKSESSIONCOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preloadedSessions; // ivar: _preloadedSessions


-(id)_mediaRemoteCommandInfoOptions;


@end


#endif