// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCURATIONMODEL_V5_H
#define CLSCURATIONMODEL_V5_H

@class v4;


#import "CLSCLIPprintModel.h"
#import "CLSCityNatureModel.h"
#import "CLSNSFWModel.h"
#import "CLSWallpaperScoreModel.h"

@interface CLSCurationModel_v5 : v4

@property (readonly) CLSCLIPprintModel *CLIPprintModel; // ivar: _CLIPprintModel
@property (readonly) CLSCityNatureModel *cityNatureModel; // ivar: _cityNatureModel
@property (readonly) CLSNSFWModel *nsfwModel;
@property (readonly) CLSWallpaperScoreModel *wallpaperScoreModel; // ivar: _wallpaperScoreModel


+(id)baseSpecificationWithSpecification:(id)arg0 ;
-(BOOL)isShowcasingFoodWithAsset:(id)arg0 ;
-(id)initWithCurationModelSpecification:(id)arg0 ;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(id)arg0 ;
-(void)enumerateSignalModelsUsingBlock:(id)arg0 ;


@end


#endif