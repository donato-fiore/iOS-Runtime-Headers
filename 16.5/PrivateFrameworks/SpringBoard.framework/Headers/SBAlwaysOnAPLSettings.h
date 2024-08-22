// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONAPLSETTINGS_H
#define SBALWAYSONAPLSETTINGS_H

@class PTSettings;



@interface SBAlwaysOnAPLSettings : PTSettings

@property (nonatomic) CGFloat overallAPLLimit; // ivar: _overallAPLLimit


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif