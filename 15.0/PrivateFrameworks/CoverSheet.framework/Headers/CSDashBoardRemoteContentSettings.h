// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSDASHBOARDREMOTECONTENTSETTINGS_H
#define CSDASHBOARDREMOTECONTENTSETTINGS_H

@class PTSettings;



@interface CSDashBoardRemoteContentSettings : PTSettings

@property (nonatomic) BOOL animatesDimming; // ivar: _animatesDimming
@property (nonatomic) BOOL animatesUndimming; // ivar: _animatesUndimming
@property (nonatomic) BOOL autoExtendsIdleTimer; // ivar: _autoExtendsIdleTimer
@property (nonatomic) NSInteger backgroundStyleOverride; // ivar: _backgroundStyleOverride
@property (nonatomic) CGFloat bottomLuminanceValue; // ivar: _bottomLuminanceValue
@property (nonatomic) NSInteger dateTimeStyleOverride; // ivar: _dateTimeStyleOverride
@property (nonatomic) CGFloat dimDuration; // ivar: _dimDuration
@property (nonatomic) CGFloat directFlingDampeningFactor; // ivar: _directFlingDampeningFactor
@property (nonatomic) CGFloat directThreshold; // ivar: _directThreshold
@property (nonatomic) BOOL forceLuminanceReduction; // ivar: _forceLuminanceReduction
@property (nonatomic) NSInteger homeGestureModeOverride; // ivar: _homeGestureModeOverride
@property (nonatomic) CGFloat legacyThreshold; // ivar: _legacyThreshold
@property (nonatomic) CGFloat lighterBottomLuminanceValue; // ivar: _lighterBottomLuminanceValue
@property (nonatomic) CGFloat lighterLowerLuminanceValue; // ivar: _lighterLowerLuminanceValue
@property (nonatomic) CGFloat lighterTopLuminanceValue; // ivar: _lighterTopLuminanceValue
@property (nonatomic) CGFloat lighterUpperLuminanceValue; // ivar: _lighterUpperLuminanceValue
@property (nonatomic) CGFloat lowerLuminanceValue; // ivar: _lowerLuminanceValue
@property (nonatomic) BOOL overrideContentPreferences; // ivar: _overrideContentPreferences
@property (nonatomic) CGFloat topLuminanceValue; // ivar: _topLuminanceValue
@property (nonatomic) CGFloat undimDuration; // ivar: _undimDuration
@property (nonatomic) BOOL undimsOnTap; // ivar: _undimsOnTap
@property (nonatomic) CGFloat upperLuminanceValue; // ivar: _upperLuminanceValue
@property (nonatomic) BOOL usesLegacyDismissalLogic; // ivar: _usesLegacyDismissalLogic


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif