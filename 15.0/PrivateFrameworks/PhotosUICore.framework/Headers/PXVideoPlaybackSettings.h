// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOPLAYBACKSETTINGS_H
#define PXVIDEOPLAYBACKSETTINGS_H



#import "PXSettings.h"

@interface PXVideoPlaybackSettings : PXSettings

@property (nonatomic) BOOL isDownloadingVideoSegmentsEnabled; // ivar: _isDownloadingVideoSegmentsEnabled


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif