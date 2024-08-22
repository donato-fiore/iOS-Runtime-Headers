// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUBROWSINGVIEWMODELCHANGE_H
#define PUBROWSINGVIEWMODELCHANGE_H

@class NSMutableDictionary, NSMapTable, NSDictionary;


#import "PUViewModelChange.h"

@interface PUBrowsingViewModelChange : PUViewModelChange {
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
}


@property (readonly, nonatomic) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (readonly, nonatomic) NSMapTable *assetSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSDictionary *assetViewModelChangesByAssetReference;
@property (nonatomic, setter=_setAssetsDataSourceDidChange:) BOOL assetsDataSourceDidChange; // ivar: _assetsDataSourceDidChange
@property (nonatomic, setter=_setBrowsingSpeedRegimeDidChange:) BOOL browsingSpeedRegimeDidChange; // ivar: _browsingSpeedRegimeDidChange
@property (nonatomic, setter=_setChromeVisibilityDidChange:) BOOL chromeVisibilityDidChange; // ivar: _chromeVisibilityDidChange
@property (nonatomic, setter=_setCurrentAssetDidChange:) BOOL currentAssetDidChange; // ivar: _currentAssetDidChange
@property (nonatomic, setter=_setCurrentAssetTransitionProgressDidChange:) BOOL currentAssetTransitionProgressDidChange; // ivar: _currentAssetTransitionProgressDidChange
@property (nonatomic, setter=_setAnimatingAnyTransitionDidChange:) BOOL isAnimatingAnyTransitionDidChange; // ivar: _isAnimatingAnyTransitionDidChange
@property (nonatomic, setter=_setIsAttemptingToPlayVideoOverlayDidChange:) BOOL isAttemptingToPlayVideoOverlayDidChange; // ivar: _isAttemptingToPlayVideoOverlayDidChange
@property (nonatomic, setter=_setIsScrollingDidChange:) BOOL isScrollingDidChange; // ivar: _isScrollingDidChange
@property (nonatomic, setter=_setIsScrubbingActivationDidChange:) BOOL isScrubbingActivationDidChange; // ivar: _isScrubbingActivationDidChange
@property (nonatomic, setter=_setIsScrubbingDidChange:) BOOL isScrubbingDidChange; // ivar: _isScrubbingDidChange
@property (nonatomic) BOOL isVideoContentAllowedDidChange; // ivar: _isVideoContentAllowedDidChange
@property (nonatomic, setter=_setNavigationBarTitleDidChange:) BOOL navigationBarTitleDidChange; // ivar: _navigationBarTitleDidChange
@property (nonatomic, setter=_setPresentingOverOneUpDidChange:) BOOL presentingOverOneUpDidChange; // ivar: _presentingOverOneUpDidChange
@property (nonatomic, setter=_setResizeTaskDescriptorViewModelDidChange:) BOOL resizeTaskDescriptorViewModelDidChange; // ivar: _resizeTaskDescriptorViewModelDidChange
@property (nonatomic, setter=_setReviewScreenBarsModelDidChange:) BOOL reviewScreenBarsModelDidChange; // ivar: _reviewScreenBarsModelDidChange
@property (nonatomic, setter=_setReviewScreenSelectionDidChange:) BOOL reviewScreenSelectionDidChange; // ivar: _reviewScreenSelectionDidChange
@property (nonatomic, setter=_setSecondScreenSizeDidChange:) BOOL secondScreenSizeDidChange; // ivar: _secondScreenSizeDidChange
@property (nonatomic, setter=_setTransitionDriverIdentifierDidChange:) BOOL transitionDriverIdentifierDidChange; // ivar: _transitionDriverIdentifierDidChange
@property (nonatomic, setter=_setVideoOverlayPlayStateDidChange:) BOOL videoOverlayPlayStateDidChange; // ivar: _videoOverlayPlayStateDidChange


-(BOOL)hasChanges;


@end


#endif