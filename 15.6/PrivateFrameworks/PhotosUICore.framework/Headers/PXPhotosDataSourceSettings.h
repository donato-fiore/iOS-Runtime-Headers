// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSDATASOURCESETTINGS_H
#define PXPHOTOSDATASOURCESETTINGS_H



#import "PXSettings.h"

@interface PXPhotosDataSourceSettings : PXSettings

@property (nonatomic) CGFloat delayChanges; // ivar: _delayChanges
@property (nonatomic) BOOL slowBackgroundFetch; // ivar: _slowBackgroundFetch


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif