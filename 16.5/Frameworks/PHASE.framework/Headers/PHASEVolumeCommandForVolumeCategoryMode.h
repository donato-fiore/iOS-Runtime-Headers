// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEVOLUMECOMMANDFORVOLUMECATEGORYMODE_H
#define PHASEVOLUMECOMMANDFORVOLUMECATEGORYMODE_H

@class NSString;


#import "PHASEVolumeCommand.h"
#import "PHASESessionVolume.h"

@interface PHASEVolumeCommandForVolumeCategoryMode : PHASEVolumeCommand

@property (readonly, nonatomic) PHASESessionVolume *volume; // ivar: _volume
@property (readonly, nonatomic) NSString *volumeCategory; // ivar: _volumeCategory
@property (readonly, nonatomic) NSString *volumeMode; // ivar: _volumeMode


-(id)description;
-(id)initInternalWithCategory:(id)arg0 mode:(id)arg1 volume:(id)arg2 ;
-(id)initWithCategory:(id)arg0 mode:(id)arg1 volume:(id)arg2 ;


@end


#endif