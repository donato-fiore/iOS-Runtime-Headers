// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCAMERAHARDWAREBUTTONSETTINGS_H
#define SBCAMERAHARDWAREBUTTONSETTINGS_H

@class PTSettings;



@interface SBCameraHardwareButtonSettings : PTSettings

@property (nonatomic) CGFloat shutterButtonLongPressCancellationTimeout; // ivar: _shutterButtonLongPressCancellationTimeout
@property (nonatomic) CGFloat shutterButtonLongPressTimeout; // ivar: _shutterButtonLongPressTimeout
@property (nonatomic) BOOL shutterButtonShouldUsePocketDetection; // ivar: _shutterButtonShouldUsePocketDetection


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif