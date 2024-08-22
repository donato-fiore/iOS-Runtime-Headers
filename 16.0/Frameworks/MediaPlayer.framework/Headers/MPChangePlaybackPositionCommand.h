// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCHANGEPLAYBACKPOSITIONCOMMAND_H
#define MPCHANGEPLAYBACKPOSITIONCOMMAND_H



#import "MPRemoteCommand.h"

@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing; // ivar: _canBeControlledByScrubbing


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;
-(id)newCommandEventWithPositionTime:(CGFloat)arg0 ;


@end


#endif