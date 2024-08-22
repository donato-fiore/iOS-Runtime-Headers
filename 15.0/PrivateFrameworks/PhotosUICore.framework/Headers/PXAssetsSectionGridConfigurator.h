// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETSSECTIONGRIDCONFIGURATOR_H
#define PXASSETSSECTIONGRIDCONFIGURATOR_H



#import "PXAssetsSectionConfigurator.h"

@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator

@property (nonatomic) BOOL aspectFitContent; // ivar: _aspectFitContent
@property (readonly, nonatomic) BOOL supportsAspectRatioToggle;
@property (nonatomic) NSInteger zoomStep; // ivar: _zoomStep


-(BOOL)_layoutHasIndividualItems:(id)arg0 forSpec:(id)arg1 ;
-(BOOL)_layoutIsAspectFit:(id)arg0 forSpec:(id)arg1 ;
-(NSInteger)numberOfZoomStepsWithDataSource:(id)arg0 ;
-(id)headerSpecForHeaderStyle:(NSInteger)arg0 assetSectionLayout:(id)arg1 ;
-(struct CGSize )_interItemSpacingForLayout:(id)arg0 forSpec:(id)arg1 ;
-(struct CGSize )estimatedSizeOfSectionForAssetCollection:(id)arg0 isCurated:(BOOL)arg1 numberOfAssets:(NSInteger)arg2 referenceSize:(struct CGSize )arg3 ;
-(void)_configureGridLayout:(id)arg0 inSectionLayout:(id)arg1 ;
-(void)configureAssetSectionLayout:(id)arg0 ;


@end


#endif