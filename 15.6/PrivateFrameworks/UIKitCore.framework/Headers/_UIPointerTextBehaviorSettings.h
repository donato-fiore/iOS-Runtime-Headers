// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTERTEXTBEHAVIORSETTINGS_H
#define _UIPOINTERTEXTBEHAVIORSETTINGS_H

@class PTSettings;



@interface _UIPointerTextBehaviorSettings : PTSettings

@property (nonatomic) CGFloat regionCaptureMultiplier; // ivar: _regionCaptureMultiplier
@property (nonatomic) CGFloat textLineRegionPadding; // ivar: _textLineRegionPadding


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif