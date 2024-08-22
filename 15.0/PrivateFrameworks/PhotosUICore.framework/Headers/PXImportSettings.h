// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMPORTSETTINGS_H
#define PXIMPORTSETTINGS_H



#import "PXSettings.h"

@interface PXImportSettings : PXSettings

@property (nonatomic) NSInteger alreadyImportedTruncationMode; // ivar: _alreadyImportedTruncationMode
@property (nonatomic) CGFloat assetEnumerationBatchInterval; // ivar: _assetEnumerationBatchInterval
@property (nonatomic) NSUInteger assetEnumerationBatchSize; // ivar: _assetEnumerationBatchSize
@property (nonatomic) NSInteger assetEnumerationBehavior; // ivar: _assetEnumerationBehavior
@property (nonatomic) BOOL disableAssetDeletion; // ivar: _disableAssetDeletion
@property (nonatomic) BOOL groupItemsByEXIFDate; // ivar: _groupItemsByEXIFDate
@property (nonatomic) BOOL hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem; // ivar: _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem
@property (nonatomic) BOOL importSourceSimulationViaDiagnosticsEnabled; // ivar: _importSourceSimulationViaDiagnosticsEnabled
@property (nonatomic) BOOL lazyLoadAllAssets; // ivar: _lazyLoadAllAssets
@property (nonatomic) BOOL loadActualThumbnails; // ivar: _loadActualThumbnails
@property (nonatomic) BOOL loadRetinaThumbnails; // ivar: _loadRetinaThumbnails
@property (nonatomic) BOOL longPressForOneUpInCompactMode; // ivar: _longPressForOneUpInCompactMode
@property (nonatomic) BOOL longPressForOneUpInPadSpec; // ivar: _longPressForOneUpInPadSpec
@property (nonatomic) BOOL showImportItemFilenames; // ivar: _showImportItemFilenames
@property (nonatomic) BOOL showNewestItemsInGridUntilScrolled; // ivar: _showNewestItemsInGridUntilScrolled
@property (nonatomic) BOOL showProgressTitles; // ivar: _showProgressTitles
@property (nonatomic) BOOL simulateEmptyImportSource; // ivar: _simulateEmptyImportSource
@property (nonatomic) NSInteger simulatedBatteryLevel; // ivar: _simulatedBatteryLevel
@property (nonatomic) BOOL useThumbnailSizesAsImageSizeHints; // ivar: _useThumbnailSizesAsImageSizeHints


+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif