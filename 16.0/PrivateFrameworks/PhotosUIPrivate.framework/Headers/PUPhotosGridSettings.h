// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSGRIDSETTINGS_H
#define PUPHOTOSGRIDSETTINGS_H

@class PXSettings;



@interface PUPhotosGridSettings : PXSettings

@property (nonatomic) BOOL allowDynamicDetailsTitles; // ivar: _allowDynamicDetailsTitles
@property (nonatomic) BOOL badgeAllItemsAsFavorites; // ivar: _badgeAllItemsAsFavorites
@property (nonatomic) CGFloat defaultItemSideSize; // ivar: _defaultItemSideSize
@property (nonatomic) BOOL displayAllItemsAsBursts; // ivar: _displayAllItemsAsBursts
@property (nonatomic) BOOL flashDegradedImages; // ivar: _flashDegradedImages
@property (nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid; // ivar: _forceJPEGThumbnailsInDefaultGrid
@property (nonatomic) NSInteger globalFooterVisibility; // ivar: _globalFooterVisibility
@property (nonatomic) CGFloat leftScrubberRate; // ivar: _leftScrubberRate
@property (nonatomic) CGFloat magnifierRevealPreviewScale; // ivar: _magnifierRevealPreviewScale
@property (nonatomic) CGFloat maximumSpacing; // ivar: _maximumSpacing
@property (nonatomic) CGFloat minimumDistanceToUnfreeze; // ivar: _minimumDistanceToUnfreeze
@property (nonatomic) NSInteger numberColumnsInDefaultGrid; // ivar: _numberColumnsInDefaultGrid
@property (nonatomic) NSInteger numberOfColumnsInWideGrid; // ivar: _numberOfColumnsInWideGrid
@property (nonatomic) CGFloat previewRevealProgressToFreezeMagnifier; // ivar: _previewRevealProgressToFreezeMagnifier
@property (nonatomic) CGFloat rightScrubberRate; // ivar: _rightScrubberRate
@property (nonatomic) BOOL shouldExitEditingModeAfterDuplication; // ivar: _shouldExitEditingModeAfterDuplication
@property (nonatomic) BOOL showTimelineScrubbers; // ivar: _showTimelineScrubbers
@property (nonatomic) BOOL simulateGlobalFooterImportantInformationUpdates; // ivar: _simulateGlobalFooterImportantInformationUpdates
@property (nonatomic) CGFloat simulatedDetailsAttributesLoadingDelay; // ivar: _simulatedDetailsAttributesLoadingDelay
@property (nonatomic, getter=isSwipeSelectionEnabled) BOOL swipeSelectionEnabled; // ivar: _swipeSelectionEnabled
@property (nonatomic) BOOL useFloatingHeaders; // ivar: _useFloatingHeaders


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif