// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFMUTABLETRAITSSETTINGS_H
#define SBFMUTABLETRAITSSETTINGS_H



#import "SBFTraitsSettings.h"
#import "SBFTraitsSettingsOrientation.h"
#import "SBFTraitsSettingsZOrderLevel.h"

@interface SBFMutableTraitsSettings : SBFTraitsSettings

@property (retain, nonatomic) SBFTraitsSettingsOrientation *orientationSettings;
@property (retain, nonatomic) SBFTraitsSettingsZOrderLevel *zOrderLevelSettings;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif