// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOPICKERSETTINGS_H
#define PXPHOTOPICKERSETTINGS_H



#import "PXSettings.h"

@interface PXPhotoPickerSettings : PXSettings

@property (nonatomic) BOOL hideSearchBarWhenScrolling; // ivar: _hideSearchBarWhenScrolling


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif