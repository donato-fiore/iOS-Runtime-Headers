// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMODELSETTINGS_H
#define PXMODELSETTINGS_H



#import "PXSettings.h"

@interface PXModelSettings : PXSettings

@property (nonatomic) CGFloat photoAnalysisGraphInitialGraceDelay; // ivar: _photoAnalysisGraphInitialGraceDelay
@property (nonatomic) CGFloat photoAnalysisGraphProgressUpdateInterval; // ivar: _photoAnalysisGraphProgressUpdateInterval


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif