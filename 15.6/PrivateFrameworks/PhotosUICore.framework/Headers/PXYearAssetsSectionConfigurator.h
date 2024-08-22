// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXYEARASSETSSECTIONCONFIGURATOR_H
#define PXYEARASSETSSECTIONCONFIGURATOR_H



#import "PXCuratedLibraryCardSectionConfigurator.h"
#import "PXYearAssetsSkimmingSectionHeaderLayoutSpec.h"
#import "PXYearAssetsSectionHeaderLayoutSpec.h"

@interface PXYearAssetsSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXYearAssetsSkimmingSectionHeaderLayoutSpec *_skimmingHeaderSpec;
    PXYearAssetsSectionHeaderLayoutSpec *_normalHeaderSpec;
}




-(id)createCardSpecWithExtendedTraitCollection:(id)arg0 ;
-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif