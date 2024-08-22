// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGFILTERSDECODER_H
#define PHAPRIVATEFEDERATEDLEARNINGFILTERSDECODER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningFiltersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *assetFeatureExtractorNameToClass; // ivar: _assetFeatureExtractorNameToClass
@property (readonly, nonatomic) NSDictionary *assetPhotoLibraryFeatureExtractorNameToClass; // ivar: _assetPhotoLibraryFeatureExtractorNameToClass
@property (readonly, nonatomic) NSDictionary *facesFeatureExtractorNameToClass; // ivar: _facesFeatureExtractorNameToClass
@property (readonly, nonatomic) NSString *fingerprintVersionString; // ivar: _fingerprintVersionString
@property (readonly, nonatomic) NSDictionary *graphFeatureExtractorNameToClass; // ivar: _graphFeatureExtractorNameToClass


-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 ;
-(BOOL)validateFiltersForDatasetName:(id)arg0 error:(*id)arg1 ;
-(NSInteger)featureExtractorTypeForFeatureExtractorName:(id)arg0 ;
-(NSInteger)featureValidatorTypeForFeatureExtractorName:(id)arg0 ;
-(id)featureExtractorFromName:(id)arg0 error:(*id)arg1 ;
-(id)featureValidatorForFilterConfig:(id)arg0 featureExtractor:(id)arg1 featureValidatorType:(NSInteger)arg2 featureExtractorType:(NSInteger)arg3 error:(*id)arg4 ;
-(id)featureValidatorsForFilterConfigList:(id)arg0 featureExtractor:(id)arg1 featureValidatorType:(NSInteger)arg2 featureExtractorType:(NSInteger)arg3 error:(*id)arg4 ;
-(id)filtersByDatasetNameFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)filtersFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithFingeprintVersionString:(id)arg0 ;


@end


#endif