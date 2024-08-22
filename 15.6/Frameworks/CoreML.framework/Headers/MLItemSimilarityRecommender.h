// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLITEMSIMILARITYRECOMMENDER_H
#define MLITEMSIMILARITYRECOMMENDER_H

@class NSString, NSDictionary, NSArray;
@protocol MLModelSpecificationLoader, MLModeling, MLCompiledModelLoader, MLSpecificationCompiler;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLPredictionEvent.h"

@interface MLItemSimilarityRecommender : MLModel <MLModelSpecificationLoader, MLModeling, MLCompiledModelLoader, MLSpecificationCompiler>

 {
    shared_ptr<Archiver::MMappedFile> m_mmapped_model;
    vector<unsigned char, std::allocator<unsigned char>> m_cached_model;
    NSUInteger m_num_items;
    NSString *m_item_data_feature_name;
    NSString *m_num_recommendations_feature_name;
    NSString *m_item_restriction_feature_name;
    NSString *m_item_exclusion_feature_name;
    NSString *m_item_list_output_feature_name;
    NSString *m_item_score_output_feature_name;
    NSDictionary *m_item_mapping;
    NSArray *m_item_string_list;
    NSArray *m_item_integer_list;
    vector<double, std::allocator<double>> _m_scores;
    vector<unsigned long long, std::allocator<unsigned long long>> _m_items;
    vector<unsigned long long, std::allocator<unsigned long long>> _m_item_buffer;
    vector<unsigned char, std::allocator<unsigned char>> _m_item_invalid_mask;
    vector<double, std::allocator<double>> _m_item_predictions;
    vector<std::pair<unsigned long long, double>, std::allocator<std::pair<unsigned long long, double>>> _m_item_heap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (readonly) Class superclass;


+(id)compileSpecification:(*void)arg0 toArchive:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)compiledVersionForSpecification:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(*void)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)_mapItemSequence:(id)arg0 dest:(*void)arg1 error:(*id)arg2 ;
-(char *)_model_data;
-(id)_itemForIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif