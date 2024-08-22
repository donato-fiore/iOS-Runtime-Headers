// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYRESULTOPERATIONINFO_H
#define NTPBTODAYRESULTOPERATIONINFO_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBTodayModuleContentRequest.h"
#import "NTPBSectionSlotCostInfo.h"

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowOnlyWatchEligibleSections; // ivar: _allowOnlyWatchEligibleSections
@property (nonatomic) BOOL allowSectionTitles; // ivar: _allowSectionTitles
@property (retain, nonatomic) NSString *assetsDirectoryFileURLString; // ivar: _assetsDirectoryFileURLString
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels; // ivar: _dynamicThumbnailSizePresetMinimumHeightInPixels
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels; // ivar: _dynamicThumbnailSizePresetMinimumWidthInPixels
@property (nonatomic) NSInteger embedsLimit; // ivar: _embedsLimit
@property (nonatomic) BOOL fetchWidgetConfig; // ivar: _fetchWidgetConfig
@property (nonatomic) BOOL hasAllowOnlyWatchEligibleSections;
@property (nonatomic) BOOL hasAllowSectionTitles;
@property (readonly, nonatomic) BOOL hasAssetsDirectoryFileURLString;
@property (nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) BOOL hasEmbedsLimit;
@property (nonatomic) BOOL hasFetchWidgetConfig;
@property (readonly, nonatomic) BOOL hasKeyboardInputMode;
@property (nonatomic) BOOL hasLeadingCellThumbnailSizePreset;
@property (nonatomic) BOOL hasMaxHeadlineScale;
@property (nonatomic) BOOL hasMinHeadlineScale;
@property (nonatomic) BOOL hasPreferCompactSectionName;
@property (nonatomic) BOOL hasPreferCompactSourceName;
@property (nonatomic) BOOL hasQualityOfService;
@property (readonly, nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL hasRespectsWidgetSlotsLimit;
@property (nonatomic) BOOL hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property (nonatomic) BOOL hasScale;
@property (readonly, nonatomic) BOOL hasSectionSlotCostInfo;
@property (nonatomic) BOOL hasSlotsLimit;
@property (nonatomic) BOOL hasSourceNameImageSizePreset;
@property (nonatomic) BOOL hasThumbnailSizePreset;
@property (nonatomic) BOOL hasWidgetSize;
@property (retain, nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (nonatomic) NSInteger leadingCellThumbnailSizePreset; // ivar: _leadingCellThumbnailSizePreset
@property (nonatomic) CGFloat maxHeadlineScale; // ivar: _maxHeadlineScale
@property (nonatomic) CGFloat minHeadlineScale; // ivar: _minHeadlineScale
@property (nonatomic) BOOL preferCompactSectionName; // ivar: _preferCompactSectionName
@property (nonatomic) BOOL preferCompactSourceName; // ivar: _preferCompactSourceName
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) NTPBTodayModuleContentRequest *request; // ivar: _request
@property (nonatomic) BOOL respectsWidgetSlotsLimit; // ivar: _respectsWidgetSlotsLimit
@property (nonatomic) BOOL respectsWidgetVisibleSectionsPerQueueLimit; // ivar: _respectsWidgetVisibleSectionsPerQueueLimit
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo; // ivar: _sectionSlotCostInfo
@property (nonatomic) CGFloat slotsLimit; // ivar: _slotsLimit
@property (nonatomic) NSInteger sourceNameImageSizePreset; // ivar: _sourceNameImageSizePreset
@property (nonatomic) NSInteger thumbnailSizePreset; // ivar: _thumbnailSizePreset
@property (nonatomic) int widgetSize; // ivar: _widgetSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif