// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXKEYBOARDSETTINGS_H
#define PXKEYBOARDSETTINGS_H



#import "PXSettings.h"

@interface PXKeyboardSettings : PXSettings

@property (nonatomic) NSInteger allPhotosAspectFillFocusAnimationStyle; // ivar: _allPhotosAspectFillFocusAnimationStyle
@property (nonatomic) CGFloat allPhotosAspectFillFocusPadding; // ivar: _allPhotosAspectFillFocusPadding
@property (nonatomic) NSInteger allPhotosAspectFitFocusAnimationStyle; // ivar: _allPhotosAspectFitFocusAnimationStyle
@property (nonatomic) CGFloat allPhotosAspectFitFocusPadding; // ivar: _allPhotosAspectFitFocusPadding
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) CGFloat dampingRatio; // ivar: _dampingRatio
@property (nonatomic) NSInteger daysFocusAnimationStyle; // ivar: _daysFocusAnimationStyle
@property (nonatomic) CGFloat daysFocusPadding; // ivar: _daysFocusPadding
@property (nonatomic) CGFloat detailsViewOverlayAlpha; // ivar: _detailsViewOverlayAlpha
@property (nonatomic) CGFloat dimmingFactor; // ivar: _dimmingFactor
@property (nonatomic) BOOL enableShadow; // ivar: _enableShadow
@property (nonatomic) BOOL enableTungstenFocusEnvironmentSupport; // ivar: _enableTungstenFocusEnvironmentSupport
@property (nonatomic) BOOL enableTungstenKeyboardNavigation; // ivar: _enableTungstenKeyboardNavigation
@property (nonatomic) NSInteger monthsFocusAnimationStyle; // ivar: _monthsFocusAnimationStyle
@property (nonatomic) CGFloat monthsFocusPadding; // ivar: _monthsFocusPadding
@property (nonatomic) CGFloat shadowBlurRadius; // ivar: _shadowBlurRadius
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowYOffset; // ivar: _shadowYOffset
@property (nonatomic) NSInteger yearsFocusAnimationStyle; // ivar: _yearsFocusAnimationStyle
@property (nonatomic) CGFloat yearsFocusPadding; // ivar: _yearsFocusPadding


+(id)_makeAnimationStyleChoiceRowWithTitle:(id)arg0 valueKeyPath:(id)arg1 ;
+(id)_makeGlobalFocusAnimationSection;
+(id)_makeLocalFocusAnimationSection;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)archiveValueForKey:(id)arg0 ;
-(id)globalFocusAnimationShadow;
-(id)parentSettings;
-(void)applyArchiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDefaultValues;


@end


#endif