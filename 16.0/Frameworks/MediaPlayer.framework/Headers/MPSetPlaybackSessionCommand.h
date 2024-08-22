// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSETPLAYBACKSESSIONCOMMAND_H
#define MPSETPLAYBACKSESSIONCOMMAND_H

@class NSString, NSArray;


#import "MPRemoteCommand.h"

@interface MPSetPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSString *currentPlaybackSessionIdentifier; // ivar: _currentPlaybackSessionIdentifier
@property (copy, nonatomic) NSString *currentPlaybackSessionRevision; // ivar: _currentPlaybackSessionRevision
@property (copy, nonatomic) NSArray *exportableSessionTypes; // ivar: _exportableSessionTypes
@property (copy, nonatomic) NSArray *supportedSessionTypes; // ivar: _supportedSessionTypes


-(id)_mediaRemoteCommandInfoOptions;


@end


#endif