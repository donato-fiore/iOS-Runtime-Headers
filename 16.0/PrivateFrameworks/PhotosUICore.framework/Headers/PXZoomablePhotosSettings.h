// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXZOOMABLEPHOTOSSETTINGS_H
#define PXZOOMABLEPHOTOSSETTINGS_H

@class NSArray;


#import "PXSettings.h"

@interface PXZoomablePhotosSettings : PXSettings

@property (nonatomic) CGFloat alphaCrossfadeMaxDuration; // ivar: _alphaCrossfadeMaxDuration
@property (nonatomic) CGFloat alphaCrossfadeMinDuration; // ivar: _alphaCrossfadeMinDuration
@property (nonatomic) CGFloat alphaDistanceForDirectionChange; // ivar: _alphaDistanceForDirectionChange
@property (nonatomic) CGFloat alphaMaxAcceptableScale; // ivar: _alphaMaxAcceptableScale
@property (nonatomic) CGFloat alphaMinAcceptableCoverage; // ivar: _alphaMinAcceptableCoverage
@property (nonatomic) CGFloat alphaModeTransitionDuration; // ivar: _alphaModeTransitionDuration
@property (nonatomic) CGFloat cardsAspectRatio; // ivar: _cardsAspectRatio
@property (nonatomic) CGFloat cardsCornerRadius; // ivar: _cardsCornerRadius
@property (nonatomic) CGFloat cardsInteritemSpacing; // ivar: _cardsInteritemSpacing
@property (retain, nonatomic) NSArray *columns; // ivar: _columns
@property (nonatomic) NSInteger columnsChoiceIndex; // ivar: _columnsChoiceIndex
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat decadesDensityScale; // ivar: _decadesDensityScale
@property (nonatomic) CGFloat denseLevelMinimumScreensOfContent; // ivar: _denseLevelMinimumScreensOfContent
@property (nonatomic) BOOL enableAddedDateZoomingHeader; // ivar: _enableAddedDateZoomingHeader
@property (nonatomic) BOOL enableAutoCrossfade; // ivar: _enableAutoCrossfade
@property (nonatomic) BOOL enableBadges; // ivar: _enableBadges
@property (nonatomic) BOOL enableCrossfadeFallback; // ivar: _enableCrossfadeFallback
@property (nonatomic) BOOL enableDebugLayers; // ivar: _enableDebugLayers
@property (nonatomic) BOOL enableDebugSprites; // ivar: _enableDebugSprites
@property (nonatomic) BOOL enableDecadesDensity; // ivar: _enableDecadesDensity
@property (nonatomic) BOOL enableDenseLevelsInSelectMode; // ivar: _enableDenseLevelsInSelectMode
@property (nonatomic) BOOL enableHeaderBlur; // ivar: _enableHeaderBlur
@property (nonatomic) BOOL enableInlineVideo; // ivar: _enableInlineVideo
@property (nonatomic) BOOL enableOneColumn; // ivar: _enableOneColumn
@property (nonatomic) BOOL enablePinch; // ivar: _enablePinch
@property (nonatomic) BOOL forceSaliency; // ivar: _forceSaliency
@property (nonatomic) CGFloat headerSpaceMinimumScreensOfContent; // ivar: _headerSpaceMinimumScreensOfContent
@property (nonatomic) BOOL hideBadgesDuringZoom; // ivar: _hideBadgesDuringZoom
@property (nonatomic) CGFloat individualLevelMinimumScreensOfContent; // ivar: _individualLevelMinimumScreensOfContent
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat macPinchGestureDampening; // ivar: _macPinchGestureDampening
@property (nonatomic) NSInteger maxColumnsForIndividualItems; // ivar: _maxColumnsForIndividualItems
@property (nonatomic) NSInteger maxColumnsForSaliency; // ivar: _maxColumnsForSaliency
@property (nonatomic) NSInteger maxColumnsForSingleDate; // ivar: _maxColumnsForSingleDate
@property (nonatomic) NSInteger maxPhotoCount; // ivar: _maxPhotoCount
@property (nonatomic) CGFloat minAcceptableCoverage; // ivar: _minAcceptableCoverage
@property (nonatomic) NSInteger onlyPhotosFromToday; // ivar: _onlyPhotosFromToday
@property (nonatomic) CGFloat panoramaCompactInteritemSpacing; // ivar: _panoramaCompactInteritemSpacing
@property (nonatomic) CGFloat panoramaRegularInteritemSpacing; // ivar: _panoramaRegularInteritemSpacing
@property (nonatomic) CGFloat pinchSmoothingDuration; // ivar: _pinchSmoothingDuration
@property (nonatomic) NSInteger preheatDenserZoomLevels; // ivar: _preheatDenserZoomLevels
@property (nonatomic) BOOL preheatThumbnailsWhenIdle; // ivar: _preheatThumbnailsWhenIdle
@property (nonatomic) CGFloat recenterSpringDamping; // ivar: _recenterSpringDamping
@property (nonatomic) CGFloat recenterSpringStiffness; // ivar: _recenterSpringStiffness
@property (nonatomic) NSInteger rubberBandEffect; // ivar: _rubberBandEffect
@property (nonatomic) CGFloat shiftingRequiredScreensTopDistance; // ivar: _shiftingRequiredScreensTopDistance
@property (nonatomic) NSInteger simulateMinimumPhotoCount; // ivar: _simulateMinimumPhotoCount
@property (nonatomic) CGFloat sliderSmoothingDuration; // ivar: _sliderSmoothingDuration
@property (nonatomic) BOOL tapsZoomsToLastIndividualDensity; // ivar: _tapsZoomsToLastIndividualDensity
@property (nonatomic) BOOL titleUseDateRange; // ivar: _titleUseDateRange
@property (nonatomic) CGFloat zoomDecelerationRate; // ivar: _zoomDecelerationRate
@property (nonatomic) CGFloat zoomInRubberBanding; // ivar: _zoomInRubberBanding
@property (nonatomic) CGFloat zoomOutRubberBanding; // ivar: _zoomOutRubberBanding
@property (nonatomic) CGFloat zoomSpringDamping; // ivar: _zoomSpringDamping
@property (nonatomic) CGFloat zoomSpringStiffness; // ivar: _zoomSpringStiffness
@property (nonatomic) CGFloat zoomingHeaderTintOpacity; // ivar: _zoomingHeaderTintOpacity


+(id)columnChoices;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)validColumns;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif