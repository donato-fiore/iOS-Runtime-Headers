// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONEDITINGSETTINGS_H
#define SBHICONEDITINGSETTINGS_H

@class PTSettings, PTOutlet;



@interface SBHIconEditingSettings : PTSettings

@property (nonatomic) CGFloat clusterFastestDuration; // ivar: _clusterFastestDuration
@property (nonatomic) CGFloat clusterMiddleFastDuration; // ivar: _clusterMiddleFastDuration
@property (nonatomic) CGFloat clusterMiddleSlowDuration; // ivar: _clusterMiddleSlowDuration
@property (nonatomic) CGFloat clusterSlowestDuration; // ivar: _clusterSlowestDuration
@property (nonatomic) CGFloat defaultPauseDuration; // ivar: _defaultPauseDuration
@property (nonatomic) CGFloat defaultSpringDampingRatio; // ivar: _defaultSpringDampingRatio
@property (nonatomic) CGFloat defaultSpringDuration; // ivar: _defaultSpringDuration
@property (nonatomic) CGFloat editingLiftDelay; // ivar: _editingLiftDelay
@property (nonatomic) CGFloat fastEditingPauseDuration; // ivar: _fastEditingPauseDuration
@property (nonatomic) CGFloat longPressToEditDuration; // ivar: _longPressToEditDuration
@property (nonatomic) NSInteger overrideAnimationType; // ivar: _overrideAnimationType
@property (retain, nonatomic) PTOutlet *resetHomeScreenLayoutOutlet; // ivar: _resetHomeScreenLayoutOutlet
@property (nonatomic) BOOL showDragPlatterIconBorder; // ivar: _showDragPlatterIconBorder
@property (nonatomic) BOOL showIndexLabels; // ivar: _showIndexLabels
@property (nonatomic) BOOL waitForPause; // ivar: _waitForPause


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif