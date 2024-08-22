// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETVARIATIONSSETTINGS_H
#define PXASSETVARIATIONSSETTINGS_H



#import "PXSettings.h"

@interface PXAssetVariationsSettings : PXSettings

@property (nonatomic) BOOL addSimulatedProgressComponent; // ivar: _addSimulatedProgressComponent
@property (nonatomic) BOOL invalidateCachedPreviews; // ivar: _invalidateCachedPreviews
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) CGFloat selectionDetailsDismissalDelay; // ivar: _selectionDetailsDismissalDelay
@property (nonatomic) BOOL showLoopBadges; // ivar: _showLoopBadges
@property (nonatomic) BOOL showStatusInDisclosureLabel; // ivar: _showStatusInDisclosureLabel
@property (nonatomic) BOOL simulateLoadingFailure; // ivar: _simulateLoadingFailure
@property (nonatomic) BOOL simulateSavingFailure; // ivar: _simulateSavingFailure
@property (nonatomic) NSInteger suggestionsScheme; // ivar: _suggestionsScheme
@property (nonatomic) BOOL useLiveRenderedPreviews; // ivar: _useLiveRenderedPreviews
@property (nonatomic) BOOL useNeutrinoRendering; // ivar: _useNeutrinoRendering


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif