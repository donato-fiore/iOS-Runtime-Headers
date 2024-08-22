// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONANDTOOLBARBEHAVIORSETTINGS_H
#define _UINAVIGATIONANDTOOLBARBEHAVIORSETTINGS_H

@class PTSettings;



@interface _UINavigationAndToolbarBehaviorSettings : PTSettings

@property (nonatomic) CGFloat backButtonLeadingPadding; // ivar: _backButtonLeadingPadding
@property (nonatomic) CGFloat backButtonTrailingPadding; // ivar: _backButtonTrailingPadding
@property (nonatomic) CGFloat buttonCornerRadius; // ivar: _buttonCornerRadius
@property (nonatomic) CGFloat buttonHorizontalOffset; // ivar: _buttonHorizontalOffset
@property (nonatomic) CGFloat buttonMinimumDistanceFromEdge; // ivar: _buttonMinimumDistanceFromEdge
@property (nonatomic) CGFloat buttonMinimumHeight; // ivar: _buttonMinimumHeight
@property (nonatomic) CGFloat buttonMinimumWidth; // ivar: _buttonMinimumWidth
@property (nonatomic) CGFloat buttonPadding; // ivar: _buttonPadding
@property (nonatomic) CGFloat buttonVerticalOffset; // ivar: _buttonVerticalOffset
@property (nonatomic) BOOL enableClippingBehavior; // ivar: _enableClippingBehavior
@property (nonatomic) BOOL enableLiftOnSelected; // ivar: _enableLiftOnSelected


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif