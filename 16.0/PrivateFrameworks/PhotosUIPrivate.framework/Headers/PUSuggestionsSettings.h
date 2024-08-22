// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSUGGESTIONSSETTINGS_H
#define PUSUGGESTIONSSETTINGS_H

@class PXSettings;



@interface PUSuggestionsSettings : PXSettings

@property (nonatomic) BOOL debugBackfillCompositing; // ivar: _debugBackfillCompositing
@property (nonatomic) BOOL debugDisableFrameUpdates; // ivar: _debugDisableFrameUpdates
@property (nonatomic) BOOL debugRoundTripLayerStack; // ivar: _debugRoundTripLayerStack
@property (nonatomic) BOOL debugTintLayers;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL disableSegmentationCache;
@property (nonatomic) BOOL enableColorWashStyles; // ivar: _enableColorWashStyles
@property (nonatomic) BOOL enableCustomStyles;
@property (nonatomic) BOOL includeDebugLayers; // ivar: _includeDebugLayers
@property (nonatomic) NSInteger infillMode;
@property (nonatomic) BOOL isFeatureEnabled; // ivar: _isFeatureEnabled
@property (nonatomic) CGFloat manualGatingLenience;
@property (nonatomic) CGFloat parallaxAmount; // ivar: _parallaxAmount
@property (nonatomic) NSInteger sourceMode; // ivar: _sourceMode
@property (nonatomic) NSInteger viewMode; // ivar: _viewMode


+(id)_debugRowsForCurrentAsset;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif