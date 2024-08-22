// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYLAYOUTSPEC_H
#define PXCURATEDLIBRARYLAYOUTSPEC_H



#import "PXFeatureSpec.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "PXMonthsLayoutMetrics.h"
#import "PXAssetsSectionLayoutSpec.h"
#import "PXExtendedImageConfiguration.h"
#import "PXYearsLayoutMetrics.h"

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec {
    CGFloat _estimatedSpacingBetweenMonths;
    CGFloat _spacingBetweenYears;
    CGFloat _spacingBetweenMonths;
    CGFloat _spacingBetweenDays;
}


@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec; // ivar: _allPhotosFloatingHeaderSpec
@property (readonly, nonatomic) BOOL allowsPaginatedScrollingInYearsAndMonths; // ivar: _allowsPaginatedScrollingInYearsAndMonths
@property (readonly, nonatomic) BOOL allowsSlideshowInYears; // ivar: _allowsSlideshowInYears
@property (readonly, nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec; // ivar: _daysTopHeaderSpec
@property (readonly, nonatomic) BOOL isTopSafeAreaFullyCovered; // ivar: _isTopSafeAreaFullyCovered
@property (readonly, nonatomic) PXMonthsLayoutMetrics *monthsLayoutMetrics; // ivar: _monthsLayoutMetrics
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *monthsTopHeaderSpec; // ivar: _monthsTopHeaderSpec
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *sectionLayoutSpec; // ivar: _sectionLayoutSpec
@property (readonly, nonatomic) CGFloat spacingBetweenHeaderLastBaselineAndAllPhotosTop; // ivar: _spacingBetweenHeaderLastBaselineAndAllPhotosTop
@property (readonly, nonatomic) CGFloat spacingBetweenSafeAreaTopAndFirstMonthTitle; // ivar: _spacingBetweenSafeAreaTopAndFirstMonthTitle
@property (readonly, nonatomic) CGFloat spacingBetweenSafeAreaTopAndFirstYearCard; // ivar: _spacingBetweenSafeAreaTopAndFirstYearCard
@property (readonly, nonatomic) PXExtendedImageConfiguration *statusBarGradientImageConfiguration; // ivar: _statusBarGradientImageConfiguration
@property (readonly, nonatomic) PXYearsLayoutMetrics *yearsLayoutMetrics; // ivar: _yearsLayoutMetrics
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *yearsTopHeaderSpec; // ivar: _yearsTopHeaderSpec


-(CGFloat)defaultInterlayoutSpacingForZoomLevel:(NSInteger)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif