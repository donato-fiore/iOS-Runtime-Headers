// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDLAYOUTOPTIONS_H
#define HUGRIDLAYOUTOPTIONS_H

@class NSString, UIFont, NSNumber;
@protocol HUGridDisplayOptions, NSCopying;

#import <Foundation/Foundation.h>

#import "HUGridBannerCellLayoutOptions.h"
#import "HUGridCameraCellLayoutOptions.h"
#import "HUFilterCategoryCellLayoutOptions.h"
#import "HUGridHeadlineCellLayoutOptions.h"
#import "HUGridMediaPlatterCellLayoutOptions.h"
#import "HUMosaicCameraCellLayoutOptions.h"
#import "HUGridScenePlaceholderLayoutOptions.h"
#import "HUGridPlaceholderServiceCellLayoutOptions.h"
#import "HUGridSceneCellLayoutOptions.h"
#import "HUGridServiceCellLayoutOptions.h"
#import "HUGridStatusCellLayoutOptions.h"
#import "HUGridWelcomeUIBannerCellLayoutOptions.h"

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>



@property (copy, nonatomic) HUGridBannerCellLayoutOptions *bannerCellOptions; // ivar: _bannerCellOptions
@property (readonly, nonatomic) CGFloat cameraCellHeight;
@property (copy, nonatomic) HUGridCameraCellLayoutOptions *cameraCellOptions; // ivar: _cameraCellOptions
@property (readonly, nonatomic) CGFloat cameraCellWidth;
@property (readonly, nonatomic) NSInteger cellSizeSubclass;
@property (nonatomic) CGFloat columnSpacing; // ivar: _columnSpacing
@property (nonatomic) NSUInteger columnStyle; // ivar: _columnStyle
@property (nonatomic) NSUInteger contentColorStyle; // ivar: _contentColorStyle
@property (nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (copy, nonatomic) HUFilterCategoryCellLayoutOptions *filterCategoryCellOptions; // ivar: _filterCategoryCellOptions
@property (readonly, nonatomic) CGFloat fixedWidthForCell;
@property (readonly, nonatomic) CGFloat gutter;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headlineBaselineToSceneHeaderBaselineDistance; // ivar: _headlineBaselineToSceneHeaderBaselineDistance
@property (readonly, nonatomic) CGFloat headlineCellHeight;
@property (copy, nonatomic) HUGridHeadlineCellLayoutOptions *headlineCellOptions; // ivar: _headlineCellOptions
@property (retain, nonatomic) UIFont *headlineFont; // ivar: _headlineFont
@property (nonatomic) BOOL headlineHidden; // ivar: _headlineHidden
@property (readonly, nonatomic) CGFloat largeTitleCellTopMargin;
@property (copy, nonatomic) HUGridMediaPlatterCellLayoutOptions *mediaPlatterCellOptions; // ivar: _mediaPlatterCellOptions
@property (nonatomic) CGFloat minimumMarginBelowHeadline; // ivar: _minimumMarginBelowHeadline
@property (copy, nonatomic) HUMosaicCameraCellLayoutOptions *mosaicCameraCellOptions; // ivar: _mosaicCameraCellOptions
@property (readonly, nonatomic) NSInteger numberOfCameraCellsPerRow; // ivar: _numberOfCameraCellsPerRow
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (retain, nonatomic) NSNumber *overrideNumberOfColumns; // ivar: _overrideNumberOfColumns
@property (retain, nonatomic) NSNumber *overrideViewSizeSubclass; // ivar: _overrideViewSizeSubclass
@property (copy, nonatomic) HUGridScenePlaceholderLayoutOptions *placeholderSceneCellOptions; // ivar: _placeholderSceneCellOptions
@property (copy, nonatomic) HUGridPlaceholderServiceCellLayoutOptions *placeholderServiceCellOptions; // ivar: _placeholderServiceCellOptions
@property (readonly, nonatomic) CGFloat pointWidthForCurrentViewSizeSubclass;
@property (readonly, nonatomic) CGFloat pointWidthForFullWidthCell;
@property (nonatomic) CGFloat rowSpacing; // ivar: _rowSpacing
@property (copy, nonatomic) HUGridSceneCellLayoutOptions *sceneCellOptions; // ivar: _sceneCellOptions
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (nonatomic) CGFloat sectionBottomMargin; // ivar: _sectionBottomMargin
@property (nonatomic) CGFloat sectionBottomToNextSectionTitleBaselineDistance; // ivar: _sectionBottomToNextSectionTitleBaselineDistance
@property (readonly, nonatomic) CGFloat sectionHeaderCellHeight;
@property (retain, nonatomic) UIFont *sectionHeaderFont; // ivar: _sectionHeaderFont
@property (nonatomic) CGFloat sectionLeadingMargin; // ivar: _sectionLeadingMargin
@property (nonatomic) UIEdgeInsets sectionTitleMargin; // ivar: _sectionTitleMargin
@property (nonatomic) CGFloat sectionTopMargin; // ivar: _sectionTopMargin
@property (nonatomic) CGFloat sectionTrailingMargin; // ivar: _sectionTrailingMargin
@property (copy, nonatomic) HUGridServiceCellLayoutOptions *serviceCellOptions; // ivar: _serviceCellOptions
@property (copy, nonatomic) HUGridStatusCellLayoutOptions *statusCellOptions; // ivar: _statusCellOptions
@property (nonatomic) BOOL statusHidden; // ivar: _statusHidden
@property (readonly, nonatomic) CGFloat statusListCellBottomMargin;
@property (readonly, nonatomic) CGFloat statusListCellHeight;
@property (readonly, nonatomic) CGFloat statusListCellTopMargin;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize viewSize; // ivar: _viewSize
@property (readonly, nonatomic) NSInteger viewSizeSubclass;
@property (copy, nonatomic) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerCellOptions; // ivar: _welcomeUIBannerCellOptions


+(NSUInteger)_numberOfAccessibilityColumnsForFlexibleWidthStyleWithSizeSubclass:(NSInteger)arg0 ;
+(NSUInteger)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(NSInteger)arg0 contentSizeCategory:(id)arg1 ;
+(NSUInteger)_numberOfNormalColumnsForFlexibleWidthStyleWithSizeSubclass:(NSInteger)arg0 ;
+(id)defaultOptionsForViewSize:(struct CGSize )arg0 ;
+(id)defaultOptionsForViewSize:(struct CGSize )arg0 columnStyle:(NSUInteger)arg1 ;
+(id)defaultOptionsForViewSize:(struct CGSize )arg0 columnStyle:(NSUInteger)arg1 overrideSizeSubclass:(id)arg2 ;
+(id)defaultOptionsForViewSize:(struct CGSize )arg0 overrideSizeSubclass:(NSInteger)arg1 ;
-(CGFloat)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(CGFloat)arg0 ;
-(CGFloat)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(CGFloat)arg0 totalNumberOfColumns:(NSInteger)arg1 totalWidth:(CGFloat)arg2 useDefaultSectionMargin:(BOOL)arg3 ;
-(CGFloat)_pointWidthForFractionalNumberOfColumns:(CGFloat)arg0 ;
-(CGFloat)_preferredSectionHeightForNumberOfRows:(NSUInteger)arg0 withCellHeight:(CGFloat)arg1 ;
-(CGFloat)pointWidthForNumberOfColumns:(NSInteger)arg0 ;
-(CGFloat)pointWidthForWelcomeUIBanner;
-(CGFloat)preferredSectionHeightForNumberOfSceneRows:(NSUInteger)arg0 ;
-(CGFloat)preferredSectionHeightForNumberOfServiceRows:(NSUInteger)arg0 spanningColumns:(NSUInteger)arg1 ;
-(id)_childDisplayOptions;
-(id)_columnStyleToString:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewSize:(struct CGSize )arg0 columnStyle:(NSUInteger)arg1 overrideSizeSubclass:(id)arg2 ;


@end


#endif