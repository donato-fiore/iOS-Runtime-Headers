// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSCRUBBERLAYOUTSETTINGS_H
#define PXSTORYSCRUBBERLAYOUTSETTINGS_H



#import "PXSettings.h"

@interface PXStoryScrubberLayoutSettings : PXSettings

@property (nonatomic) CGFloat assetCornerRadius; // ivar: _assetCornerRadius
@property (nonatomic) CGFloat currentAssetPadding; // ivar: _currentAssetPadding
@property (nonatomic) CGFloat currentAssetWidthLandscape; // ivar: _currentAssetWidthLandscape
@property (nonatomic) CGFloat currentAssetWidthPortrait; // ivar: _currentAssetWidthPortrait
@property (nonatomic) CGFloat defaultAssetPadding; // ivar: _defaultAssetPadding
@property (nonatomic) CGFloat defaultAssetWidthLandscape; // ivar: _defaultAssetWidthLandscape
@property (nonatomic) CGFloat defaultAssetWidthPortrait; // ivar: _defaultAssetWidthPortrait
@property (nonatomic) CGFloat scrubberHeightLandscape; // ivar: _scrubberHeightLandscape
@property (nonatomic) CGFloat scrubberHeightPortrait; // ivar: _scrubberHeightPortrait


+(id)_sliderFor:(id)arg0 path:(id)arg1 ;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif