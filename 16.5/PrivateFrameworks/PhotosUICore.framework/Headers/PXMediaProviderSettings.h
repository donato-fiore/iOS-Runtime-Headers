// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEDIAPROVIDERSETTINGS_H
#define PXMEDIAPROVIDERSETTINGS_H



#import "PXSettings.h"

@interface PXMediaProviderSettings : PXSettings

@property (nonatomic) BOOL simulateError; // ivar: _simulateError
@property (nonatomic) CGFloat simulatedDelay; // ivar: _simulatedDelay
@property (nonatomic) BOOL wantsSimulation; // ivar: _wantsSimulation


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif