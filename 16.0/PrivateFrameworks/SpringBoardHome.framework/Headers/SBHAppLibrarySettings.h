// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHAPPLIBRARYSETTINGS_H
#define SBHAPPLIBRARYSETTINGS_H

@class PTSettings;



@interface SBHAppLibrarySettings : PTSettings

@property (nonatomic) CGFloat criticalDismissalThresholdDurationFactor; // ivar: _criticalDismissalThresholdDurationFactor
@property (nonatomic) NSUInteger minimumNumberOfIconsToShowSectionHeaderInDeweySearch; // ivar: _minimumNumberOfIconsToShowSectionHeaderInDeweySearch
@property (nonatomic) CGFloat minimumTranslationFractionForSwipeToDismiss; // ivar: _minimumTranslationFractionForSwipeToDismiss
@property (nonatomic) CGFloat minimumVelocityForSwipeToDismiss; // ivar: _minimumVelocityForSwipeToDismiss


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif