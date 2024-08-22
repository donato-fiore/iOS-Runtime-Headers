// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFREEFORMPOINTERSETTINGS_H
#define _UIFREEFORMPOINTERSETTINGS_H

@class PTSettings;



@interface _UIFreeformPointerSettings : PTSettings

@property (nonatomic) CGFloat defaultPointerCornerRadius; // ivar: _defaultPointerCornerRadius
@property (nonatomic) CGFloat slipFactorX; // ivar: _slipFactorX
@property (nonatomic) CGFloat slipFactorY; // ivar: _slipFactorY


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif