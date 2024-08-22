// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEVOLUMECOMMANDFORSESSION_H
#define PHASEVOLUMECOMMANDFORSESSION_H



#import "PHASEVolumeCommand.h"
#import "PHASESessionVolume.h"

@interface PHASEVolumeCommandForSession : PHASEVolumeCommand

@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken
@property (readonly, nonatomic) PHASESessionVolume *volume; // ivar: _volume


-(id)description;
-(id)initInternalWithSessionToken:(unsigned int)arg0 volume:(id)arg1 ;
-(id)initWithSessionToken:(unsigned int)arg0 ;
-(id)initWithSessionToken:(unsigned int)arg0 volume:(id)arg1 ;


@end


#endif