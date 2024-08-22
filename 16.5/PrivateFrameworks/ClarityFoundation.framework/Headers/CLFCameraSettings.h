// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFCAMERASETTINGS_H
#define CLFCAMERASETTINGS_H



#import "CLFBaseSettings.h"

@interface CLFCameraSettings : CLFBaseSettings

@property (nonatomic) BOOL browsePhotosEnabled;


+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(id)sharedInstance;
-(id)init;


@end


#endif