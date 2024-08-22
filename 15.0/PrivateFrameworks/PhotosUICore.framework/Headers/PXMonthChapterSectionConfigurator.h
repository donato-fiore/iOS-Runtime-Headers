// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMONTHCHAPTERSECTIONCONFIGURATOR_H
#define PXMONTHCHAPTERSECTIONCONFIGURATOR_H



#import "PXAssetsSectionConfigurator.h"
#import "PXMonthCardSectionBodyLayoutSpec.h"
#import "PXCuratedLibraryChapterHeaderLayoutSpec.h"

@interface PXMonthChapterSectionConfigurator : PXAssetsSectionConfigurator

@property (readonly, nonatomic) PXMonthCardSectionBodyLayoutSpec *cardBodySpec; // ivar: _cardBodySpec
@property (readonly, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *chapterHeaderSpec; // ivar: _chapterHeaderSpec


-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(id)updatedHeaderLayout:(id)arg0 withHeaderStyle:(NSInteger)arg1 forAssetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif