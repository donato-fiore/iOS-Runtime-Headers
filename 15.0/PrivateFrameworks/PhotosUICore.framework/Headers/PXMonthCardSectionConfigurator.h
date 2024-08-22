// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMONTHCARDSECTIONCONFIGURATOR_H
#define PXMONTHCARDSECTIONCONFIGURATOR_H



#import "PXCuratedLibraryCardSectionConfigurator.h"
#import "PXMonthsAssetsSectionHeaderLayoutSpec.h"

@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXMonthsAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
}




+(NSInteger)zoomLevel;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg0 ;
-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif