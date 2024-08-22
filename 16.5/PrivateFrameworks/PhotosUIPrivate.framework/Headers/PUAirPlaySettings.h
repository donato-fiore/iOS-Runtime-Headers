// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUAIRPLAYSETTINGS_H
#define PUAIRPLAYSETTINGS_H

@class PXSettings;



@interface PUAirPlaySettings : PXSettings

@property (nonatomic) BOOL compensateForOverscan; // ivar: _compensateForOverscan
@property (nonatomic) BOOL ignoreMirroredScreens; // ivar: _ignoreMirroredScreens
@property (nonatomic) BOOL ignoreScreenRecordingScreens; // ivar: _ignoreScreenRecordingScreens
@property (nonatomic) CGFloat maximumZoomForScrollPadding; // ivar: _maximumZoomForScrollPadding
@property (nonatomic) CGFloat minimumZoomForScrollPadding; // ivar: _minimumZoomForScrollPadding
@property (nonatomic) NSUInteger placeholderForMirroredScreen; // ivar: _placeholderForMirroredScreen
@property (nonatomic) NSUInteger placeholderForSecondScreen; // ivar: _placeholderForSecondScreen
@property (nonatomic) NSInteger routeAvailabilityOverride; // ivar: _routeAvailabilityOverride
@property (nonatomic) CGFloat simulatedScreenContentHeight; // ivar: _simulatedScreenContentHeight
@property (nonatomic) CGFloat simulatedScreenContentWidth; // ivar: _simulatedScreenContentWidth
@property (nonatomic) BOOL switchToMediaPresentationMode; // ivar: _switchToMediaPresentationMode


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)debugDescription;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif