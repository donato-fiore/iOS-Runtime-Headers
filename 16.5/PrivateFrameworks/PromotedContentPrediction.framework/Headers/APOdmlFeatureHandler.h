// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLFEATUREHANDLER_H
#define APODMLFEATUREHANDLER_H

@class MLFeatureValue, MLArrayBatchProvider;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"

@interface APOdmlFeatureHandler : NSObject

@property (retain, nonatomic) MLFeatureValue *appDownloadVector; // ivar: _appDownloadVector
@property (retain, nonatomic) MLFeatureValue *appUsageVector; // ivar: _appUsageVector
@property (readonly, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) MLArrayBatchProvider *batchInput; // ivar: _batchInput
@property (retain, nonatomic) MLFeatureValue *installedAppVector; // ivar: _installedAppVector
@property (readonly, nonatomic) BOOL isTwoDimensional; // ivar: _isTwoDimensional


-(BOOL)isTwoDimensional:(id)arg0 ;
-(id)_translateFeaturesToTwoDimensional:(id)arg0 ;
-(id)featuresForResponse:(id)arg0 adSpecificFeatures:(id)arg1 ;
-(id)initWithResponses:(id)arg0 adSpecificFeatures:(id)arg1 assetManager:(id)arg2 model:(id)arg3 ;
-(void)addOnDeviceFeaturesToDictionary:(id)arg0 ;
-(void)fetchOnDeviceFeatures;


@end


#endif