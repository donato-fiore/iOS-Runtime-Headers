// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAUDIOSETTINGS_H
#define PXAUDIOSETTINGS_H



#import "PXSettings.h"

@interface PXAudioSettings : PXSettings

@property (nonatomic) BOOL flexReturnOnlyLocalSongs; // ivar: _flexReturnOnlyLocalSongs
@property (nonatomic) BOOL workaround80278485; // ivar: _workaround80278485


+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)purgeFlexDataFromModuleController:(id)arg0 ;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif