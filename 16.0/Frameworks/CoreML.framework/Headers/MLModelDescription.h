// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMODELDESCRIPTION_H
#define MLMODELDESCRIPTION_H

@class NSArray, NSDictionary, NSOrderedSet, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLFeatureDescription.h"
#import "MLLayerPath.h"

@interface MLModelDescription : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *classLabels; // ivar: _classLabels
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly, nonatomic) NSDictionary *inputDescriptionsByName; // ivar: _inputDescriptionsByName
@property (readonly) NSOrderedSet *inputFeatureNames; // ivar: _inputFeatureNames
@property (nonatomic) BOOL isUpdatable; // ivar: _isUpdatable
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) MLLayerPath *modelPath; // ivar: _modelPath
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSDictionary *outputDescriptionsByName; // ivar: _outputDescriptionsByName
@property (readonly) NSOrderedSet *outputFeatureNames; // ivar: _outputFeatureNames
@property (retain, nonatomic) NSDictionary *parameterDescriptionsByKey; // ivar: _parameterDescriptionsByKey
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName; // ivar: _predictedFeatureName
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName; // ivar: _predictedProbabilitiesName
@property (readonly, copy, nonatomic) MLFeatureDescription *predictedValueFeatureDescription;
@property (retain, nonatomic) NSDictionary *trainingInputDescriptionsByName; // ivar: _trainingInputDescriptionsByName


+(BOOL)supportsSecureCoding;
+(id)metadataWithFormat:(*void)arg0 ;
+(id)metadataWithSpecification:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescription:(id)arg0 ;
-(BOOL)validateAsClassifierDescriptionAndReturnError:(*id)arg0 ;
-(BOOL)validateAsRegressorDescriptionAndReturnError:(*id)arg0 ;
-(BOOL)verifyInput:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputDescriptions:(id)arg0 outputDescriptions:(id)arg1 predictedFeatureName:(id)arg2 predictedProbabilitiesName:(id)arg3 metadata:(id)arg4 ;
-(id)initWithInputDescriptions:(id)arg0 outputDescriptions:(id)arg1 predictedFeatureName:(id)arg2 predictedProbabilitiesName:(id)arg3 trainingInputDescriptions:(id)arg4 metadata:(id)arg5 ;
-(id)initWithInputDescriptions:(id)arg0 outputDescriptions:(id)arg1 predictedFeatureName:(id)arg2 predictedProbabilitiesName:(id)arg3 trainingInputDescriptions:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 metadata:(id)arg7 ;
-(id)initWithModelDescriptionSpecification:(*void)arg0 error:(*id)arg1 ;
-(id)initWithModelSpecification:(*void)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif