// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCOLORNORMALIZATIONADJUSTMENT_H
#define PXSTORYCOLORNORMALIZATIONADJUSTMENT_H

@class NSData, NSString, PIColorNormalizationFilter, PFStoryRecipeDisplayAssetNormalization;
@protocol PXGDisplayAssetAdjustment;

#import <Foundation/Foundation.h>


@interface PXStoryColorNormalizationAdjustment : NSObject <PXGDisplayAssetAdjustment>

 {
    NSData *_colorCubeData;
}


@property (readonly, nonatomic) NSString *adjustmentDetails;
@property (readonly, nonatomic) NSString *adjustmentSummary;
@property (readonly, nonatomic) BOOL allowsUnadjustedOpportunisticDelivery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PIColorNormalizationFilter *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat intensity; // ivar: _intensity
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *normalization;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useColorCube; // ivar: _useColorCube
@property (nonatomic) BOOL useFalseColor; // ivar: _useFalseColor
@property (readonly, nonatomic) BOOL wantsSingleHighQualityDelivery;


+(id)_falseColorMatrixParameters;
+(id)autoAdjustmentForAsset:(id)arg0 ;
+(id)colorCubeForNormalization:(id)arg0 targetColorSpace:(struct CGColorSpace *)arg1 ;
+(id)dummyAdjustment;
+(id)dummyNormalization;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDisplayAssetAdjustment:(id)arg0 ;
-(id)applyToImage:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNormalization:(id)arg0 ;
-(id)initWithNormalizationFilter:(id)arg0 ;
-(struct CGSize )requestSizeForProposedTargetSize:(struct CGSize )arg0 ;


@end


#endif