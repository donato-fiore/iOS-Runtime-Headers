// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSSECTIONLAYOUTSPEC_H
#define PXASSETSSECTIONLAYOUTSPEC_H

@class NSShadow;


#import "PXFeatureSpec.h"
#import "PXYearAssetsSectionConfigurator.h"
#import "PXMonthCardSectionConfigurator.h"
#import "PXMonthChapterSectionConfigurator.h"
#import "PXDayAssetsSectionConfigurator.h"
#import "PXAssetsSectionGridConfigurator.h"
#import "PXZoomablePhotosLayoutSpec.h"

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {
    PXYearAssetsSectionConfigurator *_yearSectionConfigurator;
    PXMonthCardSectionConfigurator *_monthSectionConfigurator;
    PXMonthChapterSectionConfigurator *_monthsChapterConfigurator;
    PXDayAssetsSectionConfigurator *_daySectionConfigurator;
    PXAssetsSectionGridConfigurator *_gridConfigurator;
    NSShadow *_shadow;
}


@property (readonly, nonatomic) BOOL disableConfigurators; // ivar: _disableConfigurators
@property (readonly, nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) CGFloat shadowCornerRadius; // ivar: _shadowCornerRadius
@property (readonly, nonatomic) BOOL supportsGridAspectRatioToggle;
@property (readonly, nonatomic) BOOL userInterfaceStyleAllowsShadow; // ivar: _userInterfaceStyleAllowsShadow
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *zoomableSpec; // ivar: _zoomableSpec


-(BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(NSInteger)arg0 ;
-(NSInteger)numberOfGridZoomStepsWithDataSource:(id)arg0 ;
-(id)_configuratorForZoomLevel:(NSInteger)arg0 ;
-(id)gridConfigurator;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 variant:(NSInteger)arg2 ;
-(id)sectionConfiguratorForAssetCollection:(id)arg0 inZoomLevel:(NSInteger)arg1 ;


@end


#endif