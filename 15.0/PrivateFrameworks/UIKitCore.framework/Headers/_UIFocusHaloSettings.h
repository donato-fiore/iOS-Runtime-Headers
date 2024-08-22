// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSHALOSETTINGS_H
#define _UIFOCUSHALOSETTINGS_H

@class PTSettings;



@interface _UIFocusHaloSettings : PTSettings

@property (nonatomic) BOOL debugEnabled; // ivar: _debugEnabled
@property (nonatomic) CGFloat gapWidth; // ivar: _gapWidth
@property (nonatomic) CGFloat thickness; // ivar: _thickness


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif