// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSLIDESHOWSETTINGSVIEWMODELCHANGE_H
#define PUSLIDESHOWSETTINGSVIEWMODELCHANGE_H



#import "PUViewModelChange.h"

@interface PUSlideshowSettingsViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setMediaItemDidChange:) BOOL mediaItemDidChange; // ivar: _mediaItemDidChange
@property (nonatomic, setter=_setMusicOnDidChange:) BOOL musicOnDidChange; // ivar: _musicOnDidChange
@property (nonatomic, setter=_setPresetDidChange:) BOOL presetDidChange; // ivar: _presetDidChange
@property (nonatomic, setter=_setRepeatDidChange:) BOOL shouldRepeatDidChange; // ivar: _shouldRepeatDidChange
@property (nonatomic, setter=_setStepDurationDidChange:) BOOL stepDurationDidChange; // ivar: _stepDurationDidChange


-(BOOL)hasChanges;


@end


#endif