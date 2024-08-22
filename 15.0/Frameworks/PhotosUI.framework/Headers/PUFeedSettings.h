// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFEEDSETTINGS_H
#define PUFEEDSETTINGS_H

@class PXSettings;



@interface PUFeedSettings : PXSettings

@property (nonatomic) BOOL allowsInfiniteScrolling; // ivar: _allowsInfiniteScrolling
@property (nonatomic) CGFloat fastScrollPreheatingWindowSize; // ivar: _fastScrollPreheatingWindowSize
@property (nonatomic) NSInteger feedContent; // ivar: _feedContent
@property (nonatomic) BOOL forceAllItemsAsVideo; // ivar: _forceAllItemsAsVideo
@property (nonatomic) BOOL forceDefaultPreheatManager; // ivar: _forceDefaultPreheatManager
@property (nonatomic) BOOL forceLivePhotoBadges; // ivar: _forceLivePhotoBadges
@property (nonatomic) BOOL ignoresCaptions; // ivar: _ignoresCaptions
@property (nonatomic) NSInteger infiniteScrollingWindowSizeIncrement; // ivar: _infiniteScrollingWindowSizeIncrement
@property (nonatomic) NSInteger initialWindowSize; // ivar: _initialWindowSize
@property (nonatomic) BOOL loopsEnabled; // ivar: _loopsEnabled
@property (nonatomic) NSInteger maximumScrollRegimeForQualityImageFormats; // ivar: _maximumScrollRegimeForQualityImageFormats
@property (nonatomic) CGFloat mediumScrollPreheatingWindowSize; // ivar: _mediumScrollPreheatingWindowSize
@property (nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (nonatomic) NSInteger parallaxModel; // ivar: _parallaxModel
@property (nonatomic) CGFloat preheatingMinimumScrollFactor; // ivar: _preheatingMinimumScrollFactor
@property (nonatomic) BOOL shouldPreheatAssets; // ivar: _shouldPreheatAssets
@property (nonatomic) BOOL shouldPreheatComments; // ivar: _shouldPreheatComments
@property (nonatomic) BOOL shouldPreheatCoreData; // ivar: _shouldPreheatCoreData
@property (nonatomic) BOOL shouldUseJPEGFastFormatForLargeTiles; // ivar: _shouldUseJPEGFastFormatForLargeTiles
@property (nonatomic) BOOL shouldUseJPEGFastFormatForMediumTiles; // ivar: _shouldUseJPEGFastFormatForMediumTiles
@property (nonatomic) BOOL showGroupIDHeaders; // ivar: _showGroupIDHeaders
@property (nonatomic) BOOL simulateSharedStreamsEnabled; // ivar: _simulateSharedStreamsEnabled
@property (nonatomic) CGFloat slowScrollPreheatingWindowSize; // ivar: _slowScrollPreheatingWindowSize
@property (nonatomic) CGFloat smallTileSizeTolerance; // ivar: _smallTileSizeTolerance
@property (nonatomic) CGFloat speedometerFastLowerThreshold; // ivar: _speedometerFastLowerThreshold
@property (nonatomic) CGFloat speedometerFastUpperThreshold; // ivar: _speedometerFastUpperThreshold
@property (nonatomic) CGFloat speedometerMediumLowerThreshold; // ivar: _speedometerMediumLowerThreshold
@property (nonatomic) CGFloat speedometerMediumUpperThreshold; // ivar: _speedometerMediumUpperThreshold
@property (nonatomic) NSInteger testInitialWindowSize; // ivar: _testInitialWindowSize
@property (nonatomic) BOOL useJPEGImageFormats; // ivar: _useJPEGImageFormats
@property (nonatomic) BOOL useQualityImageFormats; // ivar: _useQualityImageFormats
@property (nonatomic) BOOL useSpeedometerFeedback; // ivar: _useSpeedometerFeedback
@property (nonatomic) BOOL vitalityEnabled; // ivar: _vitalityEnabled


+(id)_localizedStrings;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif