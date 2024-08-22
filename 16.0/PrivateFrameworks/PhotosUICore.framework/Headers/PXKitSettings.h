// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXKITSETTINGS_H
#define PXKITSETTINGS_H



#import "PXSettings.h"

@interface PXKitSettings : PXSettings

@property (nonatomic) BOOL allowCapitalization; // ivar: _allowCapitalization
@property (nonatomic) BOOL allowFontFallback; // ivar: _allowFontFallback
@property (nonatomic) BOOL defaultAsyncTextRenderingEnabled; // ivar: _defaultAsyncTextRenderingEnabled
@property (nonatomic) NSInteger defaultLabelTypesettingMode; // ivar: _defaultLabelTypesettingMode
@property (nonatomic) BOOL defaultTextAutoscalingEnabled; // ivar: _defaultTextAutoscalingEnabled
@property (nonatomic) CGFloat defaultTextMinimumScaleFactor; // ivar: _defaultTextMinimumScaleFactor
@property (nonatomic) BOOL defaultTextTruncationEnabled; // ivar: _defaultTextTruncationEnabled
@property (nonatomic) CGFloat defaultTruncatedTextMinimumScaleFactor; // ivar: _defaultTruncatedTextMinimumScaleFactor
@property (nonatomic) BOOL defaultUseShapeLayerForText; // ivar: _defaultUseShapeLayerForText
@property (nonatomic) NSInteger deviceGraphicsQuality; // ivar: _deviceGraphicsQuality
@property (nonatomic) BOOL displayLinkUsesUpdateCycle; // ivar: _displayLinkUsesUpdateCycle
@property (nonatomic) BOOL drawTypographicGuidelines; // ivar: _drawTypographicGuidelines
@property (nonatomic) BOOL honorSilentMode; // ivar: _honorSilentMode
@property (nonatomic) BOOL simulateDroppedFramesDuringPPT; // ivar: _simulateDroppedFramesDuringPPT
@property (nonatomic) BOOL simulateSilentMode; // ivar: _simulateSilentMode
@property (nonatomic) BOOL simulateSlowTextTypesetting; // ivar: _simulateSlowTextTypesetting
@property (nonatomic) CGFloat simulatedDroppedFramesDurationInMilliseconds; // ivar: _simulatedDroppedFramesDurationInMilliseconds
@property (nonatomic) NSInteger simulatedDroppedFramesPeriod; // ivar: _simulatedDroppedFramesPeriod
@property (nonatomic) CGFloat simulatedPeripheryExtraBottomInset; // ivar: _simulatedPeripheryExtraBottomInset
@property (nonatomic) CGFloat simulatedPeripheryExtraLeftInset; // ivar: _simulatedPeripheryExtraLeftInset
@property (nonatomic) CGFloat simulatedPeripheryExtraRightInset; // ivar: _simulatedPeripheryExtraRightInset
@property (nonatomic) CGFloat simulatedPeripheryExtraTopInset; // ivar: _simulatedPeripheryExtraTopInset
@property (nonatomic) CGFloat simulatedSafeAreaHorizontalInsets; // ivar: _simulatedSafeAreaHorizontalInsets
@property (nonatomic) CGFloat textAutoscalingPrecision; // ivar: _textAutoscalingPrecision
@property (nonatomic) BOOL useFancyDarkening; // ivar: _useFancyDarkening


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif