// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUONEUPVIEWCONTROLLERSPEC_H
#define PUONEUPVIEWCONTROLLERSPEC_H

@class UIColor;


#import "PUViewControllerSpec.h"
#import "PUOneUpViewControllerSpecChange.h"

@interface PUOneUpViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) BOOL allowAccessoryVisibility;
@property (readonly, nonatomic) BOOL allowDoneButton;
@property (readonly, nonatomic) BOOL allowSuggestions;
@property (readonly, nonatomic) BOOL allowTapOnTitle;
@property (readonly, nonatomic) CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property (retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride; // ivar: _backgroundColorOverride
@property (nonatomic, setter=_setBufferingIndicatorSize:) CGSize bufferingIndicatorSize; // ivar: _bufferingIndicatorSize
@property (nonatomic, setter=_setCanDisplayLoadingIndicators:) BOOL canDisplayLoadingIndicators; // ivar: _canDisplayLoadingIndicators
@property (readonly, nonatomic) PUOneUpViewControllerSpecChange *currentChange;
@property (nonatomic) BOOL hideBadgesWhenShowingAccessoryView; // ivar: _hideBadgesWhenShowingAccessoryView
@property (nonatomic) BOOL hideNavigationBarWhenShowingAccessoryView; // ivar: _hideNavigationBarWhenShowingAccessoryView
@property (nonatomic) BOOL hideScrubberWhenShowingAccessoryView; // ivar: _hideScrubberWhenShowingAccessoryView
@property (nonatomic) BOOL hideStatusBarWhenShowingAccessoryView; // ivar: _hideStatusBarWhenShowingAccessoryView
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible; // ivar: _isChromeVisible
@property (nonatomic, setter=setContentLocked:) BOOL isContentLocked; // ivar: _isContentLocked
@property (readonly, nonatomic) BOOL isInCompactLayoutStyle;
@property (nonatomic, setter=setPresentedForPreview:) BOOL isPresentedForPreview; // ivar: _isPresentedForPreview
@property (nonatomic, setter=setShowingPlayPauseButtonInBars:) BOOL isShowingPlayPauseButtonInBars; // ivar: _isShowingPlayPauseButtonInBars
@property (nonatomic, setter=_setMaximumAccessoryToolbarHeight:) CGFloat maximumAccessoryToolbarHeight; // ivar: _maximumAccessoryToolbarHeight
@property (nonatomic, setter=_setMaximumToolbarHeight:) CGFloat maximumToolbarHeight; // ivar: _maximumToolbarHeight
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic, setter=_setPeopleRowSize:) CGSize peopleRowSize; // ivar: _peopleRowSize
@property (readonly, nonatomic) CGSize playButtonSize;
@property (nonatomic) BOOL prefersFloatingiPadInfoPanel; // ivar: _prefersFloatingiPadInfoPanel
@property (nonatomic) BOOL prefersSquareImageInDetails; // ivar: _prefersSquareImageInDetails
@property (nonatomic, setter=_setProgressIndicatorContentInsets:) UIEdgeInsets progressIndicatorContentInsets; // ivar: _progressIndicatorContentInsets
@property (nonatomic, setter=_setProgressIndicatorSize:) CGSize progressIndicatorSize; // ivar: _progressIndicatorSize
@property (readonly, nonatomic) CGSize renderIndicatorSize; // ivar: _renderIndicatorSize
@property (nonatomic, setter=_setShouldAutoplayOnAppear:) BOOL shouldAutoplayOnAppear; // ivar: _shouldAutoplayOnAppear
@property (nonatomic, setter=_setShouldCounterrotateReviewScreenBars:) BOOL shouldCounterrotateReviewScreenBars; // ivar: _shouldCounterrotateReviewScreenBars
@property (readonly, nonatomic) BOOL shouldDisableNavigationBarsVisibility;
@property (nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) BOOL shouldDisplayAssetExplorerReviewScreenBadges; // ivar: _shouldDisplayAssetExplorerReviewScreenBadges
@property (readonly, nonatomic) BOOL shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property (nonatomic, setter=_setShouldDisplayBadges:) BOOL shouldDisplayBadges; // ivar: _shouldDisplayBadges
@property (nonatomic, setter=_setShouldDisplayBufferingIndicators:) BOOL shouldDisplayBufferingIndicators; // ivar: _shouldDisplayBufferingIndicators
@property (nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) BOOL shouldDisplayEmptyPlaceholder; // ivar: _shouldDisplayEmptyPlaceholder
@property (nonatomic, setter=_setShouldDisplayPeopleRow:) BOOL shouldDisplayPeopleRow; // ivar: _shouldDisplayPeopleRow
@property (nonatomic, setter=_setShouldDisplayPlayButtons:) BOOL shouldDisplayPlayButtons; // ivar: _shouldDisplayPlayButtons
@property (nonatomic, setter=_setShouldDisplayProgressIndicators:) BOOL shouldDisplayProgressIndicators; // ivar: _shouldDisplayProgressIndicators
@property (readonly, nonatomic) BOOL shouldDisplayReviewScreenBars;
@property (readonly, nonatomic) BOOL shouldDisplaySelectionIndicators;
@property (readonly, nonatomic) BOOL shouldDisplaySyndicationAttribution; // ivar: _shouldDisplaySyndicationAttribution
@property (nonatomic, setter=_setShouldLayoutReviewScreenControlBarVertically:) BOOL shouldLayoutReviewScreenControlBarVertically; // ivar: _shouldLayoutReviewScreenControlBarVertically
@property (nonatomic, setter=_setShouldPinContentToTop:) BOOL shouldPinContentToTop; // ivar: _shouldPinContentToTop
@property (nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) BOOL shouldPlaceButtonsInNavigationBar; // ivar: _shouldPlaceButtonsInNavigationBar
@property (nonatomic, setter=_setShouldPlaceScrubberInScrubberBar:) BOOL shouldPlaceScrubberInScrubberBar; // ivar: _shouldPlaceScrubberInScrubberBar
@property (readonly, nonatomic) BOOL shouldShowTitleView;
@property (nonatomic, setter=_setShouldUseCompactCommentsTitle:) BOOL shouldUseCompactCommentsTitle; // ivar: _shouldUseCompactCommentsTitle
@property (nonatomic, setter=_setShouldUseCompactTitleView:) BOOL shouldUseCompactTitleView; // ivar: _shouldUseCompactTitleView
@property (nonatomic, setter=_setShouldUseContentGuideInsets:) BOOL shouldUseContentGuideInsets; // ivar: _shouldUseContentGuideInsets
@property (readonly, nonatomic) BOOL shouldUseSpotlightStyling;
@property (nonatomic, setter=_setShouldUseUserTransformTiles:) BOOL shouldUseUserTransformTiles; // ivar: _shouldUseUserTransformTiles
@property (nonatomic, setter=_setTileInitialContentMode:) NSInteger tileInitialContentMode; // ivar: _tileInitialContentMode


-(BOOL)_isAssetExplorerReviewScreen;
-(BOOL)_shouldForceBlackBackground;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)newSpecChange;
-(id)spotlightBackgroundColor;
-(void)updateIfNeeded;


@end


#endif