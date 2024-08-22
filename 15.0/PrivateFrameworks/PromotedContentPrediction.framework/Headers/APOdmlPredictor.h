// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLPREDICTOR_H
#define APODMLPREDICTOR_H

@class MLDictionaryFeatureProvider, MLModel;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) MLDictionaryFeatureProvider *input; // ivar: _input
@property (readonly, nonatomic) MLModel *predictionModel; // ivar: _predictionModel


-(BOOL)checkFeatureVersion:(id)arg0 ;
-(id)addOnDeviceFeaturesToDictionary:(id)arg0 ;
-(id)constructDictionaryWithResponse:(id)arg0 ;
-(id)initWithResponse:(id)arg0 assetManager:(id)arg1 model:(id)arg2 ;
-(id)predictTapThroughRate;


@end


#endif