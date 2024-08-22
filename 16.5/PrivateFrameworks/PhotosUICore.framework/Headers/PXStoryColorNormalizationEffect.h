// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCOLORNORMALIZATIONEFFECT_H
#define PXSTORYCOLORNORMALIZATIONEFFECT_H

@class PFStoryRecipeDisplayAssetNormalization, NSString;


#import "PXGColorGradingEffect.h"
#import "PXStoryColorNormalizationCubeLibrary.h"

@interface PXStoryColorNormalizationEffect : PXGColorGradingEffect {
    PXStoryColorNormalizationCubeLibrary *_library;
}


@property (retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *assetNormalization; // ivar: _assetNormalization
@property (nonatomic) NSInteger currentRequestID; // ivar: _currentRequestID
@property (readonly, nonatomic) NSString *effectDetails;
@property (readonly, nonatomic) NSString *effectSummary;


-(id)initWithEntityManager:(id)arg0 ;
-(void)_handleResult:(id)arg0 resultType:(NSUInteger)arg1 requestID:(NSInteger)arg2 ;
-(void)_updateColorLookupCube;


@end


#endif