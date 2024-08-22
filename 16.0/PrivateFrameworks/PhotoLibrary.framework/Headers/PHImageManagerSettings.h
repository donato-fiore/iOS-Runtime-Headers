// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMAGEMANAGERSETTINGS_H
#define PHIMAGEMANAGERSETTINGS_H



#import "PHSettings.h"

@interface PHImageManagerSettings : PHSettings

@property (nonatomic) BOOL allowCaching; // ivar: _allowCaching
@property (nonatomic) BOOL allowImageRequests; // ivar: _allowImageRequests


+(id)settingsControllerModule;
+(id)sharedSettings;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif