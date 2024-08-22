// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXWORKAROUNDSETTINGS_H
#define PXWORKAROUNDSETTINGS_H



#import "PXSettings.h"

@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165; // ivar: _shouldWorkAround53118165
@property (nonatomic) BOOL shouldWorkAround92220180; // ivar: _shouldWorkAround92220180
@property (nonatomic) BOOL shouldWorkAround92398340; // ivar: _shouldWorkAround92398340


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif