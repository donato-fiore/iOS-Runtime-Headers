// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEVOLUMECOMMANDFORVOLUMECATEGORYMODEANDSESSION_H
#define PHASEVOLUMECOMMANDFORVOLUMECATEGORYMODEANDSESSION_H



#import "PHASEVolumeCommandForVolumeCategoryMode.h"

@interface PHASEVolumeCommandForVolumeCategoryModeAndSession : PHASEVolumeCommandForVolumeCategoryMode

@property (readonly, nonatomic) unsigned int audioSessionToken; // ivar: _audioSessionToken


-(id)description;
-(id)initWithCategory:(id)arg0 mode:(id)arg1 sessionToken:(unsigned int)arg2 ;


@end


#endif