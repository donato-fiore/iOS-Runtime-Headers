// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLDICTVECTORIZER_H
#define MLDICTVECTORIZER_H

@class NSOrderedSet, NSString;
@protocol MLModelSpecificationLoader;


#import "MLModel.h"

@interface MLDictVectorizer : MLModel <MLModelSpecificationLoader>



@property (readonly, nonatomic) NSOrderedSet *categoryName; // ivar: _categoryName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)categoryName:(id)arg0 dataTransformerName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 error:(*id)arg6 ;
+(id)categoryName:(id)arg0 inputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 error:(*id)arg5 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)constructDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWith:(id)arg0 dataTransformerName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 error:(*id)arg7 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif