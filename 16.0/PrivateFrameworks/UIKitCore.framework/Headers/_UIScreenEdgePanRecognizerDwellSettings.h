// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENEDGEPANRECOGNIZERDWELLSETTINGS_H
#define _UISCREENEDGEPANRECOGNIZERDWELLSETTINGS_H

@class UISettings;



@interface _UIScreenEdgePanRecognizerDwellSettings : UISettings

@property (nonatomic) CGFloat longPressPermittedHorizontalMovement; // ivar: _longPressPermittedHorizontalMovement
@property (nonatomic) CGFloat longPressPermittedVerticalMovement; // ivar: _longPressPermittedVerticalMovement
@property (nonatomic) CGFloat longPressRequiredDuration; // ivar: _longPressRequiredDuration
@property (nonatomic) CGFloat longPressTipPermittedHorizontalMovement; // ivar: _longPressTipPermittedHorizontalMovement
@property (nonatomic) CGFloat longPressTipPermittedVerticalMovement; // ivar: _longPressTipPermittedVerticalMovement


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif