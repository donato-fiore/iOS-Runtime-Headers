// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSSECTIONCONFIGURATOR_H
#define PXASSETSSECTIONCONFIGURATOR_H


#import <Foundation/Foundation.h>

#import "PXAssetsSectionLayoutSpec.h"

@interface PXAssetsSectionConfigurator : NSObject {
    PXAssetsSectionLayoutSpec *_assetsSectionLayoutSpec;
}


@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
@property (readonly, nonatomic) UIEdgeInsets containerInsets; // ivar: _containerInsets
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


-(BOOL)supportsAspectRatioToggle;
-(NSInteger)initialZoomStep;
-(NSInteger)numberOfZoomStepsWithDataSource:(id)arg0 ;
-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 assetsSectionLayoutSpec:(id)arg1 ;
-(id)updatedHeaderLayout:(id)arg0 withHeaderStyle:(NSInteger)arg1 forAssetSectionLayout:(id)arg2 ;
-(struct CGRect )containerFrameForAssetSectionLayout:(id)arg0 ;
-(struct CGSize )estimatedSizeOfSectionForAssetCollection:(id)arg0 isCurated:(BOOL)arg1 numberOfAssets:(NSInteger)arg2 referenceSize:(struct CGSize )arg3 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif