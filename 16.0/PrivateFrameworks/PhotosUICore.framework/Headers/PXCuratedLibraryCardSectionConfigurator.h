// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYCARDSECTIONCONFIGURATOR_H
#define PXCURATEDLIBRARYCARDSECTIONCONFIGURATOR_H



#import "PXAssetsSectionConfigurator.h"
#import "PXCuratedLibraryCardSectionBodyLayoutSpec.h"

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator

@property (readonly, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec; // ivar: _cardSpec


-(id)createCardSpecWithExtendedTraitCollection:(id)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(struct UIEdgeInsets )containerInsets;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif