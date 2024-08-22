// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHROOTSETTINGS_H
#define PHROOTSETTINGS_H



#import "PHSettings.h"
#import "PHImageManagerSettings.h"
#import "PHResourceDownloadSettings.h"

@interface PHRootSettings : PHSettings

@property (readonly, nonatomic) PHImageManagerSettings *imageManagerSettings; // ivar: _imageManagerSettings
@property (readonly, nonatomic) PHResourceDownloadSettings *resourceDownloadSettings; // ivar: _resourceDownloadSettings


+(id)settingsControllerModule;
+(id)sharedSettings;
+(void)_rebuildMoments;
-(id)parentSettings;


@end


#endif