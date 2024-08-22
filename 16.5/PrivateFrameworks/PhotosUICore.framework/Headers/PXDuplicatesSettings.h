// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDUPLICATESSETTINGS_H
#define PXDUPLICATESSETTINGS_H



#import "PXSettings.h"

@interface PXDuplicatesSettings : PXSettings

@property (nonatomic) BOOL showDuplicateGroupsWithASingleAsset; // ivar: _showDuplicateGroupsWithASingleAsset


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif