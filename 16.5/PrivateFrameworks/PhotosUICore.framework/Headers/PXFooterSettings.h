// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFOOTERSETTINGS_H
#define PXFOOTERSETTINGS_H



#import "PXSettings.h"

@interface PXFooterSettings : PXSettings

@property (nonatomic) CGFloat alternateTitleCyclingInterval; // ivar: _alternateTitleCyclingInterval
@property (nonatomic) NSInteger alternateTitleGridCycleCount; // ivar: _alternateTitleGridCycleCount
@property (nonatomic) CGFloat alternateTitleGridCycleDelay; // ivar: _alternateTitleGridCycleDelay
@property (nonatomic) CGFloat animationDelay; // ivar: _animationDelay
@property (nonatomic) float minimumDisplayedProgress; // ivar: _minimumDisplayedProgress
@property (nonatomic) BOOL shouldAlternateTitleWithGridCycle; // ivar: _shouldAlternateTitleWithGridCycle
@property (nonatomic) BOOL showFilterView; // ivar: _showFilterView
@property (nonatomic) BOOL simulateAnimatedIconMode; // ivar: _simulateAnimatedIconMode
@property (nonatomic) BOOL simulateImportantInformation; // ivar: _simulateImportantInformation
@property (nonatomic) NSInteger simulatedAnimatedIconMode; // ivar: _simulatedAnimatedIconMode


+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)resetLastShownInfo;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif