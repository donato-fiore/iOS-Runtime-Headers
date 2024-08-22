// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDAYASSETSSECTIONCONFIGURATOR_H
#define PXDAYASSETSSECTIONCONFIGURATOR_H



#import "PXAssetsSectionConfigurator.h"
#import "PXDayAssetsSectionHeaderLayoutSpec.h"
#import "PXAssetsSectionBodyAllPhotosGridLayoutSpec.h"
#import "PXDayAssetsSectionBodyLayoutSpec.h"

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator {
    PXDayAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
    PXAssetsSectionBodyAllPhotosGridLayoutSpec *_allPhotosGridBodySpec;
    PXDayAssetsSectionBodyLayoutSpec *_daysBodySpec;
}




-(id)_bodySpecForBodyStyle:(NSInteger)arg0 zoomLevel:(NSInteger)arg1 ;
-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(struct CGSize )estimatedSizeOfSectionForAssetCollection:(id)arg0 isCurated:(BOOL)arg1 numberOfAssets:(NSInteger)arg2 referenceSize:(struct CGSize )arg3 ;
-(void)_configureSelectAllButtonOfSectionLayout:(id)arg0 ;
-(void)_getHeaderAndBodyStylesForAssetCollection:(id)arg0 isCurated:(BOOL)arg1 zoomLevel:(NSInteger)arg2 headerStyle:(*NSInteger)arg3 bodyStyle:(*NSInteger)arg4 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif