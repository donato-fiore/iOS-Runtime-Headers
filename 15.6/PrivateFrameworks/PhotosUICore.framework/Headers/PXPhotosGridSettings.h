// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDSETTINGS_H
#define PXPHOTOSGRIDSETTINGS_H

@class NSString;


#import "PXSettings.h"

@interface PXPhotosGridSettings : PXSettings

@property (copy, nonatomic) NSString *actionMenuGlyphName; // ivar: _actionMenuGlyphName
@property (nonatomic) BOOL alwaysShowFilterIndicatorButton; // ivar: _alwaysShowFilterIndicatorButton
@property (nonatomic) BOOL backdropStyleForPlacesAndImports; // ivar: _backdropStyleForPlacesAndImports
@property (nonatomic) CGFloat behindContentBackgroundGradientAlpha; // ivar: _behindContentBackgroundGradientAlpha
@property (nonatomic) BOOL colorNavbarArea; // ivar: _colorNavbarArea
@property (nonatomic) CGFloat defaultAnimationDuration; // ivar: _defaultAnimationDuration
@property (nonatomic) BOOL emulatesEmptyLibrary; // ivar: _emulatesEmptyLibrary
@property (nonatomic) BOOL enableAspectFitButton; // ivar: _enableAspectFitButton
@property (nonatomic) BOOL enableAspectFitToggle; // ivar: _enableAspectFitToggle
@property (nonatomic) BOOL enableContentFiltering; // ivar: _enableContentFiltering
@property (nonatomic) BOOL enableDetailsMenuAction; // ivar: _enableDetailsMenuAction
@property (nonatomic) BOOL enableFilterButton; // ivar: _enableFilterButton
@property (nonatomic) BOOL enableFilterIcons; // ivar: _enableFilterIcons
@property (nonatomic) BOOL enableFilterIndicatorButton; // ivar: _enableFilterIndicatorButton
@property (nonatomic) BOOL enableFilterViewControllerAnchoringToSender; // ivar: _enableFilterViewControllerAnchoringToSender
@property (nonatomic) BOOL enableGridZero; // ivar: _enableGridZero
@property (nonatomic) BOOL enableInAppPicker; // ivar: _enableInAppPicker
@property (nonatomic) BOOL enableInCMM; // ivar: _enableInCMM
@property (nonatomic) BOOL enableInImagePicker; // ivar: _enableInImagePicker
@property (nonatomic) BOOL enableInImportHistory; // ivar: _enableInImportHistory
@property (nonatomic) BOOL enableInMediaTypes; // ivar: _enableInMediaTypes
@property (nonatomic) BOOL enableInMyPhotoStream; // ivar: _enableInMyPhotoStream
@property (nonatomic) BOOL enableInOtherAlbums; // ivar: _enableInOtherAlbums
@property (nonatomic) BOOL enableInPanoramas; // ivar: _enableInPanoramas
@property (nonatomic) BOOL enableInPlaces; // ivar: _enableInPlaces
@property (nonatomic) BOOL enableInRecentlyDeleted; // ivar: _enableInRecentlyDeleted
@property (nonatomic) BOOL enableInSearch; // ivar: _enableInSearch
@property (nonatomic) BOOL enableInSharedAlbums; // ivar: _enableInSharedAlbums
@property (nonatomic) BOOL enableInStandInAlbums; // ivar: _enableInStandInAlbums
@property (nonatomic) BOOL enableInTopLevelSmartAlbums; // ivar: _enableInTopLevelSmartAlbums
@property (nonatomic) BOOL enableInUserAlbums; // ivar: _enableInUserAlbums
@property (nonatomic) BOOL enableInUserSmartAlbums; // ivar: _enableInUserSmartAlbums
@property (nonatomic) BOOL enableInvisibleNavBars; // ivar: _enableInvisibleNavBars
@property (nonatomic) BOOL enableNewActionMenu; // ivar: _enableNewActionMenu
@property (nonatomic) BOOL enableSortAction; // ivar: _enableSortAction
@property (nonatomic) BOOL enableSuperzoom; // ivar: _enableSuperzoom
@property (nonatomic) BOOL enableTitleLegibilityDimmingFilter; // ivar: _enableTitleLegibilityDimmingFilter
@property (nonatomic) BOOL enableZoomInOutButton; // ivar: _enableZoomInOutButton
@property (nonatomic) CGFloat filteringTimeoutDuration; // ivar: _filteringTimeoutDuration
@property (nonatomic) CGFloat headerGradientAlpha; // ivar: _headerGradientAlpha
@property (nonatomic) CGFloat headerGradientHeight; // ivar: _headerGradientHeight
@property (nonatomic) CGFloat headerTitleBottomSpacing; // ivar: _headerTitleBottomSpacing
@property (nonatomic) CGFloat headerTitleTopSpacing; // ivar: _headerTitleTopSpacing
@property (nonatomic) CGFloat sectionHeaderGradientAlpha; // ivar: _sectionHeaderGradientAlpha
@property (nonatomic) CGFloat sectionHeaderGradientOverhang; // ivar: _sectionHeaderGradientOverhang
@property (nonatomic) BOOL useGradientSectionHeaders; // ivar: _useGradientSectionHeaders


+(id)_enableTungstenNewFeaturesAction;
+(id)_enableTungstenNewFeaturesActionPredicate;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif