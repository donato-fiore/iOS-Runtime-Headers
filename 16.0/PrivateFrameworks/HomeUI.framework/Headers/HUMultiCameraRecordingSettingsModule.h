// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMULTICAMERARECORDINGSETTINGSMODULE_H
#define HUMULTICAMERARECORDINGSETTINGSMODULE_H



#import "HUCameraRecordingSettingsModule.h"

@interface HUMultiCameraRecordingSettingsModule : HUCameraRecordingSettingsModule

@property (nonatomic) BOOL shouldShowFooterTitle; // ivar: _shouldShowFooterTitle


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 cameraProfiles:(id)arg1 displayStyle:(NSUInteger)arg2 ;


@end


#endif