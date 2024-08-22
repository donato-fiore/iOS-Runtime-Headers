// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTILINGSETTINGS_H
#define PXTILINGSETTINGS_H



#import "PXSettings.h"

@interface PXTilingSettings : PXSettings

@property (nonatomic) BOOL flipLayoutsHorizontally; // ivar: _flipLayoutsHorizontally


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif