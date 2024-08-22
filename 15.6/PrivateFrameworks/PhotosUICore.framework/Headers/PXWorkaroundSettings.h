// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXWORKAROUNDSETTINGS_H
#define PXWORKAROUNDSETTINGS_H



#import "PXSettings.h"

@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165; // ivar: _shouldWorkAround53118165


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif