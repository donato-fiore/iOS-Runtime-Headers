// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCOLORNORMALIZATIONAUTOADJUSTMENT_H
#define PXSTORYCOLORNORMALIZATIONAUTOADJUSTMENT_H

@protocol PXDisplayAsset;


#import "PXStoryColorNormalizationAdjustment.h"

@interface PXStoryColorNormalizationAutoAdjustment : PXStoryColorNormalizationAdjustment

@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset


-(BOOL)isEqualToDisplayAssetAdjustment:(id)arg0 ;
-(id)adjustmentSummary;
-(id)applyToImage:(id)arg0 targetSize:(struct CGSize )arg1 ;


@end


#endif