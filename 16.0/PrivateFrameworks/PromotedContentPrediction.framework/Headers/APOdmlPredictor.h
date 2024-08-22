// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLPREDICTOR_H
#define APODMLPREDICTOR_H

@class MLFeatureValue, MLArrayBatchProvider, MLModel;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"

@interface APOdmlPredictor : NSObject

@property (retain, nonatomic) MLFeatureValue *appDownloadVector; // ivar: _appDownloadVector
@property (retain, nonatomic) MLFeatureValue *appUsageVector; // ivar: _appUsageVector
@property (readonly, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) MLArrayBatchProvider *batchInput; // ivar: _batchInput
@property (retain, nonatomic) MLFeatureValue *installedAppVector; // ivar: _installedAppVector
@property (readonly, nonatomic) BOOL isTwoDimensional; // ivar: _isTwoDimensional
@property (readonly, nonatomic) MLModel *predictionModel; // ivar: _predictionModel


-(BOOL)isTwoDimensional:(id)arg0 ;
-(id)_translateFeaturesToTwoDimensional:(id)arg0 ;
-(id)featuresForResponse:(id)arg0 adSpecificFeatures:(id)arg1 ;
-(id)initWithResponses:(id)arg0 adSpecificFeatures:(id)arg1 assetManager:(id)arg2 model:(id)arg3 ;
-(id)predictTapThroughRate;
-(void)addOnDeviceFeaturesToDictionary:(id)arg0 ;
-(void)fetchOnDeviceFeatures;


@end


#endif