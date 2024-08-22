// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLPREDICTOR_H
#define APODMLPREDICTOR_H

@class NSArray, MLModel;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"
#import "APOdmlFeatureHandler.h"

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) NSArray *adamIDs; // ivar: _adamIDs
@property (readonly, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) APOdmlFeatureHandler *featureHandler; // ivar: _featureHandler
@property (readonly, nonatomic) MLModel *predictionModel; // ivar: _predictionModel


-(id)initWithResponses:(id)arg0 adSpecificFeatures:(id)arg1 assetManager:(id)arg2 model:(id)arg3 ;
-(id)predictTapThroughRate;
-(void)localOutputLog:(id)arg0 adamID:(id)arg1 ;
-(void)validateOutput:(id)arg0 adamID:(id)arg1 ;


@end


#endif