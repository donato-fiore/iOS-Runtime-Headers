// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGESTUREEXCLUSIONTRAPEZOIDSETTINGS_H
#define SBHOMEGESTUREEXCLUSIONTRAPEZOIDSETTINGS_H

@class PTSettings;



@interface SBHomeGestureExclusionTrapezoidSettings : PTSettings

@property (nonatomic) BOOL allowHorizontalSwipesOutsideLandscapeTrapezoid; // ivar: _allowHorizontalSwipesOutsideLandscapeTrapezoid
@property (nonatomic) BOOL allowHorizontalSwipesOutsidePortraitTrapezoid; // ivar: _allowHorizontalSwipesOutsidePortraitTrapezoid
@property (nonatomic) CGFloat landscapeTrapezoidAdjacentXDistanceFromEdge; // ivar: _landscapeTrapezoidAdjacentXDistanceFromEdge
@property (nonatomic) CGFloat landscapeTrapezoidBaseHeight; // ivar: _landscapeTrapezoidBaseHeight
@property (nonatomic) BOOL landscapeTrapezoidEnabled; // ivar: _landscapeTrapezoidEnabled
@property (nonatomic) CGFloat landscapeTrapezoidHeight; // ivar: _landscapeTrapezoidHeight
@property (nonatomic) CGFloat landscapeTrapezoidOpposingXDistanceFromEdge; // ivar: _landscapeTrapezoidOpposingXDistanceFromEdge
@property (nonatomic) CGFloat portraitTrapezoidAdjacentXDistanceFromEdge; // ivar: _portraitTrapezoidAdjacentXDistanceFromEdge
@property (nonatomic) CGFloat portraitTrapezoidBaseHeight; // ivar: _portraitTrapezoidBaseHeight
@property (nonatomic) BOOL portraitTrapezoidEnabled; // ivar: _portraitTrapezoidEnabled
@property (nonatomic) BOOL portraitTrapezoidEnabledOnlyForKeyboards; // ivar: _portraitTrapezoidEnabledOnlyForKeyboards
@property (nonatomic) CGFloat portraitTrapezoidHeight; // ivar: _portraitTrapezoidHeight
@property (nonatomic) CGFloat portraitTrapezoidOpposingXDistanceFromEdge; // ivar: _portraitTrapezoidOpposingXDistanceFromEdge
@property (nonatomic) BOOL showExclusionTrapezoidDebugView; // ivar: _showExclusionTrapezoidDebugView


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif