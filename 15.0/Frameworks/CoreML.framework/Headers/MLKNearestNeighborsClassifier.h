// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLKNEARESTNEIGHBORSCLASSIFIER_H
#define MLKNEARESTNEIGHBORSCLASSIFIER_H

@class NSString, NSArray, NSOrderedSet, NSDictionary;
@protocol MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding, MLNearestNeighborsIndex, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MLModel.h"
#import "MLParameterContainer.h"
#import "MLUpdateProgressHandlers.h"

@interface MLKNearestNeighborsClassifier : MLModel <MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding>



@property (nonatomic) BOOL continueWithUpdate; // ivar: _continueWithUpdate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject *defaultLabel; // ivar: _defaultLabel
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MLNearestNeighborsIndex> *index; // ivar: _index
@property (nonatomic) NSInteger indexType; // ivar: _indexType
@property (nonatomic) NSInteger labelType; // ivar: _labelType
@property (retain, nonatomic) NSArray *labelsForDataPoints; // ivar: _labelsForDataPoints
@property (retain, nonatomic) NSOrderedSet *labelsSet; // ivar: _labelsSet
@property (retain, nonatomic) NSString *nearestDistancesFeatureName; // ivar: _nearestDistancesFeatureName
@property (retain, nonatomic) NSString *nearestLabelsFeatureName; // ivar: _nearestLabelsFeatureName
@property (nonatomic) NSUInteger numberOfDimensions; // ivar: _numberOfDimensions
@property (retain, nonatomic) MLParameterContainer *parameterContainer; // ivar: _parameterContainer
@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // ivar: _progressHandlersDispatchQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *updateParameters; // ivar: _updateParameters
@property (nonatomic) NSInteger weightingScheme; // ivar: _weightingScheme


+(BOOL)supportsSecureCoding;
+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 parameters:(id)arg2 dataPoints:(*void)arg3 labels:(id)arg4 error:(*id)arg5 ;
-(id)inputMultiArray:(id)arg0 error:(*id)arg1 ;
-(id)packageOutputWithPredictedLabel:(id)arg0 classProbabilities:(id)arg1 nearestLabels:(id)arg2 nearestDistances:(id)arg3 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )computeKClosestLabels:(id)arg0 ;
-(void)cancelUpdate;
-(void)computeClassProbabilities:(*id)arg0 from:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractNearestNeighborLabels:(*id)arg0 distances:(*id)arg1 from:(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )arg2 ;
-(void)resumeUpdate;
-(void)resumeUpdateWithParameters:(id)arg0 ;
-(void)setUpdateProgressHandlers:(id)arg0 dispatchQueue:(id)arg1 ;
-(void)updateModelWithData:(id)arg0 ;


@end


#endif