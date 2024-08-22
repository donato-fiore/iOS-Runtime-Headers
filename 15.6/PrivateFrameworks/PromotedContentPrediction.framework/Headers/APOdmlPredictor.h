// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLPREDICTOR_H
#define APODMLPREDICTOR_H

@class MLDictionaryFeatureProvider, MLModel;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) MLDictionaryFeatureProvider *input; // ivar: _input
@property (readonly, nonatomic) MLModel *predictionModel; // ivar: _predictionModel


-(id)_translateFeaturesToTwoDimensional:(id)arg0 ;
-(id)initWithResponse:(id)arg0 adSpecificFeatures:(id)arg1 assetManager:(id)arg2 model:(id)arg3 placementType:(NSUInteger)arg4 adamID:(id)arg5 ;
-(id)predictTapThroughRate;
-(void)addOnDeviceFeaturesToDictionary:(id)arg0 usingTwoDimensional:(BOOL)arg1 ;


@end


#endif